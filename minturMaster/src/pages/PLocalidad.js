import React, { Component } from "react";
import { Consumer } from "../context";
import { Link } from "react-router-dom";
import axios from "axios";
import GoogleMap from "../components/subcomponentes/GoogleMap";
import Alojamientos from "../components/subcomponentes/Alojamientos";

class PLocalidad extends Component {
  constructor(props) {
    super(props);
    this.state = {
      loading: true,
      id: 0,
      tipos: [],

      filtro: [],
      alojamientos: [],

      nombreAloja: "",
      idtipo: 0,
      dataLocalidad: {
        id: 0,
        color: "722789",
        imagenes: [{ imagen: "default.jpg" }]
      },
      carousel: [],
      imperdibles: []
    };
    this.getData = this.getData.bind(this);
    this.handleChange = this.handleChange.bind(this);
    this.aplicarFiltro = this.aplicarFiltro.bind(this);
  }

  getData() {
    var token = this.context.token;
    var self = this;
    axios({
      method: "get",
      headers: {
        Authorization: token
      },
      url: `${process.env.REACT_APP_API}/ciudad/${self.state.id}`,
      responseType: "json"
    })
      .then(response => {
        if (response.data.data.count > 0) {
          self.setState(
            {
              dataLocalidad: response.data.data.registros[0]
            },
            () => {
              //Carousel
              let localidad_nombre = self.state.dataLocalidad.nombre;
              let activo = false;
              let fotos = self.state.dataLocalidad.imagenes.map((a, index) => {
                if (a.imagen === "default.jpg") {
                  return null;
                }
                let estilo = {
                  backgroundImage: `url(${
                    process.env.REACT_APP_API_RECURSOS
                  }/atractivos/${a.imagen})`,
                  backgroundSize: "cover",
                  backgroundPosition: "center",
                  backgroundRepeat: "no-repeat"
                };
                if (!activo) {
                  activo = true;
                  return (
                    <div
                      key={`caro-${index}`}
                      className="carousel-item active"
                      style={estilo}
                    >
                      <h5 className="pd-top">{localidad_nombre}</h5>
                      <h5>{a.nombre_atractivo}</h5>
                    </div>
                  );
                } else {
                  return (
                    <div
                      key={`caro-${index}`}
                      className="carousel-item"
                      style={estilo}
                    >
                      <h5 className="pd-top">{localidad_nombre}</h5>
                      <h5>{a.nombre_atractivo}</h5>
                    </div>
                  );
                }
              });
              self.setState({ carousel: fotos });
            }
          );
        } else {
          //Error no se encontro el id
        }
      })
      .catch(error => {
        console.log(error);
      });
    //Atractivos de la Localidad (Imperdibles)
    axios({
      method: "get",
      headers: {
        Authorization: token
      },
      url: `${process.env.REACT_APP_API}/ciudad/${
        self.state.id
      }/atractivos/imperdibles`,
      responseType: "json"
    })
      .then(response => {
        if (response.data.data.count > 0) {
          self.setState({ imperdibles: response.data.data.registros });
        } else {
          //Error no se enocntró el id
        }
      })
      .catch(error => {
        console.log(error);
      });
     //Traigo todos los tipos 
    axios({
        method: "get",
        headers: {
            "Authorization": token
        },
        url: `${process.env.REACT_APP_API}/tipos`,
        responseType: "json"
    })
    .then((response) => {
        if(response.data.data.count > 0) {
            response.data.data.registros.unshift({
                id: 0,
                descripcion: "Todos los Tipos"
            });
            self.setState({
                tipos: response.data.data.registros
            });
        }
    })
    .catch((error) => {
        console.log(error);
    });
    //Traigo los alojamientos de esas localidades
    axios({
      method: "get",
      headers: {
          "Authorization": token
      },
      url: `${process.env.REACT_APP_API}/guias/ciudad/${self.state.id}/full`,
      responseType: 'json'
    })
    .then((response) => {
        self.setState({
          alojamientos: response.data.data.registros,
          filtro: response.data.data.registros,
          loading: false
        });
    })
    .catch((error) => {
        console.log(error);
    });
   
    self.setState({ loading: false });
  }

