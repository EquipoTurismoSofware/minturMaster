import React, { Component } from "react";
import Graficos from "../../components/Graficos"
import { Consumer } from "../../context";
import axios from "axios";

class PEstadisticas extends React.Component {
    constructor(props) {
      super(props);
      this.state = {
        data: [],
        dataFinal: [{
          title: "",
          data: []
          }, {
            title: "",
            data: []
          },
          {
          title: "",
              data: []
          },
          {
            title: "",
            data: []
        }]
      };
      this.getData = this.getData.bind(this);
    }

    async getData() {
        let data1 = [];
        let token = this.context.token;
        let self = this;
        
        await axios({
            method: "get",
            headers: {
                "Authorization": token
            },
            url: `${process.env.REACT_APP_API}/graficos`,
            responseType: "json"
        })
        .then((response) => {
            if(response.data.data.registros.length > 0) {
                self.setState({
                    data: response.data.data.registros
                },() => {
                  this.state.data.forEach(element => {
                    data1.push({
                      title: element.tipoNombre,
                      data: element.valores
                    });  
                  });
                
                  this.setState({
                      dataFinal: data1
                  })
                });
            }else{
            }
        })
        .catch((error) => {
            console.log(error);
        });
      }

    componentDidMount() {
      document.body.scrollTop = 0; // Safari
      document.documentElement.scrollTop = 0; // Chrome, Firefox, IE y Opera
      this.getData(0)
    }
    
    render() {
      var pos = -1;
      const graph = this.state.data.map((element) => {
        pos++;
        var año = element.fechaDesde.toString().substring(0, 4)
        var fechDesde = element.fechaDesde.toString().substring(8, 10);
        var fechHasta = element.fechaHasta.toString().substring(8, 10);

        if(element.tipoGrafico == "bar" || element.tipoGrafico == "bar-withouty"){
          return(
            <div className="sub-chart-wrapper">
              <div className="sub-chart-wrapper-titulo">{`${element.titulo} del ${fechDesde} al ${fechHasta} de ${año}`}</div>
              <div className="sub-chart-wrapper-subtitulo">{element.tipoNombre}</div>
              <Graficos
              tipo={element.tipoGrafico}
              data={this.state.dataFinal[pos].data}
              title={this.state.dataFinal[pos].title}
              color="#46BFBD"
            />
          </div>
          );
        }else{
          return(
            <div className="sub-chart-wrapper">
              <div className="sub-chart-wrapper-titulo">{`${element.titulo} del ${fechDesde} al ${fechHasta} de ${año}`}</div>
              <div className="sub-chart-wrapper-subtitulo">{element.tipoNombre}</div>
              <Graficos
              tipo={element.tipoGrafico}
              data={this.state.dataFinal[pos].data}
              title={this.state.dataFinal[pos].title}
              color={["#F7464A", "#46BFBD", "#FDB45C", '#3e517a', '#b08ea2', '#BBB6DF']}
            />
          </div>
          );
        }
    });
      return (
          <React.Fragment>
            
            <div className="main-chart-wrapper" >
              <div className="estadisticas-leyenda">
                  <span>ESTADISTICAS</span>
              </div>
              {graph}
            </div>
                        
          </React.Fragment>                    

      );
    }
  }

  PEstadisticas.contextType = Consumer;

  export default PEstadisticas;