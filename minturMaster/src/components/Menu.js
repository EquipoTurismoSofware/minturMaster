import Navbar from "react-bootstrap/Navbar";
import Nav from "react-bootstrap/Nav";
import NavDropdown from "react-bootstrap/NavDropdown";
import Logo from "../utils/images/logo-san-luis.png"; //  src/images
import React, { Component } from "react";
import { Link } from "react-router-dom";
import Container from "react-bootstrap/Container"
//import { useState } from "react";
//import { useEffect } from "react";

class Menu extends Component {
  constructor(props) {
    super(props);
    this.state = {
      loading: true,
      lista: true,
      mov: 0,
      selec: null,
      mostrar: "inline-block",
      filtro: "",
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

    this.link = React.createRef();
    this.cambiar = this.cambiar.bind(this);
    this.handleBusquedaChange = this.handleBusquedaChange.bind(this);
    this.handleFiltroClick = this.handleFiltroClick.bind(this);
    //this.selectFirstElement = this.selectFirstElement.bind(this);
    this.cancelBusqueda = this.cancelBusqueda.bind(this);
    this.closeLista = this.closeLista.bind(this);
  }

  componentDidMount() {
    window.addEventListener("scroll", this.handleScroll);

    //Lista de localodades
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

  componentWillUnmount() {
    window.removeEventListener("scroll", this.handleScroll);
  }

  cancelBusqueda() {
    this.setState({ lista: false });
  }

  smallNavbar() {
    //When user scrolls
    //if(window.width > 990){// When is a expanded menu
    document.getElementById("nav").style.position = "fixed";
    document.getElementById("nav").style.minHeight = "90px";
    //document.getElementById("nav").style.backgroundImage =
    //  "url(" + "require(../utils/images/scrollNavbar.png)" + ")";
    document.getElementById("nav").style.backgroundRepeat = "no-repeat";
    document.getElementById("nav").style.backgroundSize = "cover";
    //document.getElementById("nav").style.backgroundPosition = "bottom";
    document.getElementById("nav").style.top = "0px";

    //document.getElementById("logoscroll").style.display = "inline-block";
    //document.getElementById("logoscroll").style.marginTop = "-2%";
    //document.getElementById("logoscroll").style.width = "190px";
    // }
    // else{//When is a burger menu

    // }
  }

  bigNavbar() {
    // When user is on the top

    document.getElementById("nav").style.position = "absolute";
    
    //document.getElementById("nav").style.backgroundImage =
    //  "url(" + "require(../utils/images/menu-img.png)" + ")";
    
    document.getElementById("nav").style.width = "100%";
    //document.getElementById("nav").style.transition = "all: 0.5s";

    if(window.innerWidth > 991){
      document.getElementById("nav").style.top = "40px";
      document.getElementById("nav").style.minHeight = "120px";
      
    }
    else{
      document.getElementById("nav").style.top = "0px";
      document.getElementById("nav").style.minHeight = "90px";
    }

    //document.getElementById("logoscroll").style.width = "200px";
    //document.getElementById("logoscroll").style.marginTop = "-2%";
    //document.getElementById("logoscroll").style.display = "inline-block";
  }


  handleScroll = () => {
    if (window.scrollY > 40) {
      //Small Navbar
      this.smallNavbar();
    } else {
      //Big Navbars
      if (window.innerWidth > 350) {
        this.bigNavbar();
      } else {
        this.smallNavbar();
      }
    }
  };

  //selecciona la localidad con el tipeo de la flecha
  // selectFirstElement() {
  //   let selec = document.getElementsByName(this.state.mov);
  //   //console.log(this.state.mov);
  //   selec.forEach((e) => {
  //     //console.log(e);
  //     this.setState({
  //       mov: -1,
  //     });
  //     //this.state.mov = -1;
  //     e.style = "";
  //   });
  // }

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
   
    let text = document.getElementById("buscar");

    if(text.length == 0){
      this.cancelBusqueda();
    }


    // switch (key) {
      // case "Backspace":
      //   this.selectFirstElement();
      //   break;
      // case "Enter":
      //   if (this.state.selec != null) {
      //     let select = document.getElementById(this.state.mov - 1);
      //     select.forEach((e) => {
      //       e.style = "";
      //     });

      //     this.state.mov = -1;
      //     if (window.location.hostname === "localhost") {
      //       window.location.href =
      //         "http://localhost:3000/#${this.state.selec.id)";
      //     } else {
      //       window.location.href =
      //         "http://turismo.sanluis.gov.ar/#${this.state.selec.id}";
      //     }
      //     this.cambiar();
      //   }
      //   break;
      // case "ArrowDown":
      //   if (
      //     this.state.mov <
      //     document.getElementsByClassName("linkBusqueda").length - 1
      //   ) {
      //     this.state.mov++;

      //     let select = document.getElementsByName(this.state.mov);
      //     select.forEach((e) => {
      //       this.state.selec = e;
      //       e.style = "text-decoration-line: underline; font-size: 17px;";
      //     });
      //   }
      //   break;
      // case "ArrowUp":
      //   if (this.state.mov !== 0) {
      //     this.state.mov--;
      //     let select = document.getElementsByName(this.state.mov);
      //     select.forEach((e) => {
      //       this.state.selec = e;

      //       //e.style = "text-decoration-line: underline ; font-size: 18px;";
      //     });
      //   }
      //   if (true) {
      //     let select = document.getElementsByName(this.state.mov + 1);
      //     select.forEach((e) => {
      //       //e.style = "";
      //     });
      //   }

      //   break;
   // }
  }

  setValueInput() {
    let text = document.getElementById("buscar");

    text.value = "";
  }

  cambiar() {
    this.setState({ mostrar: "inline" });
    this.setValueInput();
  }

  closeLista(clickedValue) {
    document.getElementById("buscar").value = clickedValue;
    this.setState({
      lista: false,
    });

    

  }

  handleBusquedaChange(event) {
    let valor = event.target.value;
    //Oculta lista al borrar el contenido del buscador
    if(valor == ""){
      this.setState({
        lista: false,
      });
    }
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
        mostrar: "inline-block",
      });
    });
  }

  render() {
    var cont = 0;
    //var localidad = "";

    const filtro = this.state.localidades.data.map((lf) => {
      //this.selectFirstElement();
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
              onClick={() => this.closeLista(lf.nombre)}
            >
              {lf.nombre}{" "}
            </Link>
          </li>
        );
      }
    });

    return (
      <React.Fragment>
        <div className="menuNew">
          <Navbar bg="navbar" variant="dark" id="nav" expand="lg">
            <Container fluid>
            {/* <Link to={"/"}>   */}
              <Navbar.Brand  className="nav-brand">
              <a href={"/"}> 
                <img
                  id="logoscroll"
                  src={Logo}
                  alt="San Luis"
                  className="img-brand"
                />
                </a>
              </Navbar.Brand>
              {/* </Link> */}
            <Navbar.Toggle
              //onClick={() => this.handleToggler()}
              aria-controls="responsive-navbar-nav"
              data-bs-target="#responsive-navbar-nav"
            />
            <Navbar.Collapse id="responsive-navbar-nav ">
              <Nav className="nav-container flex-row col-md-12">
                <NavDropdown
                  renderMenuOnMount={true}
                  title="Organizá tu viaje"
                  id="collasible-nav-dropdown"
                  className="offset-md-3"
                >
                  <NavDropdown.Item href="#/filtroalojamiento">
                    Hospedaje
                  </NavDropdown.Item>
                  <NavDropdown.Divider />
                  <NavDropdown.Item href="#/listado-guias-agencias-covid/guiasturismo">
                    Guías de Turismo
                  </NavDropdown.Item>
                  <NavDropdown.Divider />
                  <NavDropdown.Item href="#/listado-guias-agencias-covid/agencias">
                    Agencias de Viaje
                  </NavDropdown.Item>
                  {/* <NavDropdown.Divider />
                  <NavDropdown.Item href="#/PPrincipalGastronomia">
                    Gastronomía
     </NavDropdown.Item>*/}
                </NavDropdown>
                <div className="nav-space"></div>
                <NavDropdown
                  renderMenuOnMount={true}
                  title="Conocé San Luis"
                  id="collasible-nav-dropdown"
                >
                  <NavDropdown.Item href="#/tirolesas">
                    Tirolesas
                  </NavDropdown.Item>
                  <NavDropdown.Divider />
                  <NavDropdown.Item href="#/parques-provinciales">
                    Parques Provinciales
                  </NavDropdown.Item>
                  <NavDropdown.Divider />
                  <NavDropdown.Item href="#/caminos-pintorescos">
                    Caminos Pintorescos
                  </NavDropdown.Item>
                  <NavDropdown.Divider />
                  <NavDropdown.Item href="#/Diques">
                    Diques Y Embalses
                  </NavDropdown.Item>
                  <NavDropdown.Divider />
                  <NavDropdown.Item href="#/riosysaltos">
                    Ríos y Saltos
                  </NavDropdown.Item>
                  {/*<NavDropdown.Divider />
                  <NavDropdown.Item href="#/PCerveceria">
                    Caminos Cerveceros
    </NavDropdown.Item>*/}
                  <NavDropdown.Divider />
                  <NavDropdown.Item href="#/PCreerGnral">
                    Iglesias
                  </NavDropdown.Item>
                </NavDropdown>
                <div className="nav-space"></div>
                <NavDropdown
                  renderMenuOnMount={true}
                  title="Institucional"
                  id="collasible-nav-dropdown"
                >
                  <NavDropdown.Item href="#/listadoEstadisticas">
                    Estadísticas
                  </NavDropdown.Item>
                  <NavDropdown.Divider />
                  <NavDropdown.Item href="#/novedades">
                    Prensa Turistíca
                  </NavDropdown.Item>
                  <NavDropdown.Divider />
                  <NavDropdown.Item href="#/Pcontacto">
                    Contacto
                  </NavDropdown.Item>
                </NavDropdown>
                <div className="nav-space"></div>
                <div className="buscador-container">
                  <input
                    onKeyDown={(e) => this.selectOption(e)}
                    id="buscar"
                    type="text"
                    //placeholder="Buscá tu destino             &#9660;"
                    placeholder="Buscá tu destino..."
                    autoComplete="off"
                    className="buscador-destino buscador-icon"
                    value={this.state.filtro}
                    onChange={this.handleBusquedaChange}
                    //onBlur={this.cancelBusqueda}
                  />
                  {this.state.lista ? (
                    <ul className="ul-busqueda "
                      onBlur={this.cancelBusqueda}>{filtro}</ul>
                  ) : (
                    ""
                  )}
                </div>
              </Nav>
            </Navbar.Collapse>
            </Container>
          </Navbar>
        </div>
      </React.Fragment>
    );
  }
}
export default Menu;
