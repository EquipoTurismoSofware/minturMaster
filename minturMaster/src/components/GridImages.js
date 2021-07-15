import React, { Component } from "react";
//import { Grid, Dev } from "gymnast";
import { Link } from "react-router-dom";

export default class TurismoDosep extends Component {
  render() {
    return (
      <div className="container mb-5">
        <div className="container">
          <div className="row mb-3" style={{ paddingTop: "150px" }}>
            <div className="pantallaGrandeGrid">
              <center>
                <img
                  style={{ height: 250, width: 350 }}
                  className="img-fluid"
                  src="http://turismo.sanluis.gov.ar/recursos/caratula.png"
                  alt="Img"
                />
                <div className="ZonaDetalle-titulo">
                  <h3 style={{ color: `#722789` }}>
                    ESTAS VACACIONES TENEMOS PARA OFRECERTE:
                  </h3>
                </div>
                <h5>
                  Hacé click en la actividad que prefieras y consulta las fechas
                  y los cupos.
                </h5>
              </center>

              <center>
                <div className="row">
                  {/*
                  <div className="one-third column">
                    <Link to="/listado-guias-covid" className="link-menu">
                      <img
                        style={{ height: 200, width: 350 }}
                        className="img-fluid"
                        src={`${process.env.REACT_APP_API_RECURSOS}/recursos/modal/TARJETA_EXCURSIONES.jpg`}
                        alt="Img"
                      />
                    </Link>
                  </div>*/}{" "}
                  <div className="one-two  column">
                     <a
                        href="https://forms.gle/LquZiaxMnF56A6hr9"
                        className="link-menu"
                     >
                      <img
                        style={{ height: 300, width: 550 }}
                        className="img-fluid"
                        src="http://turismo.sanluis.gov.ar/recursos/caminatas.jpg"
                        alt="Img"
                      />
                    </a>
                    
                  </div>
                  <div className="one-two  column">
                  <a href="https://wa.link/9fvbpk" className="link-menu">
                      <img
                        style={{ height: 300, width: 550 }}
                        className="img-fluid"
                        src="http://turismo.sanluis.gov.ar/recursos/city.jpg"
                        alt="Img"
                      />
                    </a>
                   
                  </div>
                  <div className="one-three column">
                    <a
                      href="https://forms.gle/NyAVNHqRsRrZDBs7A"
                      className="link-menu"
                    >
                      <img
                        style={{ height: 300, width: 550 }}
                        className="img-fluid"
                        src={"http://turismo.sanluis.gov.ar/recursos/astro.jpg"}
                        alt="Img"
                      />
                    </a>
                  </div>
                  <div className="one-three column">
                    <a
                      href="https://forms.gle/srFroWMXvZgHgxNt6"
                      className="link-menu"
                    >
                      <img
                        style={{ height: 300, width: 550 }}
                        className="img-fluid"
                        src="http://turismo.sanluis.gov.ar/recursos/esmeralda.jpg"
                        alt="Img"
                      />
                    </a>
                  </div>
                  <div className="one-three  column">
                    <a
                      href="https://forms.gle/Jb8Zyg6kTReP1zKg8"
                      className="link-menu"
                    >
                      <img
                        style={{ height: 300, width: 550 }}
                        className="img-fluid"
                        src="http://turismo.sanluis.gov.ar/recursos/aguila.jpg"
                        alt="Img"
                      />
                    </a>
                  </div>
                  <div className="one-two  column">
                  <a
                      href="https://forms.gle/K6gdKDXjoPx7FAaQ8"
                      className="link-menu"
                    >
                      <img
                        style={{ height: 300, width: 550 }}
                        className="img-fluid"
                        src="http://turismo.sanluis.gov.ar/recursos/moneda.jpg"
                        alt="Img"
                      />
                    </a>
                  </div>
                  <div className="one-two  column">
                    <a
                      href="https://forms.gle/z2scZi2AwK5aj9vp8"
                      className="link-menu"
                    >
                      <img
                        style={{ height: 300, width: 550 }}
                        className="img-fluid"
                        src="http://turismo.sanluis.gov.ar/recursos/oro.jpg"
                        alt="Img"
                      />
                    </a>
                  </div>
                  <div className="one-two  column">
                     <a
                        href="https://forms.gle/kQui56yJXDwFuDD29"
                        className="link-menu"
                     >
                      <img
                        style={{ height: 300, width: 550 }}
                        className="img-fluid"
                        src="http://turismo.sanluis.gov.ar/recursos/anturuca.jpg"
                        alt="Img"
                      />
                    </a>
                  </div>
                </div>
              </center>
            </div>
          </div>
        </div>
        <div className="row mb-3" style={{ paddingTop: "0px" }}>
          <div className="pantallaChicaGrid">
            <center>
              <img
                style={{ height: 150, width: 200 }}
                className="img-fluid"
                src="http://turismo.sanluis.gov.ar/recursos/caratula.png"
                alt="Img"
              />
              <div className="ZonaDetalle-titulo">
                <h3 style={{ color: `#722789` }}>
                  ESTAS VACACIONES TENEMOS PARA OFRECERTE:
                </h3>
              </div>
            </center>
            <center>
              <div className="one-three column">
              <a href="https://wa.link/9fvbpk" className="link-menu">
                  <img
                    style={{ height: 200, width: 400 }}
                    className="img-fluid"
                    src="http://turismo.sanluis.gov.ar/recursos/city.jpg"
                    alt="Img"
                  />
                </a>
                
              </div>
              <div className="one-three column">
                <a
                  href="https://forms.gle/LquZiaxMnF56A6hr9"
                  className="link-menu"
                >
                  <img
                    style={{ height: 200, width: 400 }}
                    className="img-fluid"
                    src="http://turismo.sanluis.gov.ar/recursos/caminatas.jpg"
                    alt="Img"
                  />
                </a>
              </div>
              <div className="one-three column">
                <a
                  href="https://forms.gle/srFroWMXvZgHgxNt6"
                  className="link-menu"
                >
                  <img
                    style={{ height: 200, width: 400 }}
                    className="img-fluid"
                    src="http://turismo.sanluis.gov.ar/recursos/esmeralda.jpg"
                    alt="Img"
                  />
                </a>
              </div>
              <div className="row">
                <div className="one-third column">
                  <a
                    href="https://forms.gle/K6gdKDXjoPx7FAaQ8"
                    className="link-menu"
                  >
                    <img
                      style={{ height: 200, width: 400 }}
                      className="img-fluid"
                      src="http://turismo.sanluis.gov.ar/recursos/moneda.jpg"
                      alt="Img"
                    />
                  </a>
                </div>
              </div>
              <div className="one-three  column">
                <a
                  href="https://forms.gle/Jb8Zyg6kTReP1zKg8"
                  className="link-menu"
                >
                  <img
                    style={{ height: 200, width: 400 }}
                    className="img-fluid"
                    src="http://turismo.sanluis.gov.ar/recursos/aguila.jpg"
                    alt="Img"
                  />
                </a>
              </div>
              <div className="one-three  column">
                <a
                  href="https://forms.gle/kQui56yJXDwFuDD29"
                  className="link-menu"
                >
                  <img
                    style={{ height: 200, width: 400 }}
                    className="img-fluid"
                    src="http://turismo.sanluis.gov.ar/recursos/anturuca.jpg"
                    alt="Img"
                  />
                </a>
              </div>
              <div className="one-three  column">
                <a
                  href="https://forms.gle/z2scZi2AwK5aj9vp8"
                  className="link-menu"
                >
                  <img
                    style={{ height: 200, width: 400 }}
                    className="img-fluid"
                    src="http://turismo.sanluis.gov.ar/recursos/oro.jpg"
                    alt="Img"
                  />
                </a>
              </div>
              <div className="one-two  column">
               <a
                     href="https://forms.gle/NyAVNHqRsRrZDBs7A"
                     className="link-menu"
                  >
                  <img
                    style={{ height: 200, width: 400 }}
                    className="img-fluid"
                    src={"http://turismo.sanluis.gov.ar//recursos/astro.jpg"}
                    alt="Img"
                  />
                </a>
              </div>
            </center>
          </div>
          {/* <div className="pantallaGrande"></div>
          <div className="pantallaChica">
            <div className="ZonaDetalle-titulo ">
              <h3 style={{ color: `#722789` }}>
                INFORMACIÓN PARA PRESTADORES DE SERVICIOS:
              </h3>
            </div>

            <center>
              <div className="row">
                 <div className="one-third column">
                    <Link to="/listado-guias-covid" className="link-menu">
                      <img
                        style={{ height: 200, width: 350 }}
                        className="img-fluid"
                        src={`${process.env.REACT_APP_API_RECURSOS}/recursos/modal/TARJETA_EXCURSIONES.jpg`}
                        alt="Img"
                      />
                    </Link>
    </div>
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
          </div>*/}
        </div>
      </div>
    );
  }
}

