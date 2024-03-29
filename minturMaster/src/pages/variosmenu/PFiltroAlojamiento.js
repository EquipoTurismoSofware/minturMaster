import React, { Component } from "react";
//import { Consumer } from "../../context";
import axios from "axios";
import Loading from "../../utils/Loading";
import Alojamientos from "../../components/subcomponentes/Alojamientos";

class PFiltroAlojamiento extends Component {
    constructor(props) {
        super(props);
        this.state = {
            loading: true,

            localidades: [],
            tipos: [],
            alojamientos: [],
            filtro: [],

            idlocalidad: 0,
            idtipo: 0,
            nombreAloja: ""
        };
        this.getData = this.getData.bind(this);
        this.handleChange = this.handleChange.bind(this);
        this.aplicarFiltro = this.aplicarFiltro.bind(this);
    }

    aplicarFiltro() {
        let { idlocalidad, idtipo, nombreAloja} = this.state;
        idlocalidad = parseInt(idlocalidad, 10);
        idtipo = parseInt(idtipo, 10);
        let filtrado = this.state.alojamientos.filter((value) => {
            let respuesta = true;
            //console.log("Nuevo valor: " + value);
            //Validar la Localidad seleccionada
            if(idlocalidad !== 0) {
                if(parseInt(value.idciudad, 10) !== idlocalidad) {
                    respuesta = false;
                }
            }
            //Validar el Tipo seleccionado
            if(idtipo !== 0) {
                if(parseInt(value.idtipo, 10) !== idtipo) {
                    respuesta = false;
                }
            }
            //Validar Nombre
            if(nombreAloja.length) {
                if(value.nombre.toLowerCase().search(nombreAloja.toLowerCase()) === -1) {
                    respuesta = false;
                }
            }
        
            return respuesta;
        });
        this.setState({
            //Aca estoy metiendo en el estado filtro el array de Alojamientos filtrado.
            filtro: filtrado
        });
    }

    handleChange(event) {
        const target = event.target;
        const value = target.value;
        const name = target.name;
        this.setState({
            [name]: value
        },
        () => {
          this.aplicarFiltro();
        });
    }

    getData() {
       this.setState({loading: true});
        try {
            let token = this.context.token;
            let self = this;
            //Todas las Localidades
            axios({
                method: "get",
                headers: {
                    "Authorization": token
                },
                url: `${process.env.REACT_APP_API}/ciudades`,
                responseType: "json"
            })
            .then((response) => {
                if(response.data.data.count > 0) {
                    response.data.data.registros.unshift({
                        id: 0,
                        nombre: "Todas las Localidades",
                        departamento: "S/N"
                    });
                    self.setState({
                        localidades: response.data.data.registros
                    });
                }
            })
            .catch((error) => {
                console.log(error);
            });
            //Todos los Tipos de Alojamiento
            axios({
                method: "get",
                headers: {
                    "Authorization": token
                },
                url: `${process.env.REACT_APP_API}/tipos`,
                responseType: "json"
            })
            .then((response) => {
                if(response.data.data.count > 0) {
                    response.data.data.registros.unshift({
                        id: 0,
                        descripcion: "Todos los Tipos"
                    });
                    self.setState({
                        tipos: response.data.data.registros
                    });
                }
            })
            .catch((error) => {
                console.log(error);
            });
            //Todos los Alojamientos
            axios({
                method: "get",
                headers: {
                    "Authorization": token
                },
                url: `${process.env.REACT_APP_API}/guias/list`,
                responseType: "json"
            })
            .then((response) => {
                if(response.data.data.registros.length > 0) {
                    self.setState({
                        alojamientos: response.data.data.registros,
                        filtro: response.data.data.registros,
                        loading: false
                    });
                }else{
                }
            })
            .catch((error) => {
                console.log(error);
            });
        } catch(err) {
            // catches errors both in fetch and response.json
            console.log(err);
        }
    }
    
    componentDidMount() {
       document.body.scrollTop = 0; // Safari
       document.documentElement.scrollTop = 0; // Chrome, Firefox, IE y Opera
        this.getData();
    }

    render() {
        const localidades = this.state.localidades.map((localidad) => {
            return(<option key={`localidad-${localidad.id}`} value={localidad.id}>{localidad.nombre}</option>);
        });
        const tipos = this.state.tipos.map((tipo) => {
            return(<option key={`tipo-${tipo.id}`} value={tipo.id}>{tipo.descripcion}</option>);
        });
        return (
            <div className="PFiltroAlojamiento mb-5">
                {
                    this.state.loading ?
                        <div><Loading margins="150px" /></div>
                    :
                    <React.Fragment>
                        <div className="ZonaLocalidad-titulo" style={{backgroundColor: '#722789'}}>
                            <h3 style={{color: '#722789'}}>Alojamientos</h3>
                        </div>
                        <div className="container">
                            <div className="row">
                                <div className="col offset-md-1">
                                    <form /*onSubmit={this.aplicarFiltro}*/ className="mb-5">
                                        <div className="form-row">
                                            <div className="form-group col-md-4">
                                                <div className="container"> 
                                                    <label htmlFor="idlocalidad">Localidad</label>
                                                    <select id="idlocalidad" name="idlocalidad" className="form-control" value={this.state.idlocalidad} onChange={this.handleChange}>
                                                        {localidades}
                                                    </select>
                                                </div>
                                            </div>
                                            <div className="form-group col-md-4">
                                                <div className="container"> 
                                                    <label htmlFor="idtipo">Tipo</label>
                                                    <select id="idtipo" name="idtipo" className="form-control" value={this.state.idtipo} onChange={this.handleChange}>
                                                        {tipos}
                                                    </select>
                                                </div>
                                            </div>
                                            <div className="form-group col-md-4">
                                                <div className="container">
                                                  <label htmlFor="nombreAloja">Nombre</label>
                                                    <input type="text" id="nombreAloja" name="nombreAloja" className="form-control" value={this.state.nombreAloja} onChange={this.handleChange} />
                                                </div>
                                                
                                            </div>
                                            {/*<div className="form-group col-md-3 d-flex align-items-end justify-content-end">
                                                <button type="submit" className="btn btn-primary">Buscar</button>
                                            </div>*/}
                                        </div>
                                    </form>
                                </div>
                            </div>
                        </div>
                        <div className="container">
                            <div className="row">
                                <div className="col">
                                    <Alojamientos idLocalidad={0} data={this.state.filtro} />                             
                                </div>
                            </div>
                        </div>
                    </React.Fragment>
                }
            </div>
        );
    }
}

//PFiltroAlojamiento.contextType = Consumer;

export default PFiltroAlojamiento;