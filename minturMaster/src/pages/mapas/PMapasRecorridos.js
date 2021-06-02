
import React, { Component } from "react";
import { Consumer } from "../../context";
import { Link } from "react-router-dom";
import axios from "axios";
import Loading from "../../utils/Loading";
import NotFound from "../../components/NotFound"
import GoogleMap from "../../components/subcomponentes/GoogleMap";

class PMapasRecorridos extends Component {
  constructor(props) {
    super(props);
    this.state = {
      data: [],
      loading: true,
      isNotFound: true,
      latitudes: [],
      longitudes: []
    };
    this.getData = this.getData.bind(this);
  }

  getData() {
    var token = this.context.token;
    if(this.props.match.params.id == 0){
      //Localidades de la Zona
      axios({
        method: "get",
        headers: {
          Authorization: token,
        },
        url: `${process.env.REACT_APP_API}/zonas/ciudades`,
        responseType: "json",
      })
      .then((response) => {
      if (response.data.data.count > 0) {
          let lat = []
          let lon = []

          response.data.data.registros.forEach(element => {
          lat.push(element.latitud)
          lon.push(element.longitud)
          });

          this.setState(
          {
              data: response.data.data.registros,
              longitudes: lon,
              latitudes: lat,
              loading: false,
              isNotFound: false
          });
      }})
    }else{
      //Localidades de la Zona
    axios({
      method: "get",
      headers: {
        Authorization: token,
      },
      url: `${process.env.REACT_APP_API}/zona/${this.props.match.params.id}/ciudades`,
      responseType: "json",
    })
    .then((response) => {
    if (response.data.data.count > 0) {
        let lat = []
        let lon = []

        response.data.data.registros.forEach(element => {
        lat.push(element.latitud)
        lon.push(element.longitud)
        });

        this.setState(
        {
            data: response.data.data.registros,
            longitudes: lon,
            latitudes: lat,
            loading: false,
            isNotFound: false
        });
    }})
    }
      
  }

  componentDidUpdate(prevProps) {
    if (this.props.match.params.id !== prevProps.match.params.id) {
      this.getData();
    }
  }

  componentDidMount() {
    document.body.scrollTop = 0; // Safari
    document.documentElement.scrollTop = 0; // Chrome, Firefox, IE y Opera
    this.getData();
  }

  render() {
    //console.log(atractivosData);
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
          <React.Fragment>
            <div id="mapa">
                <GoogleMap
                    data={this.state.data}
                    lat={this.state.latitudes}
                    lng={this.state.longitudes}
                    zoom="8"
                    gwidth="100%"
                    gheight="600px"
                />
            </div>
          </React.Fragment>
        )}
      </div>
    );
  }
}

PMapasRecorridos.contextType = Consumer;

export default PMapasRecorridos;
