import React, { Component } from "react";
import Viewer from "../components/subcomponentes/Viewer"
import { Link } from "react-router-dom";
//import { Consumer } from "../context";
//import axios from "axios";

class ItemGuiasAgencias extends Component {
    constructor(props) {
		super(props);

		this.state = {
			loading: true,
			data: [],
			tipo: ""
		};
	}

	componentDidUpdate(prevProps) {
        if(this.props.data !== prevProps.data || this.props.tipo !== prevProps.tipo) {
            this.setState({
                loading: true,
				data: this.props.data,
				tipo: this.props.tipo
            });
        }
    }

	componentDidMount() {
        this.setState({
			data: this.props.data,
			tipo: this.props.tipo
        });
    }

	render() {
		const listadoGuiasAgencias = this.state.data.map(nov => {
			if(this.state.tipo === "guiasturismo"){
                return(<div key={`nov-f-${nov.nombre}`} className="row mb-5">
                <div className="col">
                  <div className="titulo">
                    <h3>{nov.nombre}</h3>
                    <span className="pr-4">
                      <i className="fas fa-user" />
                      &nbsp; Categoría: {nov.categoria}
                    </span>
                    <br />
                    <span className="pr-4">
                      <i class="fas fa-phone-volume" />
                      &nbsp; Teléfono: {nov.telefono}
                    </span>
                    <br />
                    <span className="pr-4 ">
                      <i className="fas fa-map-marker" />
                      &nbsp; Ámbito Ejercicio: {nov.ambito}
                    </span>
                    <br />
                    <span>
                      <i class="fas fa-envelope" /> &nbsp; {nov.correo}
                    </span>
                    <hr />
                  </div>
                </div>
              </div>);
                
            }else if(this.state.tipo === "agencias"){
                return (
                    <div key={`nov-f-${nov.nombre}`} className="row mb-5">
                      <div className="col">
                        <div className="titulo">
                          <h3>{nov.nombre}</h3>
                          <span className="pr-4">
                            <i className="fas fa-user" />
                            &nbsp; Dirección: {nov.domicilio}
                          </span>
                          <br />
                          <span className="pr-4">
                            <i class="fas fa-phone-volume" />
                            &nbsp; Teléfono: {nov.telefono}
                          </span>
                          <br />
                          <span className="pr-4 ">
                            <i class="fas fa-envelope" /> 
                            &nbsp; {nov.mail}
                          </span>
                          <br />
                          <span>
                            <i className="fas fa-clock" />
                            &nbsp; Representante: {nov.representante}
                          </span>
                          <hr />
                        </div>
                      </div>
                    </div>
                );
            }
		});
		
		return(
			<React.Fragment>{
                listadoGuiasAgencias
			}</React.Fragment>
		);
	}
}


//Listados.contextType = Consumer;

export default ItemGuiasAgencias;