{
  /** 
import React, { useEffect, useRef } from "react";
import { Consumer } from "../context";

const GridImages = () => {
  const gallery = useRef(null);

  useEffect(() => {
    var links = [
      {
        link: "https://forms.gle/NyAVNHqRsRrZDBs7A",
        nombre: "AstroTurismo",
        foto:
          "http://turismo.sanluis.gov.ar/api-turismo/public/recursos/AstroTurismo2021.jpeg",
      },
      {
        link: "https://forms.gle/kQui56yJXDwFuDD29",
        nombre: "Visitas a ANTU RUCA 🦙",
        foto:
          "http://turismo.sanluis.gov.ar/api-turismo/public/recursos/AstroTurismo2021.jpeg",
      },
      {
        link: "https://forms.gle/z2scZi2AwK5aj9vp8",
        nombre: "Visitas a la Mina de Oro ⛏️",
        foto:
          "http://turismo.sanluis.gov.ar/api-turismo/public/recursos/MinasDeOro2021.jpeg",
      },
      {
        link: "https://forms.gle/srFroWMXvZgHgxNt6",
        nombre: "Trekking Cascada Esmeralda 🌊",
        foto: `https://source.unsplash.com/collection/167880/500x500/?sig=${randomNumber(
          12
        )}`,
      },
      {
        link: "https://forms.gle/Jb8Zyg6kTReP1zKg8",
        nombre: "Trekking Nido del Águila🌊",
        foto: `https://source.unsplash.com/collection/167880/500x500/?sig=${randomNumber(
          12
        )}`,
      },
      {
        link: "https://forms.gle/K6gdKDXjoPx7FAaQ8",
        nombre: "Trekking Salto de la Moneda🌊",
        foto: `https://source.unsplash.com/collection/167880/500x500/?sig=${randomNumber(
          12
        )}`,
      },
      {
        link: "https://forms.gle/LquZiaxMnF56A6hr9",
        nombre: "Caminata de interpretación - MIRADOR DEL PEÑON",
        foto: `https://source.unsplash.com/collection/167880/500x500/?sig=${randomNumber(
          12
        )}`,
      },
    ];

    var cuerpo = links.map((x) => {
      return `
      <a class="item col4 row4" href="${x.link}" target="_blank">
           <img src="${x.foto}" />
           <div class="item__overlay">
            <button>${x.nombre} →</button>
           </div>
         </a>`;
    });

    gallery.current.innerHTML = cuerpo + "";
  }, []);

  const randomNumber = (max) => {
    return Math.floor(Math.random() * (max - 3 + 1) + 3);
  };

  return (
    <React.Fragment>
      {
        <div className="GridImageMain">
          <div className="GridImageTitle">
            <h2>Turismo en vacaciones de invierno</h2>
            <h3>Inscribite en las actividades que prefieras</h3>
          </div>
          <div className="GridImageBody">
            <section class="gallery" ref={gallery}></section>
          </div>
        </div>
      }
    </React.Fragment>
  );
};

GridImages.contextType = Consumer;

export default GridImages;
*/
}
