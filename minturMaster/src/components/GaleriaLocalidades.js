import React, { Component } from "react";
import { Consumer } from "../context";
//import Loading from "../utils/Loading";
import axios from "axios";
import { Link } from "react-router-dom";
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
      filtro:"",
      localidades: {
        data: [
          {
            id: 0,
            nombre: "Cargando...",
            visible: true,
          },
        ],
        selected: 0,
      },
    };
    this.clickImg = this.clickImg.bind(this);
    this.closeImg = this.closeImg.bind(this);
    this.cambiar = this.cambiar.bind(this);
    this.handleFiltroClick = this.handleFiltroClick.bind(this);
    this.selectFirstElement = this.selectFirstElement.bind(this);
    this.handleBusquedaChange = this.handleBusquedaChange.bind(this);

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

  //selecciona la localidad con el tipeo de la flecha
  selectFirstElement() {
    let selec = document.getElementsByName(this.state.mov);
    //console.log(this.state.mov);
    selec.forEach((e) => {
      //console.log(e);
      this.setState({
        mov: -1,
      });
      //this.state.mov = -1;
      e.style = "";
    });
  }

  componentDidMount(){
    window.addEventListener("scroll", this.handleScroll);

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
  
  ////Lista de localodades
  fetch(`${process.env.REACT_APP_API}/ciudades`, {
    method: "GET",
    headers: {
      Authorization: "asdssffsdff",
    },
  })
    .then((res) => res.json())
    .then(
      (result) => {
        if (!result.err) {
          var setX = result.data.registros.map((v) => {
            return {
              ...v,
              visible: false,
            };
          });
          this.setState(
            {
              localidades: {
                data: setX,
                selected: setX[0].id,
              },
            },
            () => {
              this.handleFiltroClick(this.state.localidades.selected);
              window.onscroll = () => {
                var menu = document.getElementById("nav");
                if (
                  document.body.scrollTop > this.state.showAt ||
                  document.documentElement.scrollTop > this.state.showAt
                ) {
                  if (menu) {
                    this.setState({
                      clase: "sticky",
                    });
                  }
                } else {
                  if (menu) {
                    this.setState({
                      clase: "Menu",
                    });
                  }
                }
              };
            }
          );
        } else {
          this.setState({
            MsgVisible: true,
            MsgBody: result.errMsg,
          });
        }
      },
      (error) => {
        this.setState({
          isLoaded: true,
          error,
        });
      }
    );

    }

    handleFiltroClick(id) {
      this.setState(
        {
          localidades: {
            ...this.state.localidades,
            selected: id,
            visible: false,
          },
        },
        () => {
          if (window.scrollY > 350) {
            window.scrollTo(0, 140);
          }
        }
      );
    }


    selectOption(event) {
      this.state.lista = true;
      let key = event.key;
  
      switch (key) {
        case "Backspace":
          this.selectFirstElement();
          break;
        case "Enter":
          if (this.state.selec != null) {
            let select = document.getElementById(this.state.mov - 1);
            select.forEach((e) => {
              e.style = "";
            });
  
            this.state.mov = -1;
            if (window.location.hostname === "localhost") {
              window.location.href =
                "http://localhost:3000/#${this.state.selec.id)";
            } else {
              window.location.href =
                "http://turismo.sanluis.gov.ar/#${this.state.selec.id}";
            }
            this.cambiar();
          }
          break;
        case "ArrowDown":
          if (
            this.state.mov <
            document.getElementsByClassName("linkBusqueda").length - 1
          ) {
            this.state.mov++;
  
            let select = document.getElementsByName(this.state.mov);
            select.forEach((e) => {
              this.state.selec = e;
              e.style = "text-decoration-line: underline; font-size: 17px;";
            });
          }
          break;
        case "ArrowUp":
          if (this.state.mov !== 0) {
            this.state.mov--;
            let select = document.getElementsByName(this.state.mov);
            select.forEach((e) => {
              this.state.selec = e;
  
              e.style = "text-decoration-line: underline ; font-size: 18px;";
            });
          }
          if (true) {
            let select = document.getElementsByName(this.state.mov + 1);
            select.forEach((e) => {
              e.style = "";
            });
          }
  
          break;
      }
    }
  
    setValueInput() {
      let text = document.getElementById("buscar");
  
      text.value = "";
    }
  
    cambiar() {
      this.setState({ mostrar: "none" });
      this.setValueInput();
    }
  
    closeLista() {
      this.setState({
        lista: false,
      });
    }
  
  handleBusquedaChange(event) {
    let valor = event.target.value;
    
    this.setState({ filtro: valor }, () => {
      var copy = Object.assign([], this.state.localidades.data);
      copy = copy.map((d) => {
        if (d.nombre.toLowerCase().indexOf(valor.toLowerCase()) > -1) {
          d.visible = true;
          return d;
        } else {
          d.visible = false;
        }
        return d;
      });
      this.setState({
        localidades: {
          ...this.state.localidades,
          data: copy,
          selected: 1,
        },
        mostrar: "block",
      });
    });
  }
  render() {
    var cont = 0;

    const filtro = this.state.localidades.data.map((lf) => {
      this.selectFirstElement();
      if (lf.visible === true) {
        return (
          <li
            value=""
            key={`lloc-${lf.id}`}
            className="linkBusqueda"
            ref={this.link}
            onClick={this.cambiar}
            to={`/localidad/${lf.id}`}
            style={{ textDecoration: "none" }}
          >
            <Link
              id={`/localidad/${lf.id}`}
              className="liLista"
              name={cont++}
              to={`/localidad/${lf.id}`}
              onClick={() => this.closeLista()}
            >
              {lf.nombre}{" "}
            </Link>
          </li>
        );
      }
    });
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
        <input
         onKeyDown={(e) => this.selectOption(e)}
         type="text"
         className="gallery-search"
         placeholder="Buscar localidad..." 
         autoComplete="off"
         value={this.state.filtro}
         onChange={this.handleBusquedaChange}
         />
          {this.state.lista ? (
             <ul className="ul-busqueda ">{filtro}</ul>
          ) : (
            ""
              )}

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
