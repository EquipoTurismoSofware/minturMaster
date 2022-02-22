import React, { Component } from "react";
//import { Consumer } from "../context";
//import axios from "axios";

class ItemCardCiudades extends Component {
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
              loading: false,
              data: this.props.data,
              tipo: this.props.tipo
            });
        }
    }

	componentDidMount() {
        this.setState({
			    data: this.props.data,
          tipo: this.props.tipo,
          loading: false
        });
    }

	render() {
		const listadoGuiasAgencias = this.state.data.map(nov => {
			if(this.state.tipo === "guiasturismo"){
                return(
                  <div>
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
                    {
                      nov.correo !== ""?
                      <span>
                        <br />
                        <i class="fas fa-envelope" /> &nbsp; {nov.correo}
                      </span>
                      :
                      ""
                    }
                    <hr />
                  </div>
                  );
                
            }else if(this.state.tipo === "agencias"){
                return (
                        <div>
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
                          {
                            nov.mail !== ""?
                            <span>
                              <i class="fas fa-envelope" /> &nbsp; {nov.mail}
                              <br />
                            </span>
                            :
                            ""
                          }
                          <span>
                            <i className="fas fa-clock" />
                            &nbsp; Representante: {nov.representante}
                          </span>
                          <hr />
                        </div>
                );
            } else if(this.state.tipo === "aeropuertos"){
              return (
                <div>
                  <h4>
                    {nov.nombre}
                  </h4>
                  <span className="pr-4 ">
                    <i className="fas fa-map-marker" />
                    &nbsp; Dirección: {nov.direccion}
                  </span>
                  <br />
                  <span className="pr-4">
                    <i className="fas fa-user" />
                    &nbsp; Tel./Cel.: {nov.telefono}
                  </span>
                  <br />
                  {
                    nov.web !== "" ?
                  <span>
                    <i class="fas fa-globe-americas" />
                    &nbsp; {nov.web}
                    <br />
                  </span>
                  : ""
                  }             
                  <span>
                    <i class="fas fa-plane-departure" /> &nbsp;
                    Código: {nov.codigo}
                  </span>
                  <hr />
                </div>
             )             
            }else if(this.state.tipo === "alquileresauto"){
              return(<div>
                <h4>{nov.nombre} </h4>
                <span className="pr-4 ">
                  <i className="fas fa-map-marker" />
                  &nbsp; Dirección: {nov.direccion}
                </span>
                <br />
                <span className="pr-4">
                  <i className="fas fa-user" />
                  &nbsp; Tel./Cel.: {nov.telefono}
                </span>
                <br />
                <span>
                  <i class="fas fa-globe-americas" />
                  &nbsp;{nov.web} -
                  {nov.mail}
                </span>
                <br />
                <span>
                  <i class="fas fa-clock" /> &nbsp; Horario: {nov.horario}
                </span>
                <hr />
              </div>)
              
            } else if(this.state.tipo === "casascambio"){
              return(
                <div>
                  <h4>{nov.nombre}</h4>
                  <span className="pr-4 ">
                    <i className="fas fa-map-marker" />
                    &nbsp; Dirección: {nov.direccion}
                  </span>
                  <br />
                  <span className="pr-4">
                    <i className="fas fa-user" />
                    &nbsp; Tel./Cel.: {nov.telefono}
                  </span>
                  <br />
                  {
                    nov.web !== "" ?
                    <span>
                      <i class="fas fa-globe-americas" />
                      &nbsp; {nov.web}
                      <br />
                    </span>
                    :""
                  }
                  <hr />
                </div>
              )
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

export default ItemCardCiudades;