import React, { Component } from "react";
import { Link } from "react-router-dom";
import Viewer from "../components/subcomponentes/Viewer";

class CardHalloween extends Component {
    constructor(props) {
         
        super(props);
        this.state = {
            loading: true,
            data: [],
            atractivos: [],
            visibles: 4,
            linklist: React.createRef(),
            clase: "alojamiento",
            card: React.createRef(),
            icon: React.createRef()
            
        };
        this.calculoVisibles = this.calculoVisibles.bind(this);
        this.animationMaterialCard = this.animationMaterialCard.bind(this);
    }

    calculoVisibles() {
        var w = window.innerWidth;
        if(w > 1200) {
            this.setState({visibles: 3});
        } else if(w <= 1024 && w >= 768) {
            this.setState({visibles: 2});
        } else {
            this.setState({visibles: 1});
        }
    }

    componentDidUpdate(prevProps) {
        if(this.props.data !== prevProps.data) {
            this.setState({
                loading: true,
                data: this.props.data
            }, () => {
                this.setData();
            });
        }
    }


    animationMaterialCard(id){
        var card = document.getElementById(`atrac-card-${id}`);
        var icon = card.getElementsByTagName("i");
        icon[0].className += " fa-spin-fast"
        if (card.className.includes('mc-active')) {
            card.className = card.className.replace('mc-active', '');
            window.setTimeout(() =>{
                icon[0].className = icon[0].className.replace('fa-arrow-left', '')
                icon[0].className = icon[0].className.replace('fa-spin-fast', '');
                icon[0].className += " fa-bars";

            }, 200);
        } else {
            card.className += ' mc-active';

            window.setTimeout(function() {
                icon[0].className = icon[0].className.replace('fa-bars', '');
                icon[0].className = icon[0].className.replace('fa-spin-fast', '');
                icon[0].className += " fa-arrow-left";

            }, 200);
        }
    }
    
    componentDidMount() {
        this.setState({
            idLocalidad: this.props.idLocalidad,
            atractivos: this.props.data
        });
        window.addEventListener("resize", this.calculoVisibles);
        this.calculoVisibles();
    }

    componentWillUnmount() {
        window.removeEventListener("resize", this.calculoVisibles);
    }

    render() {
        const atractivos = this.state.atractivos.map((atrac) => {
            let descripcion = "";
            if (atrac.descripcion.length > 190) {
            descripcion = atrac.descripcion.substr(0, 190) + "...";
            } else {
            descripcion = atrac.descripcion;
            }
            return(
                <article key={`atrac-card-${atrac.id}`} id={`atrac-card-${atrac.id}`} className={`material-card-hallo`}  ref={this.state.card}>
                    <Link to={`/atractivo/${atrac.id}`}>
                        <h2>
                            <span>{atrac.nombre}</span>
                            {/*<strong>
                                <i className={`fas fa-hotel`}></i>
                                {atrac.tipo}
                            </strong>*/}
                        </h2>
                    </Link>
                    <div class="mc-content">
                        <div class="img-container">
                            <img class="img-responsive" src={`${process.env.REACT_APP_API}/atractivos/${atrac.foto}`} alt="Img" />
                        </div>
                        <div class="mc-description">
                            <li><span>{descripcion}</span></li>
                           {/* <li><i class="fas fa-thumbtack"></i><span>  {atrac.ciudad}</span></li>
                            <li><i class="fas fa-hotel"></i><span>  {atrac.tipo}</span></li>
                            <li><i className="fas fa-phone" /><a href={`tel:+549${atrac.telefono}`}> +54 9 {alo.telefono}</a></li>
                            */}
                        </div>
                    </div>
                    <a class="mc-btn-action" onClick={()=>{this.animationMaterialCard(atrac.id)}}>
                        <i className={`fa fa-bars`} ref={this.state.icon}></i>
                    </a>
                    <div class="mc-footer">
                        <Link to={`/atractivo/${atrac.id}`}><i className="fas fa-angle-double-down"></i></Link>
                    </div>
                </article>
            );
        });
        let x = -1;
        const bullets = this.state.atractivos.map((atrac) => {
            x++;
            return(
                <li>
                    <a
                        href=""
                        data-order={`${x}`}
                        data-id={`${atrac.id}`}
                        
                    ></a>
                </li>
            );
        });
        /* */ 
        return(
            <React.Fragment>
                {
                    <section class="container">
                        <div class="row">
                                {/*atractivos*/}
                                <div class="col">
                                {<Viewer visibles={this.state.visibles} clase={this.state.clase}>
                                    {atractivos}
                                    </Viewer>}
                                    </div>
                            {/*<nav class="link-list" ref={this.state.linklist}>
                                <ul>{bullets}</ul>
                </nav>*/}
                        </div>
                    </section>
                   
                }
            </React.Fragment>
        );
    }
}

export default CardHalloween;