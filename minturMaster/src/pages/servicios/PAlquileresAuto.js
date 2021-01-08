import React, { Component } from "react";
import { Consumer } from "../../context";
import axios from "axios";
import Loading from "../../utils/Loading";
import NotFound from "../../components/NotFound"
import ItemCardCiudades from "../../components/ItemCardCiudades"

class PAlquileresAuto extends Component {
  constructor(props) {
    super(props);
    this.state = {
      loading: true,
      isNotFound: true,
      data: [],
      carousel: [],
      sanluis: [],
      juanakoslay: [],
      carpinteria: [],
      volcan: [],
      potrero: [],
      laCarolina: [],
      villamercedes: [],
      santarosa: [],
      merlo: [],
      punta: [],
      tipo: "alquileresautos"
    };
    this.getData = this.getData.bind(this);
  }

  getData() {
    var token = this.context.token;
    var self = this;
    axios({
      method: "get",
      headers: {
        Authorization: token,
      },
      url: `${process.env.REACT_APP_API}/alquileresauto/ciudades`,
      responseType: "json",
    })
      .then((response) => {
        var sanluis = [], juanakoslay = [], carpinteria = [], volcan = [], potrero = [],
        laCarolina =  [], villamercedes=  [], merlo = [], punta = [], santarosa = [];
        var i = 0;
        for (i = 0; i < response.data.data.registros.length; i++) {
            if (response.data.data.registros[i].ciudad === "Ciudad de San Luis") {
                sanluis.push(response.data.data.registros[i]);
            } else if (response.data.data.registros[i].ciudad === "Juana Koslay")
                juanakoslay.push(response.data.data.registros[i]);
            else if (response.data.data.registros[i].ciudad === "La Carolina")
                laCarolina.push(response.data.data.registros[i]);
            else if (response.data.data.registros[i].ciudad === "Carpintería")
                carpinteria.push(response.data.data.registros[i]);
            else if (response.data.data.registros[i].ciudad === "El Volcán")
                volcan.push(response.data.data.registros[i]);
            else if (response.data.data.registros[i].ciudad === "Potrero de Los Funes")
                potrero.push(response.data.data.registros[i]);
            else if (response.data.data.registros[i].ciudad === "Villa de Merlo")
                merlo.push(response.data.data.registros[i]);
            else if (response.data.data.registros[i].ciudad === "La Punta")
                punta.push(response.data.data.registros[i]);
            else if (response.data.data.registros[i].ciudad === "Villa Mercedes")
                villamercedes.push(response.data.data.registros[i]);         
            else if (response.data.data.registros[i].ciudad === "Santa Rosa del Conlara")
                santarosa.push(response.data.data.registros[i]);         
        }
        self.setState({
            loading: false,
            isNotFound: false,
            sanluis: sanluis,
            juanakoslay: juanakoslay,
            carpinteria: carpinteria,
            volcan: volcan,
            potrero: potrero,
            laCarolina: laCarolina,
            villamercedes: villamercedes,
            merlo: merlo,
            santarosa: santarosa,
            punta: punta
        });
        
      })
      .catch((error) => {
        self.setState({
            loading: false,
            isNotFound: true
        });
        console.log(error);
      });
  }

  componentDidMount() {
    document.body.scrollTop = 0; // Safari
    document.documentElement.scrollTop = 0; // Chrome, Firefox, IE y Opera
    this.setState({
      loading: true
    }, () => {
      this.getData();
    });
  }

  render() {
    const isNotFound = this.state.isNotFound;
    return (
      <div className="PEventos">
        {this.state.loading ? (
          <div className="PFiltroAlojamiento mb-5">
            <div>
              <Loading margins="96px" />
            </div>
          </div>
        ) : isNotFound ? (
          <NotFound />
        )
        :(
          <React.Fragment>
            <div className="container mb-5" />
            <div className="container">
              <div className="row mb-3">
                <div
                  className="ZonaDetalle-titulo"
                  style={{ paddingTop: "50px", backgroundColor: `#722789` }}
                >
                  <h3 style={{ color: `#722789` }}>Alquiler de Autos</h3>
                </div>
                <div className="col">
                  <img
                    alt="auto"
                    style={{
                      width: "100%",
                      height: "300px",
                      objectFit: "cover",
                    }}
                    src="http://agenciasanluis.com/wp-content/uploads/2017/09/terrazas.jpg"
                  />
                  <button
                    className="btn btn-dark btn-block"
                    type="button"
                    data-toggle="collapse"
                    data-target="#nueva_zona"
                    aria-expanded="true"
                    aria-controls="nueva_zona"
                    style={{
                      backgroundColor: "#cb6120",
                      height: "50px",
                      fontSize: "1.2rem",
                      lineHeight: "1.8rem",
                      fontWeight: "700",
                    }}
                  >
                    San Luis
                  </button>
                  <div className="" id="nueva_zona">
                    <div className="card card-body">
                      <div className="row">
                        <div className="col-md-10" style={{ color: "#cb6120" }}>
                          <div className="form-group">
                            <div className="atractivo-info">
                              <ItemCardCiudades data={this.state.sanluis} tipo={this.state.tipo}/>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                  <br />
                </div>
              </div>
              <div className="col">
                <img
                  alt="auto"
                  style={{
                    width: "100%",
                    height: "300px",
                    objectFit: "cover",
                  }}
                  src="https://www.welcomeargentina.com/paseos/citytour-villa-mercedes/villa-mercedes-4.jpg"
                />
                <button
                  className="btn btn-dark btn-block"
                  type="button"
                  data-toggle="collapse"
                  data-target="#nueva_zona"
                  aria-expanded="true"
                  aria-controls="nueva_zona"
                  style={{
                    backgroundColor: "rgb(229, 180, 73)",
                    height: "50px",
                    fontSize: "1.2rem",
                    lineHeight: "1.8rem",
                    fontWeight: "700",
                  }}
                >
                  Villa mercedes
                </button>
                <div className="" id="nueva_zona">
                  <div className="card card-body">
                    <div className="row">
                      <div className="col-md-10" style={{ color: "#cb6120" }}>
                        <div className="form-group">
                          <div className="atractivo-info">
                            <ItemCardCiudades data={this.state.villamercedes} tipo={this.state.tipo}/>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
                <br />
              </div>
            </div>
          </React.Fragment>
        )}
      </div>
    );
  }
}

PAlquileresAuto.contextType = Consumer;

export default PAlquileresAuto;
