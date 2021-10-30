import React, { Component } from "react";
import { Consumer } from "../../context";
import { Link } from "react-router-dom";
import axios from "axios";
import Loading from "../../utils/Loading";
import NotFound from "../../components/NotFound"
import GoogleMap from "../../components/subcomponentes/GoogleMap";
import CardHalloween from "../../components/CardHalloween";

class PHalloweenMain extends Component {
  constructor(props) {
    super(props);
    this.state = {
      data: [],
      localidades: [{
        id: 0,
        idciudad: 0,
        ciudad: "Todas las Localidades",
        descripcion: "Todas las Localidades",
        departamento: "S/N",
        latitud: "00.00",
        longitud: "00.00"
      }],
      latitudesFiltro: [],
      longitudesFiltro: [],
      url: "",
      loading: true,
      isNotFound: true,
      msg: {
        visible: false,
        body: ""
      },
    };
    this.getData = this.getData.bind(this);
  }

  async getData() {
    var dat = []

    var token = this.context.token;
      await axios({
        method: "get",
        headers: {
          Authorization: token,
        },
        url: `${process.env.REACT_APP_API}/atractivoTipo/32`,
        responseType: "json",
      })
      .then((response2) => {
      if (response2.data.data.count > 0) {
        let x = []
        let y = []
        let fil = []
        response2.data.data.registros.forEach(element2 => {
            x.push(element2.latitud)
            y.push(element2.longitud)

            dat.unshift({ "id": element2.id,
              "idciudad": element2.idlocalidad,
              "tipo": element2.tipoAtractivo,
              "nombre": element2.nombre,
              "descripcion": element2.descripcion,
              "foto": element2.imagenes[0].imagen,
              "latitud": element2.latitud,
              "longitud": element2.longitud
            })             
        });
          
        this.setState(
        {   data: dat,
            loading: false,
            isNotFound: false,
            latitudesFiltro:  x,
            longitudesFiltro: y,
        });
      }})
  }

  componentDidMount() {
    document.body.scrollTop = 0; // Safari
    document.documentElement.scrollTop = 0; // Chrome, Firefox, IE y Opera
    this.getData(0);
  }

  render() {
    const loading = this.state.loading;
    const isNotFound = this.state.isNotFound;

    return (
      <div className="ZonaSlider">
        {loading ? (
          <div className="PFiltroAlojamiento mb-5">
            <div>
              <Loading margins="96px" />
            </div>
          </div>
        )
        : isNotFound ? (
          <NotFound />
        )
        :(
          <React.Fragment >
            <div style={{backgroundColor: "rgb(25, 25, 25)"}}>
            <div className="row" style={{paddingTop: "120px"}}>
              <CardHalloween data={this.state.data} />
            </div>
            <div className="row">
              <div id="mapa" style={{width: "80%", marginLeft: "10%", marginTop: "20px", marginBottom: "20px"}}>
                  <GoogleMap
                    data={this.state.data}
                    lat={this.state.latitudesFiltro}
                    lng={this.state.longitudesFiltro}
                    zoom="8"
                    gwidth="100%"
                    gheight="400px"
                  />
              </div>
            </div>
            </div>
          </React.Fragment>
        )}
      </div>
    );
  }
}

PHalloweenMain.contextType = Consumer;

export default PHalloweenMain;