  componentDidUpdate(prevProps) {
    if (this.props.match.params.id !== prevProps.match.params.id) {
      this.setState(
        {
          id: this.props.match.params.id
        },
        () => {
          this.getData();
        }
      );
    }
  }

  componentDidMount() {
    document.body.scrollTop = 0; // Safari
    document.documentElement.scrollTop = 0; // Chrome, Firefox, IE y Opera
    this.setState(
      {
        id: this.props.match.params.id
      },
      () => {
        this.getData();
      }
    );
  }
  
  //Filtrado
  aplicarFiltro() {
    let {idtipo, nombreAloja} = this.state;
    idtipo = parseInt(idtipo, 10);
    
    //Aca el tipo donde coincidan ambos ID's asi le saco la descripcion
    let desc  = this.state.tipos.filter(t => parseInt(t.id, 10) === idtipo);
    let filtrado = this.state.alojamientos.filter((value) => {
        let respuesta = true;

        //Validar el Tipo seleccionado
        if(idtipo !== 0) {
           if(value.tipo !== desc[0].descripcion) {
                respuesta = false;
           }
        }
        //Validar Nombre
        if(nombreAloja.length) {
           if(value.nombre.toLowerCase().search(nombreAloja) === -1) {
                respuesta = false;
            }
        }

        return respuesta;
    });
    this.setState({
        //Aca estoy metiendo en el estado filtro el array de Alojamientos filtrado.
        filtro: filtrado
    });
}

//Manejador de evento
handleChange(event) {
  const target = event.target;
  const value = target.value;
  const name = target.name;

  this.setState({
      [name]: value
  },
  () => {
    this.aplicarFiltro();
  });
}

