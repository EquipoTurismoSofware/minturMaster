import React, { Component } from "react";
import { Consumer } from "../../context";
import axios from "axios";
import { FacebookShareButton, FacebookIcon, FacebookShareCount } from 'react-share';
//import CompartirPost from "../compartirPost";
//import GoogleMap from "../components/subcomponentes/GoogleMap";
//import {Helmet} from "react-helmet";
//import { Helmet, HelmetProvider} from 'react-helmet-async'
import MaxImage from "../../components/subcomponentes/MaxImage";
import Loading from "../../utils/Loading";
import NovedadesMetaDatos from "../../components/subcomponentes/NovedadMetaDatos"

class PNovedad extends Component {
  constructor(props) {
    super(props);
    this.state = {
      loading: true,
      data: {
        localidad: "",
        fecha: "1978-03-14",
        titulo: "",
        subtitulo: "",
        descripcion: "",
        descripcionHTML: "",
        foto_uno: "default.jpg",
        foto_dos: "default.jpg",
      },
      img: {
        visible: false,
        src: "",
      },
    };
    this.clickImg = this.clickImg.bind(this);
    this.closeImg = this.closeImg.bind(this);
  }

  clickImg(visible, src) {
    console.log(visible);
    console.log(src);
    this.setState({
      img: {
        visible: visible,
        src: src,
      },
    });
  }

  closeImg() {
    this.setState({
      img: {
        visible: false,
        src: "",
      },
    });
  }

  componentDidMount() {
    document.body.scrollTop = 0; // Safari
    document.documentElement.scrollTop = 0; // Chrome, Firefox, IE y Opera
    let id = parseInt(this.props.match.params.id, 10);
    var token = this.context.token;
    var self = this;
    axios({
      method: "get",
      headers: {
        Authorization: token,
      },
      url: `${process.env.REACT_APP_API}/novedad/${id}`,
      responseType: "json",
    })
      .then((response) => {
        self.setState({
          data: response.data.data.registros[0],
          loading: false,
        });
      })
      .catch((error) => {
        console.log(error);
      });
  }

  render() {
    let fecha = this.state.data.fecha.split("-");
    const shareUrl = `http://turismo.sanluis.gov.ar/#/novedad/${this.props.match.params.id}`;
    //const shareUrl = `https://turismoprueba2.000webhostapp.com/#/novedad/${this.props.match.params.id}`;
    const title = `${this.state.data.titulo}`;
    const descripcion = `${this.state.data.descripcion}`;
    const image = `${process.env.REACT_APP_API_RECURSOS}/recursos/novedades/${this.state.data.foto_uno}`;

    return (
      <React.Fragment>
        {this.state.loading ? (
          <div className="PFiltroAlojamiento mb-5">
            <div>
              <Loading margins="96px" />
            </div>
          </div>
        ) : (
          <React.Fragment>
            <NovedadesMetaDatos datos={this.state.data} />
            {/*<Helmet>
                <title>{this.state.data.titulo}</title>
                <meta property="og:locale" content="es_ES"/>
                <meta property="og:site_name" content="Secretaría de Turismo - San Luis - Argentina"/>
                <meta property="og:url" content={shareUrl} />
                <meta property="og:type" content="article" />
                <meta property="og:title" content={title} />
                <meta property="og:description" content={descripcion} />
                <meta property="og:image" content={image} />
              </Helmet>*/}
            <div className="container PNovedad">
              <div className="n-titulo">
                <span>
                  {`${fecha[2]}/${fecha[1]}`} - {this.state.data.localidad}
                </span>
              </div>
            </div>
            <div className="container">
              <div className="row mb-5">
                <div className="col">
                  <div className="novedad-item">
                    <div className="imagen">
                      <img
                        className="img-fluid"
                        src={`${process.env.REACT_APP_API_RECURSOS}/recursos/novedades/${this.state.data.foto_uno}`}
                        alt="Img"
                        onClick={(e) =>
                          this.clickImg(
                            true,
                            `${process.env.REACT_APP_API_RECURSOS}/recursos/novedades/${this.state.data.foto_uno}`
                          )
                        }
                      />
                      {this.state.data.foto_dos !== "default.jpg" ? (
                        <img
                          className="img-fluid"
                          src={`${process.env.REACT_APP_API_RECURSOS}/recursos/novedades/${this.state.data.foto_dos}`}
                          alt="Img"
                          onClick={(e) =>
                            this.clickImg(
                              true,
                              `${process.env.REACT_APP_API_RECURSOS}/recursos/novedades/${this.state.data.foto_dos}`
                            )
                          }
                        />
                      ) : (
                        ""
                      )}
                    </div>
                    <div
                      className="titulo"
                      style={{ backgroundColor: this.state.data.color }}
                    >
                      <h3>{this.state.data.titulo}</h3>

                      <h3>{this.state.data.subtitulo}</h3>
                    </div>
                    {this.state.data.descripcionHTML != "" ? (
                      <div className="body">
                        <p
                          className="text-dark mb-2"
                          dangerouslySetInnerHTML={{
                            __html: this.state.data.descripcionHTML,
                          }}
                        ></p>

                        <FacebookShareButton url={shareUrl}><FacebookIcon size={32} round={true} /></FacebookShareButton>

                      </div>
                    ) : (
                      <div className="body">
                        <p className="text-dark mb-2">{descripcion}</p>

                        <FacebookShareButton url={shareUrl}><FacebookIcon size={32} round={true} /></FacebookShareButton>
                      </div>
                    )}
                  </div>
                </div>
              </div>
            </div>
          </React.Fragment>
        )}
        <MaxImage
          src={this.state.img.src}
          visible={this.state.img.visible}
          onClose={this.closeImg}
        />
      </React.Fragment>
    );
  }
}

PNovedad.contextType = Consumer;

export default PNovedad;
