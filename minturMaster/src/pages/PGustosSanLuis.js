import React from "react";
import { Component } from "react";
import Loading from "../utils/Loading";
import PuntanidadGastronimica from "../utils/images/puntanidad-gastronomica.png"
import GustoASanLuis from "../utils/images/gusto-a-san-luis.png"
import Sello from '../utils/images/sello.png'

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
            <div className="gustos-san-luis col-md-12">
              <div className="col-md-2">
                <img  className="" src={PuntanidadGastronimica} />
              </div>
              <div className="col-md-2">
              <img  className="" src={GustoASanLuis} />
              </div>
              <div className="col-md-2">
              <img  className="" src={Sello} />
              </div>
            </div>
          </>
        )}
      </div>
    );
  }
}

export default GustosSanLuis;
