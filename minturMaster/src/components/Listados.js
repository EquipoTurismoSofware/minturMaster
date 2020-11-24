import React, { Component } from "react";
import Viewer from "../components/subcomponentes/Viewer"
import { Link } from "react-router-dom";
//import { Consumer } from "../context";
//import axios from "axios";

class Listados extends Component {
    constructor(props) {
		super(props);

		this.state = {
			loading: true,
			idLocalidad: 0,
			data: [],
			visibility: [],
			tipo: "",
			visibles: 5,
			clase: "listado"
		};
	}

	componentDidUpdate(prevProps) {
        if(this.props.idLocalidad !== prevProps.idLocalidad || this.props.data !== prevProps.data || this.props.tipo !== prevProps.tipo) {
            this.setState({
                loading: true,
                idLocalidad: this.props.idLocalidad,
				data: this.props.data,
				tipo: this.props.tipo
            });
        }
    }

	componentDidMount() {
        this.setState({
            idLocalidad: this.props.idLocalidad,
			data: this.props.data,
			tipo: this.props.tipo
        });
    }

	render() {
		const listadoAtractivofull = this.state.data.map(atrac => {
			let descripcion = "";
			if(atrac.descripcion.length > 395) {
				descripcion = atrac.descripcion.substr(0, 395) + "...";
			} else {
				descripcion = atrac.descripcion;
			}

			let indice = atrac.imagenes[0].imagen;
			return (
				<Link to={`/${this.state.tipo}/${atrac.id}`} key={`atractivo-${atrac.id}`}>
					<div className="row mb-5">
						<div className="col">
							<div className="atractivo-full-item">
								<div className="imagen">
									<span style={{ backgroundColor: `#${atrac.color}` }}>{atrac.localidad} - {atrac.tipo}</span>
									<img className="img-fluid" src={`${process.env.REACT_APP_API_RECURSOS}/atractivos/${indice}`} alt="Img" />
								</div>
								<div className="titulo" style={{ backgroundColor: `#${atrac.color}` }}>
									<h3>{atrac.nombre}</h3>
								</div>
								<div className="body">
									<p className="text-dark mb-2">{descripcion}</p>
									<span className="btn-novedades">Leer <i className="fas fa-arrow-right" /></span>
								</div>
							</div>
						</div>
					</div>
				</Link>
			);
		});
		
		return(
			<React.Fragment>{
				<Viewer visibles={this.state.visibles} clase={this.state.clase}>
					{listadoAtractivofull}
				</Viewer>
			}</React.Fragment>
		);
	}
}


//Listados.contextType = Consumer;

export default Listados;