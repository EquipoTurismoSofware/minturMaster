import React from "react";
import { Component } from "react";
import Loading from "../utils/Loading";
import PuntanidadGastronimica from "../utils/images/puntanidad-gastronomica.png";
import GustoASanLuis from "../utils/images/gusto-a-san-luis.png";
import Sello from "../utils/images/sello.png";

class GustosSanLuis extends Component {
  constructor(props) {
    super(props);
    this.state = {
      loading: false,
    };
    //Funciones bind
  }

  //Definicion de funciones

  componentDidMount() {}

  render() {
    //Variables
    const loading = this.state.loading;
    return (
      <div>
        {loading ? (
          <div className="PFiltroAlojamiento mb-5">
            <div>
              <Loading margins="96px" />
            </div>
          </div>
        ) : (
          <>
            <div className="gustos-san-luis">
              <div className="img-puntanidad-gastonomica">
                <img className="" src={PuntanidadGastronimica} />
              </div>
              <div className="img-title">
                <img className="" src={GustoASanLuis} />
              </div>
              <div className="img-puntanidad-gastonomica">
                <img className="" src={Sello} />
              </div>
            </div>
            <div className="intro">
              <p>La construcción de un sello de identidad gastronómica constituye la primera herramienta de calidad, diseñada para integrar a todos establecimientos gastronómicos que brinden una experiencia culinaria, ofreciendo platos elaborados con ingredientes autóctonos. En este sentido, la secretaría de turismo de San Luis, impulsa el turismo gastronómico con el objetivo de resaltar la gastronomía local, destacando sus vínculos con los diferentes entornos sociales, naturales, culturales. </p>
            </div>
          </>
        )}
      </div>
    );
  }
}

export default GustosSanLuis;
