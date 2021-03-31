import React, { Component } from "react";

class PTurismoSemanaSanta extends Component {
  constructor(props) {
    super(props);
    this.state = {
      loading: true,
    };
  }

  componentDidMount() {
    console.log("categoria: ");
  }

  render() {
    return (
      <div className="container mb-5">
        <div className="container">
          <div className="row mb-3" style={{ paddingTop: "150px" }}>
            <div className="pantallaGrande">
              <center>
                <img
                  style={{ height: 250, width: 350 }}
                  className="img-fluid"
                  src={`${process.env.REACT_APP_API_RECURSOS}/recursos/FolletoSemanaSanta.jpeg`}
                  alt="Img"
                />
                <div className="ZonaDetalle-titulo">
                  <h3 style={{ color: `#722789` }}>
                    INFORMACIÓN PARA AFILIADOS:
                  </h3>
                </div>
              </center>
            </div>
          </div>
        </div>
        <div className="row mb-3" style={{ paddingTop: "0px" }}>
          <div className="pantallaChica">
            <center>
              <img
                style={{ height: 100, width: 150 }}
                className="img-fluid"
                src={`${process.env.REACT_APP_API_RECURSOS}/recursos/LogoDosep.png`}
                alt="Img"
              />
              <div className="ZonaDetalle-titulo">
                <h3 style={{ color: `#722789` }}>
                  INFORMACIÓN PARA AFILIADOS:
                </h3>
              </div>
            </center>
          </div>
          <div className="pantallaGrande">
            <div className="ZonaDetalle-titulo ">
              <h3 style={{ color: `#722789` }}>
                INFORMACIÓN PARA PRESTADORES DE SERVICIOS:
              </h3>
            </div>

            <center>
              <div className="row">
                {/*  <div className="one-third column">
                    <Link to="/listado-guias-covid" className="link-menu">
                      <img
                        style={{ height: 200, width: 350 }}
                        className="img-fluid"
                        src={`${process.env.REACT_APP_API_RECURSOS}/recursos/modal/TARJETA_EXCURSIONES.jpg`}
                        alt="Img"
                      />
                    </Link>
    </div>*/}
                <div className="one-three column">
                  <a
                    href="http://turismo.sanluis.gov.ar/dosep-turismo/Bases_Condiciones.pdf"
                    className="link-menu"
                  >
                    <img
                      style={{ height: 300, width: 550 }}
                      className="img-fluid"
                      src={`${process.env.REACT_APP_API_RECURSOS}/recursos/BASESYCONDICIONESDOSEP.png`}
                      alt="Img"
                    />
                  </a>
                </div>
                <div className="one-three  column">
                  <a
                    href="https://forms.gle/wK9pGbWuNNTc2Z848"
                    className="link-menu"
                  >
                    <img
                      style={{ height: 300, width: 550 }}
                      className="img-fluid"
                      src={`${process.env.REACT_APP_API_RECURSOS}/recursos/ADHERITEDOSEP.png`}
                      alt="Img"
                    />
                  </a>
                </div>
              </div>
            </center>
          </div>
          <div className="pantallaChica">
            <div className="ZonaDetalle-titulo ">
              <h3 style={{ color: `#722789` }}>
                INFORMACIÓN PARA PRESTADORES DE SERVICIOS:
              </h3>
            </div>

            <center>
              <div className="row">
                {/*  <div className="one-third column">
                    <Link to="/listado-guias-covid" className="link-menu">
                      <img
                        style={{ height: 200, width: 350 }}
                        className="img-fluid"
                        src={`${process.env.REACT_APP_API_RECURSOS}/recursos/modal/TARJETA_EXCURSIONES.jpg`}
                        alt="Img"
                      />
                    </Link>
    </div>*/}
                <div className="one-two column">
                  <a
                    href="http://turismo.sanluis.gov.ar/dosep-turismo/Bases_Condiciones.pdf"
                    className="link-menu"
                  >
                    <img
                      style={{ height: 200, width: 400 }}
                      className="img-fluid"
                      src={`${process.env.REACT_APP_API_RECURSOS}/recursos/BASESYCONDICIONESDOSEP.png`}
                      alt="Img"
                    />
                  </a>
                </div>
                <div className="one-two  column">
                  <a
                    href="https://forms.gle/wK9pGbWuNNTc2Z848"
                    className="link-menu"
                  >
                    <img
                      style={{ height: 200, width: 400 }}
                      className="img-fluid"
                      src={`${process.env.REACT_APP_API_RECURSOS}/recursos/ADHERITEDOSEP.png`}
                      alt="Img"
                    />
                  </a>
                </div>
              </div>
            </center>
          </div>
        </div>
      </div>
    );
  }
}

export default PTurismoSemanaSanta;
