import React, { Component } from "react";
import { Link } from "react-router-dom";
import { Consumer } from "../context";
import axios from "axios";
import Loading from "../utils/Loading";

class PEventos extends Component {
  constructor(props) {
    super(props);
    this.state = {
      loading: true,
      data: [],
      carousel: []
    };
    this.getData = this.getData.bind(this);
  }

  getData() {
    var token = this.context.token;
    var self = this;
    axios({
      method: "get",
      headers: {
        Authorization: token,
      },
      url: `${process.env.REACT_APP_API}/eventos`,
      responseType: "json",
    })
      .then((response) => {
        if (response.data.data.count > 0) {
          let activo = false;
          let carousel = response.data.data.registros.map((a, index) => {
            if (a.imagen === "default.jpg") {
              return null;
            }
            let estilo = {
              backgroundImage: `url(${
                process.env.REACT_APP_API_RECURSOS
              }/recursos/festi.jpg)`,
              backgroundSize: "cover",
              backgroundPosition: "center",
              backgroundRepeat: "no-repeat"
            };
            if (!activo) {
              activo = true;
              return (
                <div
                  key={`caro-${index}`}
                  className="carousel-item active"
                  style={estilo}
                />
              );
            } else {
              return (
                <div
                  key={`caro-${index}`}
                  className="carousel-item"
                  style={estilo}
                />
              );
            }
          });
          self.setState({
            data: response.data.data.registros,
            carousel: carousel,
            loading: false
          });
        } else {
          //No hay registros o el id no es correcto
        }
      })
      .catch(error => {
        console.log(error);
      });
  }

  componentDidMount() {
    document.body.scrollTop = 0; // Safari
    document.documentElement.scrollTop = 0; // Chrome, Firefox, IE y Opera
    this.getData();
  }

  render() {
    const carousel = this.state.carousel;
    const items = this.state.data.map(e => {
      let estilo = {
        backgroundImage: `url(${
          process.env.REACT_APP_API_RECURSOS
        }/recursos/eventos/${e.foto_uno})`,
        backgroundPosition: "center",
        backgroundRepeat: "no-repeat",
        backgroundSize: "cover"
      };
      let dfecha = e.dfecha.split("-");
      let hfecha = e.hfecha.split("-");
      dfecha = `${dfecha[2]}/${dfecha[1]}`;
      hfecha = `${hfecha[2]}/${hfecha[1]}`;
      let numero = Math.floor(Math.random() * (4 - 1 + 1)) + 1; //Color random
      return (
        <div key={`evento-${e.id}`} className="col-lg-4 col-md-6">
          <div className="single-card">
            <Link to={`/evento/${e.id}`} className="eve-link">
              <div className="card-bg" style={estilo} />
              <div className="card-content">
                <h2>{e.titulo}</h2>
                { /* <h3 className={`bgc_${numero}`}>{dfecha} al {hfecha} - {e.localidad}</h3> */
                <h3 style={{ background: "#" + e.color }}>
                  {dfecha} al {hfecha} - {e.localidad}
                </h3>}
              </div>
            </Link>
            {/*<div className="overlay" style={{background: "#" + e.color}}>
                            <h3>{e.titulo}</h3>
                            <h2>{e.lugar}</h2>
                            <h4>Costo: $ {e.costo}</h4>
                            ver más <i className="fa fa-chevron-right"></i>
            </div>*/}
          </div>
        </div>
      );
    });
    return (
      <React.Fragment>
          {this.state.loading ? (
          <div className="PFiltroAlojamiento mb-5">
            <div><Loading margins="96px" /></div>
          </div>
        ) : (
          <React.Fragment>
            <div style={{paddingTop: "100px"}}>
                <div
                  className="ZonaDetalle-titulo"
                  style={{backgroundColor: `#722789` }}
                >
                  <h3 style={{ color: `#722789` }}>Calendario de Eventos</h3>
                </div>
            </div>
            <div className="container mb-5" style={{marginTop: "20px"}}>
              <div className="row" >
                {items}
              </div>
            </div>
          </React.Fragment>
        )}
      </React.Fragment>
    );
  }
}

PEventos.contextType = Consumer;

export default PEventos;
