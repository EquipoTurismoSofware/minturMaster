import React, { Component } from "react";
import { Consumer } from "../../context";
import axios from "axios";
import Loading from "../../utils/Loading";

class PAeropuerto extends Component {
  constructor(props) {
    super(props);
    this.state = {
      loading: true,
      data: [],
      carousel: [],
    };
  }

  componentDidMount() {
    document.body.scrollTop = 0; // Safari
    document.documentElement.scrollTop = 0; // Chrome, Firefox, IE y Opera
    this.setState({
      loading: false,
    });
  }

  render() {
    return (
      <div className="PEventos">
        {this.state.loading ? (
          <div className="PFiltroAlojamiento mb-5">
            <div>
              <Loading margins="96px" />
            </div>
          </div>
        ) : (
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
                              <h4>Avis </h4>
                              <span className="pr-4 ">
                                <i className="fas fa-map-marker" />
                                &nbsp; Dirección: Av Pte Illia 470.
                              </span>
                              <br />
                              <span className="pr-4">
                                <i className="fas fa-user" />
                                &nbsp; Tel./Cel.: +54 266-444-3280 / 266
                                154540388/390
                              </span>
                              <br />
                              <span>
                                <i class="fas fa-globe-americas" />
                                &nbsp;https://www.avis.com.ar/ -
                                sanluis@avis.com.ar
                              </span>
                              <br />
                              <span>
                                <i class="fas fa-clock" /> &nbsp; Horario: 9 hrs
                                a 12 hrs / 17 hrs a 21 hrs
                              </span>
                              <hr />
                              <h4>Hertz </h4>
                              <span className="pr-4 ">
                                <i className="fas fa-map-marker" />
                                &nbsp; Dirección: Av. Fuerza Aérea 3095.
                              </span>
                              <br />
                              <span className="pr-4">
                                <i className="fas fa-user" />
                                &nbsp; Tel./Cel.: +54 0266 442-2427
                              </span>
                              <br />
                              <span>
                                <i class="fas fa-globe-americas" />
                                &nbsp;https://www.hertz.com.ar/ -
                                hertzsanluis@hotmail.com
                              </span>
                              <br />
                              <span>
                                <i class="fas fa-clock" /> &nbsp; Horario: 9 hrs
                                a 12 hrs / 17 hrs a 21 hrs
                              </span>
                            </div>
                            <hr />
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
                            <h4>Move Car </h4>
                            <span className="pr-4 ">
                              <i className="fas fa-map-marker" />
                              &nbsp; Dirección: Intendente leyes 92.
                            </span>
                            <br />
                            <span className="pr-4">
                              <i className="fas fa-user" />
                              &nbsp; Tel./Cel.: +54 02657 22-4773 / +54
                              2657-678041
                            </span>
                            <br />
                            <span>
                              <i class="fas fa-globe-americas" />
                              &nbsp;www.movecar.com.ar - admin@movecar.com.ar
                            </span>
                            <br />
                            <span>
                              <i class="fas fa-clock" /> &nbsp; Horario: 9:30
                              hrs a 12:00 hrs / 18:30 hrs a 20:30 hrs
                            </span>
                            <hr />
                          </div>
                          <hr />
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

PAeropuerto.contextType = Consumer;

export default PAeropuerto;
