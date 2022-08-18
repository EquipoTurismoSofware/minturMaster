import React, { Component } from "react";
import { Link } from "react-router-dom";

class Footer extends Component {
  render() {
    return (
      <React.Fragment>
        <footer class="footer-section">
          <div class="container">
            <div class="footer-content pt-5 pb-5">
              <div class="row">
                <div class="col-xl-4 col-lg-4 mb-50">
                  <div class="footer-widget">
                    <div class="footer-logo">
                      <a href="index.html">
                        <img
                          src={`${process.env.REACT_APP_API}/recursos/logoSanLuis.png`}
                          class="img-fluid"
                          alt="profile card"
                        />
                      </a>
                    </div>
                    <div class="footer-text">
                      <p>
                        Secretaría de Turismo de la Provincia de San Luis.
                        <br />
                        Illia 35, San Luis, Argentina.
                      </p>
                    </div>
                    <div class="footer-social-icon">
                      <span>Seguinos</span>
                      <a href="#">
                        <i class="fab fa-facebook fa-2x"></i>
                      </a>
                      <a href="#">
                        <i class="fab fa-twitter fa-2x"></i>
                      </a>
                      <a href="#">
                        <i class="fab fa-instagram fa-2x"></i>
                      </a>
                    </div>
                  </div>
                </div>
                <div class="col-xl-4 col-lg-4 col-md-6 mb-30">
                  <div class="footer-widget">
                    <div class="footer-widget-heading">
                      <h3>Explorá</h3>
                    </div>
                    <ul>
                      <li>
                        <a href="#">Inicio</a>
                      </li>
                      <li>
                        <a href="#">Hospedaje</a>
                      </li>
                      <li>
                        <a href="#">Gastronomía</a>
                      </li>
                      <li>
                        <a href="#">Agencias de Viaje</a>
                      </li>
                      <li>
                        <a href="#">Guías de Turismo</a>
                      </li>
                      <li>
                        <a href="#">Parques Provinciales</a>
                      </li>
                      <li>
                        <a href="#">Caminos Pintorescos</a>
                      </li>
                      <li>
                        <a href="#">Tirolesas</a>
                      </li>
                      <li>
                        <a href="#">Contactanos</a>
                      </li>
                      <li>
                        <a href="#">Prensa Turistica</a>
                      </li>
                    </ul>
                  </div>
                </div>
                <div class="col-xl-4 col-lg-4 col-md-6 mb-50">
                  <div class="footer-widget">
                    <div class="footer-widget-heading">
                      <h3>Subcribite</h3>
                    </div>
                    <div class="footer-text mb-25">
                      <p>
                        Dejanos tu mail y te contaremos todas las novedades de
                        nuestra provincia.
                      </p>
                    </div>
                    <div class="subscribe-form">
                      <form action="#">
                        <input
                          type="text"
                          placeholder="correo@electronico.com"
                        />
                        <button>
                          <i class="fab fa-telegram-plane"></i>
                        </button>
                      </form>
                    </div>
                  </div>
                  <div class="imgFooter">
                    <a href="index.html">
                      <img
                        src={`${process.env.REACT_APP_API}/recursos/logo4.png`}
                        class=""
                        alt="profile card"
                      />
                    </a>
                  </div>
                </div>
              </div>
            </div>
          </div>

          <div class="copyright-area">
            <div class="container">
              <div class="row">
                <div class="col-xl-6 col-lg-6 text-center text-lg-left">
                  <div class="copyright-text">
                    <p>
                      Sitio oficial de la Secretaría de Turismo Gobierno de San
                      Luis 2022.
                    </p>
                  </div>
                </div>
                <div class="col-xl-6 col-lg-6 d-none d-lg-block text-right">
                  <div class="footer-menu">
                    <ul>
                      <li>
                        <a href="#">Inicio</a>
                      </li>
                      <li>
                        <a href="#">Hospedaje</a>
                      </li>
                      <li>
                        <a href="#">Gastronomía</a>
                      </li>
                      <li>
                        <a href="#">Novedades</a>
                      </li>
                      <li>
                        <a href="#">Contactanos</a>
                      </li>
                    </ul>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </footer>
      </React.Fragment>
    );
  }
}

export default Footer;
