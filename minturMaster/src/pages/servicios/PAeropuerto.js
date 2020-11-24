import React, { Component } from "react";
import { Consumer } from "../../context";
import axios from "axios";

class PAeropuerto extends Component {
  constructor(props) {
    super(props);
    this.state = {
      loading: true,
      data: [],
      carousel: []
    };
  }

  componentDidMount() {
    document.body.scrollTop = 0; // Safari
    document.documentElement.scrollTop = 0; // Chrome, Firefox, IE y Opera
    this.setState({
      loading: false
    });
  }

  render() {
    return (
      <div className="PEventos">
        {this.state.loading ? (
          <div>Cargando...</div>
        ) : (
          <React.Fragment>
            <div className="container mb-5" />
            <div className="container">
              <div className="row mb-3">
                <div
                  className="ZonaDetalle-titulo"
                  style={{ paddingTop: "50px", backgroundColor: `#722789` }}
                >
                  <h3 style={{ color: `#722789` }}>Aeropuertos</h3>
                </div>
                <div className="col">
                  <img alt="avion"
                    style={{
                      width: "100%",
                      height: "300px",
                      objectFit: "cover"
                    }}
                    src="http://agenciasanluis.com/wp-content/uploads/2017/09/terrazas.jpg"
                  />
                  <button
                    className="btn btn-dark btn-block"
                    type="button"
                    data-toggle="collapse"
                    data-target="#nueva_zona"
                    aria-expanded="false"
                    aria-controls="nueva_zona"
                    style={{
                      backgroundColor: "#cb6120",
                      height: "50px",
                      fontSize: "1.2rem",
                      lineHeight: "1.8rem",
                      fontWeight: "700"
                    }}
                  >
                    San Luis
                  </button>
                  <div className="collapse" id="nueva_zona">
                    <div className="card card-body">
                      <div className="row">
                        <div className="col-md-10" style={{ color: "#cb6120" }}>
                          <div className="form-group">
                            <div className="atractivo-info">
                              <h4>
                                Aeropuerto Brigadier Mayor Cesar Raúl Ojeda
                              </h4>
                              <span className="pr-4 ">
                                <i className="fas fa-map-marker" />
                                &nbsp; Dirección: Av. Fuerza Aérea 3095, D5700
                                San Luis, Provincia de San Luis
                              </span>
                              <br />
                              <span className="pr-4">
                                <i className="fas fa-user" />
                                &nbsp; Tel./Cel.: +54 2664 422 427 / 0266
                                442-2457
                              </span>
                              <br />
                              <span>
                                <i class="fas fa-globe-americas" />
                                &nbsp; aa2000.com.ar
                              </span>
                              <br />
                              <span>
                                <i class="fas fa-plane-departure" /> &nbsp;
                                Código: LUQ
                              </span>
                            </div>
                            <hr />
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                  <br />
                  <div className="row mb-3">
                    <div className="col">
                      <img alt="avion1"
                        style={{
                          width: "100%",
                          height: "300px",
                          objectFit: "cover"
                        }}
                        src="http://turismo.sanluis.gov.ar/api-turismo/public/recursos/santa_rosa_conlara_aeropuerto.jpg"
                      />
                      <button
                        className="btn btn-dark btn-block"
                        type="button"
                        data-toggle="collapse"
                        data-target="#SanFrancisco"
                        aria-expanded="false"
                        aria-controls="SanFrancisco"
                        style={{
                          backgroundColor: "#BF3376",
                          height: "50px",
                          fontSize: "1.2rem",
                          lineHeight: "1.8rem",
                          fontWeight: "700"
                        }}
                      >
                        Santa Rosa del Conlara
                      </button>
                      <div className="collapse" id="SanFrancisco">
                        <div className="card card-body">
                          <div className="row">
                            <div
                              className="col-md-10"
                              style={{ color: "#BF3376" }}
                            >
                              <div className="form-group">
                                <div className="atractivo-info">
                                  <h4>
                                    Aeropuerto Internacional Valle del Conlara
                                  </h4>
                                  <span className="pr-4 ">
                                    <i className="fas fa-map-marker" />
                                    &nbsp; Dirección: Santa Rosa de Conlara a 18
                                    km al sudoeste de Merlo.
                                  </span>
                                  <br />
                                  <span className="pr-4">
                                    <i className="fas fa-user" />
                                    &nbsp; Tel./Cel.: 0266 445-2000 ext. 4147
                                  </span>
                                  <br />
                                  <span>
                                    <i class="fas fa-plane-departure" /> &nbsp;
                                    Código: RLO
                                  </span>
                                </div>
                              </div>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </React.Fragment>
        )}
      </div>
    );
  }
}

PAeropuerto.contextType = Consumer;

export default PAeropuerto;
