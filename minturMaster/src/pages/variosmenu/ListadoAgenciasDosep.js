import React, { Component } from "react";
import { Consumer } from "../../context";
//import axios from "axios";
import Loading from "../../utils/Loading";

class ListadoAgenciasDosep extends Component {
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
                  <h3 style={{ color: `#722789` }}>
                    Agencias de Viajes Adheridas - Turismo Dosep 2021
                  </h3>
                </div>
                <div className="col">
                  <img
                    alt="terrazas"
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
                    aria-expanded="false"
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
                  <div className="collapse" id="nueva_zona">
                    <div className="card card-body">
                      <div className="row">
                        <div className="col-md-10" style={{ color: "#cb6120" }}>
                          <div className="form-group">
                            <h4>DAIMAR TOUR E.V.T. – Legajo N° 13553</h4>
                            <span className="pr-4 ">
                              <i className="fas fa-map-marker" />
                              &nbsp; Dirección: LAVALLE Nº 911 – 5700 – SAN LUIS
                            </span>
                            <br />
                            <span className="pr-4">
                              <i className="fas fa-user" />
                              &nbsp; Tel./Cel.: 2664 742750
                            </span>
                            <br />
                            <span>
                              <i class="fas fa-envelope" /> &nbsp;
                              administración@daimartour.com.ar
                            </span>
                            <br />
                            <span>
                              <i className="fas fa-clock" />
                              &nbsp; Representante: PEDROZO, MARIA ANGELICA –
                              Registro: 14134
                            </span>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                  <br />
                  <div className="row mb-3">
                    <div className="col">
                      <img
                        alt="merlo"
                        style={{
                          width: "100%",
                          height: "300px",
                          objectFit: "cover",
                        }}
                        src={`${process.env.REACT_APP_API_RECURSOS}/recursos/merlo.jpeg`}
                      />
                      <button
                        className="btn btn-dark btn-block"
                        type="button"
                        data-toggle="collapse"
                        data-target="#Merlo"
                        aria-expanded="false"
                        aria-controls="Merlo"
                        style={{
                          backgroundColor: "#336535",
                          height: "50px",
                          fontSize: "1.2rem",
                          lineHeight: "1.8rem",
                          fontWeight: "700",
                        }}
                      >
                        Merlo
                      </button>
                      <div className="collapse" id="Merlo">
                        <div className="card card-body">
                          <div className="row">
                            <div
                              className="col-md-10"
                              style={{ color: "#336535" }}
                            >
                              <div className="form-group">
                                <div className="atractivo-info">
                                  <h4>
                                    EL PAJARO AZUL E.V.T. – Legajo N° 13385.
                                  </h4>
                                  <span className="pr-4 ">
                                    <i className="fas fa-map-marker" />
                                    &nbsp; Dirección: GÜEMES Nº 422 – 5881 –
                                    MERLO
                                  </span>
                                  <br />
                                  <span className="pr-4">
                                    <i className="fas fa-user" />
                                    &nbsp; Tel./Cel.: 02656 – 47-3319
                                  </span>
                                  <br />
                                  <span>
                                    <i class="fas fa-envelope" /> &nbsp;
                                    martahbenavides@gmail.com
                                  </span>
                                  <br />
                                  <span>
                                    <i className="fas fa-clock" />
                                    &nbsp; Representante: BENAVIDEZ, MARTA HEBE
                                    – Registro: 8805
                                  </span>
                                </div>
                              </div>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                  <br></br>{" "}
                  {/*<div className="row mb-3">
                    <div className="col">
                      <img
                        alt="mercedes"
                        style={{
                          width: "100%",
                          height: "300px",
                          objectFit: "cover",
                        }}
                        src={`${process.env.REACT_APP_API_RECURSOS}/recursos/JuanaKoslay.jpg`}
                      />
                      <button
                        className="btn btn-dark btn-block"
                        type="button"
                        data-toggle="collapse"
                        data-target="#JuanaKoslay"
                        aria-expanded="false"
                        aria-controls="JuanaKoslay"
                        style={{
                          backgroundColor: "#cb6120",
                          height: "50px",
                          fontSize: "1.2rem",
                          lineHeight: "1.8rem",
                          fontWeight: "700",
                        }}
                      >
                        Juana Koslay
                      </button>
                      <div className="collapse" id="JuanaKoslay">
                        <div className="card card-body">
                          <div className="row">
                            <div
                              className="col-md-10"
                              style={{ color: "#cb6120" }}
                            >
                              <div className="form-group">
                                <div className="atractivo-info">
                                  <h4>Nala viajes E.V.T– Legajo N° 14.895</h4>
                                  <span className="pr-4 ">
                                    <i className="fas fa-map-marker" />
                                    &nbsp; Dirección: Piedra blanca 3170 – Juana
                                    Koslay
                                  </span>
                                  <br />
                                  <span className="pr-4">
                                    <i className="fas fa-user" />
                                    &nbsp; Tel./Cel.: 2664 020657
                                  </span>
                                  <br />
                                  <span>
                                    <i class="fas fa-envelope" /> &nbsp;
                                    rodriguezbarrerapepe@hotmail.com
                                  </span>
                                  <hr />
                                </div>
                              </div>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                  <br />
                  <div className="row mb-3">
                    <div className="col">
                      <img
                        alt="mercedes"
                        style={{
                          width: "100%",
                          height: "300px",
                          objectFit: "cover",
                        }}
                        src="https://www.caminosanluis.com.ar/wp-content/uploads/2014/03/Complejo-Molino-Fenix-1-VM.jpg"
                      />
                      <button
                        className="btn btn-dark btn-block"
                        type="button"
                        data-toggle="collapse"
                        data-target="#VillaMercedes"
                        aria-expanded="false"
                        aria-controls="VillaMercedes"
                        style={{
                          backgroundColor: "#EAAB2D",
                          height: "50px",
                          fontSize: "1.2rem",
                          lineHeight: "1.8rem",
                          fontWeight: "700",
                        }}
                      >
                        Villa Mercedes
                      </button>
                      <div className="collapse" id="VillaMercedes">
                        <div className="card card-body">
                          <div className="row">
                            <div
                              className="col-md-10"
                              style={{ color: "#EAAB2D" }}
                            >
                              <div className="form-group">
                                <div className="atractivo-info">
                                  <h4>
                                    SIRIUS, SERVICIOS TURISTICOS E.V.T– Legajo
                                    N° 16.154
                                  </h4>
                                  <span className="pr-4 ">
                                    <i className="fas fa-map-marker" />
                                    &nbsp; Dirección: Curchot 414 – VILLA
                                    MERCEDES
                                  </span>
                                  <br />
                                  <span className="pr-4">
                                    <i className="fas fa-user" />
                                    &nbsp; Tel./Cel.: 2657 332210
                                  </span>
                                  <br />
                                  <span>
                                    <i class="fas fa-envelope" /> &nbsp;
                                    arielviajes222@hotmail.com
                                  </span>
                                  <hr />
                                  <h4>DAIMAR TOUR E.V.T. – Legajo N° 13553</h4>
                                  <span className="pr-4 ">
                                    <i className="fas fa-map-marker" />
                                    &nbsp; Dirección: San Martín 391 – 5700 –
                                  </span>
                                  <br />
                                  <span className="pr-4">
                                    <i className="fas fa-user" />
                                    &nbsp; Tel./Cel.: 2664 742750
                                  </span>
                                  <br />
                                  <span>
                                    <i class="fas fa-envelope" /> &nbsp;
                                    administración@daimartour.com.ar
                                  </span>
                                  <br />
                                  <span>
                                    <i className="fas fa-clock" />
                                    &nbsp; Representante: PEDROZO, MARIA
                                    ANGELICA – Registro: 14134
                                  </span>
                                </div>
                              </div>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>*/}
                  <br />
                </div>
              </div>
            </div>
          </React.Fragment>
        )}
      </div>
    );
  }
}

ListadoAgenciasDosep.contextType = Consumer;

export default ListadoAgenciasDosep;
