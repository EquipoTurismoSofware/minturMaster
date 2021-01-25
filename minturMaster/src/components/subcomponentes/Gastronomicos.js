import React, { Component } from "react";
import { Link } from "react-router-dom";
import { Consumer } from "../../context";
import axios from "axios";
import Viewer from "./Viewer";

/*
    Ej de uso: <gastronomicos idLocalidad="0" data={array} />
*/

class Gastronomicos extends Component {
    constructor(props) {
        super(props);
        this.state = {
            loading: true,
            idLocalidad: 0,
            data: [],
            gastronomicos: [],
            visibles: 4,
            clase: "alojamiento",
            fotos: [],
            img: {
              src: "",
              visible: false,
            },
          
        //---- Propiedades de PGastronomia---
            isNotFound: true,
            id: 0,
            dataAtractivo: {
              color: "722789",
            },
            carousel: [],
            img: {
              src: "",
              visible: false,
            },
        //---------------


        };
        //----
        this.verImagen = this.verImagen.bind(this);
        this.closeImg = this.closeImg.bind(this);
        //---------


        this.setData = this.setData.bind(this);
        this.calculoVisibles = this.calculoVisibles.bind(this);
        this.getData = this.getData.bind(this);
        
    }


    
  verImagen(e) {
    this.setState({
      img: {
        src: e.target.src,
        visible: true,
      },
    });
  }

  closeImg() {
    this.setState({
      img: {
        src: "",
        visible: false,
      },
    });
  }


//-------- GetData de PGastronomia    
    getData() {
        var token = this.context.token;
        var self = this;
        //Datos del Atractivo
        axios({
          method: "get",
          headers: {
            Authorization: token,
          },
          url: `${process.env.REACT_APP_API}/gastronomia/${self.state.id}`,
          responseType: "json",
        })
          .then((response) => {
            if (response.data.data.count > 0) {
              self.setState(
                {
                  dataAtractivo: response.data.data.registros[0],
                },
                () => {
                  //Imagenes del Atractivo
                  axios({
                    method: "get",
                    headers: {
                      Authorization: token,
                    },
                    url: `${process.env.REACT_APP_API}/gastronomia/${self.state.id}/imagenes`,
                    responseType: "json",
                  })
                    .then((response) => {
                      if (response.data.data.count > 0) {
                        let activo = false;
                        let carousel = response.data.data.registros.map(
                          (a, index) => {
                            if (a.imagen === "default.jpg") {
                              return null;
                            }
                            let estilo = {
                              backgroundImage: `url(${process.env.REACT_APP_API_RECURSOS}/atractivos/${a.imagen})`,
                              backgroundSize: "cover",
                              backgroundPosition: "center",
                              backgroundRepeat: "no-repeat",
                            };
                            if (!activo) {
                              activo = true;
                              return (
                                <div
                                  key={`caro-${index}`}
                                  className="carousel-item active"
                                  style={estilo}
                                >
                                  <h5 className="pd-top">
                                    {self.state.dataAtractivo.nombre}
                                  </h5>
                                </div>
                              );
                            } else {
                              return (
                                <div
                                  key={`caro-${index}`}
                                  className="carousel-item"
                                  style={estilo}
                                >
                                  <h5 className="pd-top">
                                    {self.state.dataAtractivo.nombre}
                                  </h5>
                                </div>
                              );
                            }
                          }
                        );
                        let fotos = response.data.data.registros.map((a, index) => {
                          return (
                            <img
                              key={`img-atr-${a.id}`}
                              className="img-fluid"
                              src={`${process.env.REACT_APP_API_RECURSOS}/atractivos/${a.imagen}`}
                              alt="Img"
                              onClick={(e) => {
                                this.verImagen(e);
                              }}
                            />
                          );
                        });
                        self.setState({
                          carousel: carousel,
                          fotos: fotos,
                          loading: false,
                          isNotFound: false,
                        });
                      } else {
                        //Error no se enocntró el id
                        self.setState({
                          loading: false,
                        });
                      }
                    })
                    .catch((error) => {
                      console.log(error);
                    });
                }
              );
            } else {
              //Error no se encontró el id
              self.setState({
                loading: false,
                isNotFound: true,
              });
            }
          })
          .catch((error) => {
            console.log(error);
          });
        //self.setState({ loading: false });
      }
//-------- Fin GetData de PGastronomia    








