import React, { Component } from "react";
import { Consumer } from "../context";
//import Loading from "../utils/Loading";
import axios from "axios";
import { Helmet } from "react-helmet";

class GaleriaLocalidades extends Component{
  constructor(props) {
    super(props);
    this.state = {
      //loading: true,
      data: {
        imagen: "",
        localidad: "",
        topLocalidad: "",
        tag: "",
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
    //console.log(visible);
    //console.log(src);
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

  componentDidMount(){
    //document.body.scrollTop = 0; // Safari
    //document.documentElement.scrollTop = 0; // Chrome, Firefox, IE y Opera
    //let id = parseInt(this.props.match.params.id, 10);
    //var token = this.context.token;
    var self = this;
    axios({
      method: "get",
      headers: {
        Authorization: "token",
      },
      url: `${process.env.REACT_APP_API}/galeria_localidades`,
      responseType: "json",
    })
      .then((response) => {
        self.setState({
          data: response.data.data.registros,
          loading: false,
        });
        console.log(this.state.data);
      })
      .catch((error) => {
        console.log(error);
      });
  }

  render() {
    return ( 
      <React.Fragment>
        <Helmet>
          <script src="http://turismo.sanluis.gov.ar/recursos/js/HelmetGaleriaLocalidades.js"></script>
          <script src="https://unpkg.com/masonry-layout@4/dist/masonry.pkgd.min.js"></script>
          <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.0-beta1/dist/js/bootstrap.bundle.min.js"></script>
          <script src="https://cdn.jsdelivr.net/npm/imagesloaded@5.0.0/imagesloaded.pkgd.min.js"></script>

          <link
            rel="canonical"
            href="https://cdn.jsdelivr.net/npm/bootstrap@5.2.0-beta1/dist/css/bootstrap.min.css"
          ></link>
          <link
            rel="canonical"
            href="https://cdnjs.cloudflare.com/ajax/libs/animate.css/4.1.1/animate.min.css"
          ></link>
        </Helmet>
      <div class="container my-5">
        
        <div id="gallery-loader" class="text-center my-5">
          <div class="mb-3">
            <div
              class="spinner-border"
              role="status"
              aria-hidden="true"
            ></div>
            {/* <div class="small text-muted">Cargando galería...</div> */}
          </div>
        </div>
        <div class="header-gallery">
        <p className="gallery-title">Galería de localidades</p>
        <input type="text" className="gallery-search"placeholder="Buscar localidad..." />
        </div>
        {/* {this.state.loading ? (
          <div className="PFiltroAlojamiento mb-5">
            <div>
              <Loading margins="96px" />
            </div>
          </div>
        ) : ( */}
        <div id="gallery" class="row g-4 d-none">
          {/* Aca van las fotos */}
        </div>
        {/* )} */}
        </div>
    </React.Fragment>
    );
  }
}

GaleriaLocalidades.contextType = Consumer;
export default GaleriaLocalidades;
