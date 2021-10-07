import React, { Component } from "react";
import { Link } from "react-router-dom";
import { Consumer } from "../../context";
import axios from "axios";
import Viewer from "./Viewer";

/*
    Ej de uso: <Alojamientos idLocalidad="0" data={array} />
*/

class Alojamientos extends Component {
    constructor(props) {
        super(props);
        this.state = {
            loading: true,
            idLocalidad: 0,
            data: [],
            alojamientos: [],
            visibles: 4,
            clase: "alojamiento",
            card: React.createRef(),
            icon: React.createRef()
            
        };
        this.setData = this.setData.bind(this);
        this.calculoVisibles = this.calculoVisibles.bind(this);
        this.animationMaterialCard = this.animationMaterialCard.bind(this);
    }

    calculoVisibles() {
        var w = window.innerWidth;
        //console.log(w);
        /*if(w > 1200) {
            this.setState({visibles: 4});
        } else*/ if(w > 1200) {
            this.setState({visibles: 3});
        } else if(w <= 1024 && w >= 768) {
            this.setState({visibles: 2});
        } else {
            this.setState({visibles: 1});
        }
    }

    setData() {
        const token = this.context.token;
        var self = this;
        this.setState({
            loading: true
        }, () => {
            if(parseInt(self.state.idLocalidad) === 0) {
                self.setState({
                    alojamientos: self.state.data,
                    loading: false
                });
            } else {
                axios({
                    method: "get",
                    headers: {
                        "Authorization": token
                    },
                    url: `${process.env.REACT_APP_API}/guias/ciudad/${self.state.idLocalidad}/full`,
                    responseType: 'json'
                })
                .then((response) => {
                    self.setState({
                        alojamientos: response.data.data.registros,
                        loading: false
                    });
                })
                .catch((error) => {
                    console.log(error);
                });
            }
            
        });
    }

    componentDidUpdate(prevProps) {
        if(this.props.idLocalidad !== prevProps.idLocalidad || this.props.data !== prevProps.data) {
            this.setState({
                loading: true,
                idLocalidad: this.props.idLocalidad,
                data: this.props.data
            }, () => {
                this.setData();
            });
        }
    }


    animationMaterialCard(id){
        var card = document.getElementById(`alo-card-${id}`);
        var icon = card.getElementsByTagName("i");
        icon[4].className += " fa-spin-fast"
        if (card.className.includes('mc-active')) {
            card.className = card.className.replace('mc-active', '');
            window.setTimeout(() =>{
                icon[4].className = icon[4].className.replace('fa-arrow-left', '')
                icon[4].className = icon[4].className.replace('fa-spin-fast', '');
                icon[4].className += " fa-bars";

            }, 200);
        } else {
            card.className += ' mc-active';

            window.setTimeout(function() {
                icon[4].className = icon[4].className.replace('fa-bars', '');
                icon[4].className = icon[4].className.replace('fa-spin-fast', '');
                icon[4].className += " fa-arrow-left";

            }, 200);
        }
    }
        

    componentDidMount() {
        this.setState({
            idLocalidad: this.props.idLocalidad,
            data: this.props.data
        }, () => {
            this.setData();
        });
        window.addEventListener("resize", this.calculoVisibles);
        this.calculoVisibles();
    }

    componentWillUnmount() {
        window.removeEventListener("resize", this.calculoVisibles);
    }
/*let foto = "default.jpg";
            if(alo.imagen !== "") {
                foto = alo.imagen
            }*/ 
    render() {
        const alojamientos = this.state.alojamientos.map((alo) => {
            /*let foto = "default.jpg";
            if(alo.fotos.length > 0) {
                foto = alo.fotos[0].imagen;
            }*/
            let foto = "default.jpg";
            if(alo.imagen !== "") {
                foto = alo.imagen
            }
            return(
                <article key={`alo-card-${alo.id}`} id={`alo-card-${alo.id}`} className={`material-card`} ref={this.state.card}>
                    <Link to={`/alojamiento/${alo.id}`}>
                        <h2>
                            <span>{alo.nombre}</span>
                            <strong>
                                <i className={`fas fa-hotel`}></i>
                                {alo.tipo}
                            </strong>
                        </h2>
                    </Link>
                    <div class="mc-content">
                        <div class="img-container">
                            <img class="img-responsive" src={`${process.env.REACT_APP_API}/imagenes/${foto}`} alt="Img" />
                        </div>
                        <div class="mc-description">
                            <li><i class="fas fa-thumbtack"></i><span>  {alo.ciudad}</span></li>
                            <li><i class="fas fa-hotel"></i><span>  {alo.tipo}</span></li>
                            <li><i className="fas fa-phone" /><a href={`tel:+549${alo.telefono}`}> +54 9 {alo.telefono}</a></li>

                        </div>
                    </div>
                    <a class="mc-btn-action" onClick={()=>{this.animationMaterialCard(alo.id)}}>
                        <i className={`fa fa-bars`} ref={this.state.icon}></i>
                    </a>
                    <div class="mc-footer">
                        <Link to={`/alojamiento/${alo.id}`}><i className="fas fa-angle-double-down"></i></Link>
                    </div>
                </article>

                /*
                <div key={`alo-card-${alo.id}`} className="alo-card m-3">
                    <div className="img-box">
                        <div className="img-content">
                            <div className="nombre">{alo.nombre}</div>
                            <img className="" src={`${process.env.REACT_APP_API}/imagenes/${foto}`} alt="Img" />
                        </div>
                    </div>
                    <div className="details">
                        <div className="content">
                            <div className="nombre">{alo.nombre}</div>
                            <ul className="detalles">
                                <li><i class="fas fa-thumbtack"></i><span>  {alo.ciudad}</span></li>
                                <li><i class="fas fa-hotel"></i><span>  {alo.tipo}</span></li>
                                <li><i className="fas fa-user" /><a href={`tel:+549${alo.caracteristica}${alo.telefono}`}> +54 9 {alo.caracteristica} - {alo.telefono}</a></li>

                            </ul>
                            <div className="vermas">
                                <Link to={`/alojamiento/${alo.id}`}><i className="fas fa-angle-double-down"></i></Link>
                            </div>
                        </div>
                    </div>
                </div>*/
            );
        });
        return(
            <React.Fragment>
                {
                    /*loading ?
                    <div>Cargando...</div>
                    :*/
                    <section class="container">
                        <div class="row">
                            <div class="col">
                                <Viewer visibles={this.state.visibles} clase={this.state.clase}>
                                    {alojamientos}
                                </Viewer>
                            </div>
                        </div>
                    </section>
                    /*
                    <div className="container">
                        <div className="row">
                            <div className="col">
                                <Viewer visibles={this.state.visibles} clase={this.state.clase}>
                                    {alojamientos}
                                </Viewer>
                            </div>
                        </div>
                    </div>
                    */
                }
            </React.Fragment>
        );
    }
}

Alojamientos.contextType = Consumer;

export default Alojamientos;