  render() {
    const loading = this.state.loading;
    const imperdibles = this.state.imperdibles.map((i, index) => {
      return (
        <Link key={`imp-${i.idLocalidad}-${index}`} to={`/atractivo/${i.id}`}>
          <div className="imp-body">
            <h5>{i.nombre}</h5>
            <p>{i.descripcion}</p>
          </div>
        </Link>
      );
    });
    
    const tipos = this.state.tipos.map((tipo) => {
      return(<option key={`tipo-${tipo.id}`} value={tipo.id}>{tipo.descripcion}</option>);
    });

    let hay = this.state.dataLocalidad.imagenes.length - 1; //Puede ser default.jpg
    let x = Math.floor(Math.random() * (hay - 0 + 1)) + 0;
    let selecciono = this.state.dataLocalidad.imagenes[x].imagen;
    const FotoRandom = () => (
      <img
        className="img-fluid"
        src={`${process.env.REACT_APP_API_RECURSOS}/atractivos/${selecciono}`}
        alt="Img"
      />
    );
    return (
      <div className="Localidad">
        {loading ? (
          <div>Cargando...</div>
        ) : (
          <React.Fragment>
            <div className="menu-y-slider">
              <div
                id="carouselExampleIndicators"
                className="carousel slide"
                data-ride="carousel"
              >
                <div className="carousel-inner">{this.state.carousel}</div>
                <a
                  className="carousel-control-prev"
                  href="#carouselExampleIndicators"
                  role="button"
                  data-slide="prev"
                >
                  <span
                    className="carousel-control-prev-icon"
                    aria-hidden="true"
                  />
                  <span className="sr-only">Previous</span>
                </a>
                <a
                  className="carousel-control-next"
                  href="#carouselExampleIndicators"
                  role="button"
                  data-slide="next"
                >
                  <span
                    className="carousel-control-next-icon"
                    aria-hidden="true"
                  />
                  <span className="sr-only">Next</span>
                </a>
                <div className="slider-home-leyenda">
                  <h1 className="mb-5">Destino Turístico</h1>
                </div>
              </div>
            </div>
            <div
              className="ZonaLocalidad-titulo"
              style={{ backgroundColor: `#${this.state.dataLocalidad.color}` }}
            >
              <h3 style={{ color: `#${this.state.dataLocalidad.color}` }}>
                {this.state.dataLocalidad.nombre}
              </h3>
            </div>
            <div className="container">
              <div className="row">
                <div className="col">
                  <div className="ZonaLocalidad-Body mb-5">
                    <div id="video">
                      {this.state.dataLocalidad.video === "" ? (
                        <FotoRandom />
                      ) : (
                        <iframe
                          title={`#${this.state.dataLocalidad.id}-${
                            this.state.dataLocalidad.nombre
                          }`}
                          src={this.state.dataLocalidad.video}
                          width="100%"
                          height="315"
                          frameBorder="0"
                          allowFullScreen
                        />
                      )}
                    </div>
                    <div id="texto">
                      <p>{this.state.dataLocalidad.descripcion}</p>
                    </div>
                    <div id="atractivos">
                      <Link to={`/atractivos/${this.state.dataLocalidad.id}`}>
                        <div className="all-link">
                          <div
                            className="al-nombre"
                            style={{
                              color: `#${this.state.dataLocalidad.color}`
                            }}
                          >
                            {this.state.dataLocalidad.nombre} <br />
                          </div>

                          <div
                            className="al-texto"
                            style={{
                              color: `#${this.state.dataLocalidad.color}`
                            }}
                          >
                            ATRACTIVOS TURÍSTICOS <br />
                          </div>
                          <div
                            className="al-boton"
                            style={{
                              color: `#${this.state.dataLocalidad.color}`
                            }}
                          >
                            <i className="fas fa-arrow-alt-circle-right" />
                          </div>
                        </div>
                      </Link>
                      <Link to={`/gastronomialistado/${this.state.dataLocalidad.id}`}>
                        <div className="all-link">
                          <div
                            className="al-texto"
                            style={{
                              color: `#${this.state.dataLocalidad.color}`
                            }}
                          >
                            GASTRONOMÍA
                          </div>
                          <div
                            className="al-boton"
                            style={{
                              color: `#${this.state.dataLocalidad.color}`
                            }}
                          >
                            <i className="fas fa-arrow-alt-circle-right" />
                          </div>
                        </div>
                      </Link>
                    </div>
                    <div id="mapa">
                      <GoogleMap
                        lat={this.state.dataLocalidad.latitud}
                        lng={this.state.dataLocalidad.longitud}
                        zoom="10"
                        gwidth="100%"
                        gheight="400px"
                      />
                    </div>
                    <div
                      id="imperdibles"
                      style={{
                        backgroundColor: `#${this.state.dataLocalidad.color}`
                      }}
                    >
                      <div className="imp-titulo">
                        <h3
                          style={{
                            color: `#${this.state.dataLocalidad.color}`
                          }}
                        >
                          Imperdibles
                        </h3>
                      </div>
                      <div className="imp-body-wrap">{imperdibles}</div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
            <div className="container mb-5">
              <div className="row">
                <div className="col">
                  <h4>Alojamientos</h4>
                  <form /*onSubmit={this.aplicarFiltro}*/ className="mb-5">
                    <div className="form-row">
                        <div className="form-group col-md-3">
                            <label htmlFor="idtipo">Tipo</label>
                            <select id="idtipo" name="idtipo" className="form-control" value={this.state.idtipo} onChange={this.handleChange}>
                                {tipos}
                            </select>
                        </div>
                        <div className="form-group col-md-3">
                            <label htmlFor="nombreAloja">Nombre</label>
                            <input type="text" id="nombreAloja" name="nombreAloja" className="form-control" value={this.state.nombreAloja} onChange={this.handleChange} />
                        </div>
                        {/*<div className="form-group col-md-3 d-flex align-items-end justify-content-end">
                            <button type="submit" className="btn btn-primary">Buscar</button>
                        </div>*/}
                    </div>
                </form> 

                  <Alojamientos idLocalidad={0} data={this.state.filtro} />
                </div>
              </div>
            </div>
          </React.Fragment>
        )}
      </div>
    );
  }
}

PLocalidad.contextType = Consumer;

export default PLocalidad;
