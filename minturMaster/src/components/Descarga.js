import React, { Component } from "react";
import ReactWOW from "react-wow";
import { Link } from "react-router-dom";

class Descarga extends Component {
  constructor(props) {
    super(props);
    this.state = {
      loading: true,
    };
  }

  render() {
    return (
      <ReactWOW animation="fadeIn">
        <div className="Descarga">
          <div className="contenedorAnimacion">
            <div className="container container_1">
              <div className="piece"></div>
              <div className="piece"></div>
              <div className="piece"></div>
              <div className="piece"></div>
              <div className="text2"></div>
            </div>
            <div className="container_2 map-marker"></div>
          </div>

          <Link to="descargar-mapas" style={{ textDecoration: "none" }} className="descarga-container-main">
            <div className="descarga-leyenda">
              <div className="descarga-titulos">
                <span className="dt-1"> ¡Hacé click acá!</span>
                <span className="dt-2">
                  para obtener los mapas de toda la provincia
                </span>
              </div>

              <div className="descarga-icono">
                <i className="fas fa-arrow-down" />
              </div>
            </div>
          </Link>
        </div>
      </ReactWOW>
    );
  }
}

export default Descarga;