    calculoVisibles() {
        var w = window.innerWidth;
        //console.log(w);
        if(w > 1200) {
            this.setState({visibles: 4});
        } else if(w <= 1200 && w >= 1024) {
            this.setState({visibles: 3});
        } else if(w <= 1024 && w >= 768) {
            this.setState({visibles: 2});
        } else {
            this.setState({visibles: 1});
        }
    }

    setData() {
        this.getData();
        const token = this.context.token;
        var self = this;
        this.setState({
            loading: true
        }, () => {
            if(parseInt(self.state.idLocalidad) === 0) {
                self.setState({
                    gastronomicos: self.state.data,
                    loading: false
                });
            } else {
                axios({
                    method: "get",
                    headers: {
                        "Authorization": token
                    },
                    url: `${process.env.REACT_APP_API}/guias/ciudad/${self.state.idLocalidad}/full`,
                    responseType: 'json'
                })
                .then((response) => {
                    self.setState({
                        gastronomicos: response.data.data.registros,
                        loading: false
                    });
                })
                .catch((error) => {
                    console.log(error);
                });
            }
            
        });
    }

    componentDidUpdate(prevProps) {
        if(this.props.idLocalidad !== prevProps.idLocalidad || this.props.data !== prevProps.data) {
            this.setState({
                loading: true,
                idLocalidad: this.props.idLocalidad,
                data: this.props.data
            }, () => {
                this.setData();
            });
        }
    }

    componentDidMount() {
        this.setState({
            idLocalidad: this.props.idLocalidad,
            data: this.props.data
        }, () => {
            this.setData();
        });
        window.addEventListener("resize", this.calculoVisibles);
        this.calculoVisibles();
    }

    componentWillUnmount() {
        window.removeEventListener("resize", this.calculoVisibles);
    }
/*let foto = "default.jpg";
          if(alo.imagen !== "") {
              foto = alo.imagen
          } */
    render() {
        const loading = this.state.loading;
        const isNotFound = this.state.isNotFound;
        const fotos = this.state.fotos;
        console.log("gastronomicos" + this.state.gastronomicos);
        const gastronomicos = this.state.gastronomicos.map((alo) => {
            /*let foto = "default.jpg";
            if(alo.imagenes.length > 0) {
                foto = alo.imagenes[0].imagen;
            }*/
            let foto = "default.jpg";
          if(alo.imagen !== "") {
              foto = alo.imagen
          }
            return(
                <div key={`alo-card-${alo.id}`} className="alo-card m-3">
                    <div className="img-box">
                        <div className="img-content">
                            <div className="nombre">{alo.nombre}</div>
                           <img className="" src={`${process.env.REACT_APP_API}/atractivos/${foto}`} alt="Img" />
                           <div className="atractivo-fotos">{fotos[0]}</div>

                           {alo.url}
                           
                        </div>
                    </div>
                    <div className="details">
                        <div className="content">
                            <div className="nombre">{alo.nombre}</div>
                            <ul className="detalles">
                            <li><i class="fas fa-thumbtack"></i><span>  {alo.ciudad}</span></li>
                                <li><i class="fas fa-hotel"></i><span>  {alo.tipo}</span></li>
                                <li><i className="fas fa-user" /><a href={`tel:+549${alo.caracteristica}${alo.telefono}`}> +54 9 {alo.caracteristica} - {alo.telefono}</a></li>
                            </ul>
                            <div className="vermas">
                                <Link to={`/gastronomia/${alo.id}`}><i className="fas fa-angle-double-down" /></Link>
                            </div>
                        </div>
                    </div>
                </div>
            );
        });
        return(
            <React.Fragment>
                {
                    /*loading ?
                    <div>Cargando...</div>
                    :*/
                    <div className="container">
                        <div className="row">
                            <div className="col">
                                <Viewer visibles={this.state.visibles} clase={this.state.clase}>
                                    {gastronomicos}
                                </Viewer>
                            </div>
                        </div>
                    </div>
                }
                <style jsx="true">{`
                `}</style>
            </React.Fragment>
        );
    }
}

Gastronomicos.contextType = Consumer;

export default Gastronomicos;