import React, { Component } from "react";
import { Consumer } from "../../context";
import axios from "axios";
import { Link } from "react-router-dom";

class PListadoEstadisticas extends React.Component {
    constructor(props) {
      super(props);
      this.state = {
        data: []
      };
      this.getData = this.getData.bind(this);
    }

    async getData() {
        let token = this.context.token;
        let self = this;
        
        await axios({
            method: "get",
            headers: {
                "Authorization": token
            },
            url: `${process.env.REACT_APP_API}/reporte/all`,
            responseType: "json"
        })
        .then((response) => {
            if(response.data.data.registros.length > 0) {
                self.setState({
                    data: response.data.data.registros
                })
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
        return(
            <div>
                <br />
                <Link to={`/estadisticas/${element.id}`} key={`map-${element.id}`} style={{width:"auto"}}>	
                    <span className="reco-t-sub2" style={{fontSize: "2em", padding: "2px 15px", backgroundColor: "rgba(114,39,137, 1)", color: "#fff", textTransform: "uppercase", marginLeft:"40px"}}>{element.nombre}</span>
                </Link>
            </div>      
        )
    });
      return (
          <React.Fragment>
            <div className="est-main" >
              <div className="est-titulo" >
                <h3>
                  Listado de estadisticas
                </h3>
              </div>
            </div>
            <div className="container" style={{marginBottom: "20px"}}>
                {graph}
            </div>
          </React.Fragment>                    

      );
    }
  }

  PListadoEstadisticas.contextType = Consumer;

  export default PListadoEstadisticas;