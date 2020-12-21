import React, { Component } from "react";
//import { Grid, Dev } from "gymnast";
import { Link } from "react-router-dom";
import ReactWOW from "react-wow";
import axios from "axios";

export default class Mapas extends Component {
  constructor(props) {
    super(props);
    this.state = {
      loading: true,
      dataZona: {},
    };

    this.descargar = this.descargar.bind(this);
  }

  descargar(id) {
    var token = this.context.token;
    //verificar que el id sea un número > a 0
    //Datos de la Zona
    var self = this;
    axios({
      method: "get",
      headers: {
        Authorization: token,
      },
      url: `${process.env.REACT_APP_API}/zona/${id}`,
      /*
          auth: {
              username: 'janedoe',
              password: 's00pers3cret'
          },
          */
      responseType: "json",
    })
      .then((response) => {
        if (response.data.data.count > 0) {
          self.setState({
            dataZona: response.data.data.registros[0],
          });
          window.location.href = `${process.env.REACT_APP_API_RECURSOS}/folletos/${this.state.dataZona.pdf}`;
        } else {
          //Error no se enocntró el id
        }
        this.setState({ loading: false });
      })
      .catch((error) => {
        console.log(error);
        this.setState({ loading: false });
      });
  }

  render() {
    return (
      <ReactWOW animation="fadeIn" data-wow-delay="10s">
        <div className="Recorridos ">
          <div className="mancha-sup-izq" />
          <div className="mancha-sup-der" />
          <center>
            <div className="reco-titulo">
              <br />
              <br />
              <br />
              <span className="reco-t-sub1">Descargar</span>
              <span className="reco-t-sub2">Circuitos Turísticos</span>
            </div>
          </center>
          <div className="reco-container">
            <a
              onClick={() => this.descargar("4")}
              target="_blank"
              rel="noopener noreferrer"
            >
              <div id="sierras">
                <div className="cuadro-color" />
                <img
                  src={`${process.env.REACT_APP_API_RECURSOS}/recursos/zonas/1_4_20181020005103.jpg`}
                  className="thumbnail"
                  alt=""
                />

                {/*   <div>
                        <a
                          className="btn btn-block mt-3 text-white"
                          href={`${process.env.REACT_APP_API_RECURSOS}/folletos/${this.state.dataZona.pdf}`}
                          target="_blank"
                          rel="noopener noreferrer"
                          style={{
                            backgroundColor: `#${this.state.dataZona.color}`,
                          }}
                        >
                          <i className="fas fa-file-pdf"></i> Descargar
                          Folletería
                        </a>
                      </div>
                */}

                <div className="cuadro-titulo">
                  <p>Sierras</p>
                  <p>Centrales</p>
                </div>
              </div>
            </a>
            <a
              onClick={() => this.descargar("5")}
              target="_blank"
              rel="noopener noreferrer"
            >
              <div id="norte">
                <div className="cuadro-color" />
                <img
                  src={`${process.env.REACT_APP_API_RECURSOS}/recursos/zonas/norte.jpg`}
                  className="thumbnail"
                  alt=""
                />
                <div className="cuadro-titulo">
                  <p>Norte</p>
                  <p>Puntano</p>
                </div>
              </div>
            </a>
            <a
              onClick={() => this.descargar("8")}
              target="_blank"
              rel="noopener noreferrer"
            >
              <div id="costa">
                <div className="cuadro-color" />
                <img
                  src={`${process.env.REACT_APP_API_RECURSOS}/recursos/zonas/costa.jpg`}
                  className="thumbnail"
                  alt=""
                />
                <div className="cuadro-titulo">
                  <p>Costa de los</p>
                  <p>Comechingones</p>
                </div>
              </div>
            </a>
            <a
              onClick={() => this.descargar("1")}
              target="_blank"
              rel="noopener noreferrer"
            >
              <div id="valle">
                <div className="cuadro-color" />
                <img
                  src={`${process.env.REACT_APP_API_RECURSOS}/recursos/zonas/1_1_20181020005650.jpg`}
                  className="thumbnail"
                  alt=""
                />
                <div className="cuadro-titulo">
                  <p>Valle del Conlara</p>
                  <p>y San Martín</p>
                </div>
              </div>
            </a>
            <a
              onClick={() => this.descargar("9")}
              target="_blank"
              rel="noopener noreferrer"
            >
              <div id="villa">
                <div className="cuadro-color" />
                <img
                  src={`${process.env.REACT_APP_API_RECURSOS}/recursos/zonas/1_9_20181020005804.jpg`}
                  className="thumbnail"
                  alt=""
                />
                <div className="cuadro-titulo">
                  <p>Villa Mercedes</p>
                  <p>y El Morro</p>
                </div>
              </div>
            </a>
            <a
              onClick={() => this.descargar("10")}
              target="_blank"
              rel="noopener noreferrer"
            >
              <div id="huellas">
                <div className="cuadro-color" />
                <img
                  src={`${process.env.REACT_APP_API_RECURSOS}/recursos/zonas/huellas.jpg`}
                  className="thumbnail"
                  alt=""
                />
                <div className="cuadro-titulo">
                  <p>Huellas</p>
                  <p>Del Pasado</p>
                </div>
              </div>
            </a>
            <a
              onClick={() => this.descargar("11")}
              target="_blank"
              rel="noopener noreferrer"
            >
              <div id="llanura">
                <div className="cuadro-color" />
                <img
                  src={`${process.env.REACT_APP_API_RECURSOS}/recursos/zonas/llanura.jpg`}
                  className="thumbnail"
                  alt=""
                />
                <div className="cuadro-titulo">
                  <p>Llanura</p>
                  <p>Sureña</p>
                </div>
              </div>
            </a>
            <a
              onClick={() => this.descargar("12")}
              target="_blank"
              rel="noopener noreferrer"
            >
              <div id="termas">
                <div className="cuadro-color" />
                <img
                  src={`${process.env.REACT_APP_API_RECURSOS}/recursos/zonas/1_12_20181020005540.jpg`}
                  className="thumbnail"
                  alt=""
                />
                <div className="cuadro-titulo">
                  <p>Termas y</p>
                  <p>Salinas</p>
                </div>
              </div>
            </a>
            <a
              href={`${process.env.REACT_APP_API_RECURSOS}/mapas-folletos/final mapa ciudad sl + rutas 2020 PANDEMIA.pdf`}
              target="_blank"
              rel="noopener noreferrer"
            >
              <div id="norte">
                <div className="cuadro-color" />
                <img
                  src={`${process.env.REACT_APP_API_RECURSOS}/recursos/zonas/1_12_20181020005540.jpg`}
                  className="thumbnail"
                  alt=""
                />
                <div className="cuadro-titulo">
                  <p>Ciudad de</p>
                  <p>San Luis</p>
                </div>
              </div>
            </a>
            <a
              href={`${process.env.REACT_APP_API_RECURSOS}/mapas-folletos/final mapa el trapiche + rutas 2020 PANDEMIA.pdf`}
              target="_blank"
              rel="noopener noreferrer"
            >
              <div id="termas">
                <div className="cuadro-color" />
                <img
                  src={`${process.env.REACT_APP_API_RECURSOS}/recursos/zonas/1_12_20181020005540.jpg`}
                  className="thumbnail"
                  alt=""
                />
                <div className="cuadro-titulo">
                  <p>El Trapiche</p>
                </div>
              </div>
            </a>

            <a
              href={`${process.env.REACT_APP_API_RECURSOS}/mapas-folletos/final mapa mercedes + rutas 2020 PANDEMIA.pdf`}
              target="_blank"
              rel="noopener noreferrer"
            >
              <div id="termas">
                <div className="cuadro-color" />
                <img
                  src={`${process.env.REACT_APP_API_RECURSOS}/recursos/zonas/1_12_20181020005540.jpg`}
                  className="thumbnail"
                  alt=""
                />
                <div className="cuadro-titulo">
                  <p>Villa Mercedes</p>
                </div>
              </div>
            </a>

            <a
              href={`${process.env.REACT_APP_API_RECURSOS}/mapas-folletos/final mapa merlo + rutas 2020 PANDEMIA.pdf`}
              target="_blank"
              rel="noopener noreferrer"
            >
              <div id="termas">
                <div className="cuadro-color" />
                <img
                  src={`${process.env.REACT_APP_API_RECURSOS}/recursos/zonas/1_12_20181020005540.jpg`}
                  className="thumbnail"
                  alt=""
                />
                <div className="cuadro-titulo">
                  <p>Villa de Merlo</p>
                </div>
              </div>
            </a>

            <a
              href={`${process.env.REACT_APP_API_RECURSOS}/mapas-folletos/final mapa potrero + rutas 2020 PANDEMIA.pdf`}
              target="_blank"
              rel="noopener noreferrer"
            >
              <div id="termas">
                <div className="cuadro-color" />
                <img
                  src={`${process.env.REACT_APP_API_RECURSOS}/recursos/zonas/1_12_20181020005540.jpg`}
                  className="thumbnail"
                  alt=""
                />
                <div className="cuadro-titulo">
                  <p>Potrero de los Funes</p>
                </div>
              </div>
            </a>
            <a
              href={`${process.env.REACT_APP_API_RECURSOS}/mapas-folletos/final mapa san fransiscol + rutas 2020 PANDEMIA.pdf`}
              target="_blank"
              rel="noopener noreferrer"
            >
              <div id="termas">
                <div className="cuadro-color" />
                <img
                  src={`${process.env.REACT_APP_API_RECURSOS}/recursos/zonas/1_12_20181020005540.jpg`}
                  className="thumbnail"
                  alt=""
                />
                <div className="cuadro-titulo">
                  <p>San Francisco</p>
                </div>
              </div>
            </a>

          </div>

          <div className="mancha-inf-izq" />
          <div className="mancha-inf-der" />
        </div>
      </ReactWOW>
    );
  }
}
