import React, { Component } from "react";
import { Consumer } from "../../context";
//import axios from "axios";
import Loading from "../../utils/Loading";

class PArchiApp extends Component {
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
      <div className="PEventos" style={{ paddingTop: "110px" }}>
        {this.state.loading ? (
          <div className="PFiltroAlojamiento mb-5">
            <div>
              <Loading margins="96px" />
            </div>
          </div>
        ) : (
          <React.Fragment>
            <div className="archivosApp">
              <div className="container ">
                <div className="row mb-3">
                  <div
                    className="ZonaDetalle-titulo"
                    style={{ paddingTop: "50px", backgroundColor: `#722789` }}
                  >
                    <h3 style={{ color: `#722789` }}>¡Probá nuestra app!</h3>
                  </div>
                  <center>
                    <img
                      alt="1"
                      className="pruebaApp"
                      src={`${process.env.REACT_APP_API_RECURSOS}/imgs/probaApp.png`}
                    />

                    <a
                      href="https://play.google.com/store/apps/details?id=com.grupocentro.TurismoSanLuis&hl=es"
                      className="link"
                    >
                      <br />
                      <img
                        alt="2"
                        id="botonDescarga"
                        className="botonDescarga"
                        src={`${process.env.REACT_APP_API_RECURSOS}/imgs/androidApp.png`}
                      />
                    </a>
                    <a
                      href="https://itunes.apple.com/ar/app/turismo-san-luis-4-0/id1450913653?mt=8"
                      className="link"
                    >
                      <img
                        alt="3"
                        id="botonDescarga"
                        className="botonDescarga"
                        src={`${process.env.REACT_APP_API_RECURSOS}/imgs/iphoneApp.png`}
                      />
                    </a>
                    <br />
                    <br />
                    <img
                      alt="4"
                      className="flechaAbajo"
                      src={`${process.env.REACT_APP_API_RECURSOS}/imgs/flechaAbajo.png`}
                    />
                    <br />
                    <img
                      alt="5"
                      className="asistente"
                      src={`${process.env.REACT_APP_API_RECURSOS}/imgs/asistenteMujer.png`}
                    />
                    <br />
                    <img
                      alt="6"
                      className="asistente"
                      src={`${process.env.REACT_APP_API_RECURSOS}/imgs/asitenteHombre.png`}
                    />
                    <br />
                    <br />
                    <img
                      alt="7"
                      className="banner"
                      src="https://i.ibb.co/h8vTFqd/01-DESCUBRIR.jpg"
                    />
                    <img
                      alt="8"
                      className="banner"
                      src="https://i.ibb.co/YBkWn2Q/02-DISFRUTAR.jpg"
                    />
                    <br />
                    <br />
                    <img
                      alt="9"
                      className="banner"
                      src="https://i.ibb.co/bzPdtvY/03-RELAJARSE.jpg"
                    />
                    <br />
                    <br />
                    <img
                      alt="10"
                      className="banner"
                      src="https://i.ibb.co/w45S8CC/05-VIVIR.jpg"
                    />
                    <br />
                    <br />
                    <img
                      alt="11"
                      className="banner"
                      src="https://i.ibb.co/YDRnfmM/06-CREER.jpg"
                    />
                    <br />
                    <br />
                    <img
                      alt="12"
                      className="banner"
                      src="https://i.ibb.co/hX2r1tC/07-REENCONTRARSE.jpg"
                    />
                    <br />
                    <br />
                    <img
                      alt="13"
                      className="folleto"
                      src="https://i.ibb.co/0nGkLq3/1.jpg"
                    />
                    <br />
                    <br />
                    <img
                      alt="14"
                      className="folleto"
                      src="https://i.ibb.co/gmhnRd2/3.jpg"
                    />
                  </center>
                </div>
              </div>
            </div>
          </React.Fragment>
        )}
      </div>
    );
  }
}

PArchiApp.contextType = Consumer;

export default PArchiApp;
