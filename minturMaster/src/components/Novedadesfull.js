import React, { useEffect, useState, useRef  } from 'react';
import { Consumer } from "../context";
import Loading from "../utils/Loading";
import { Link } from "react-router-dom";
import axios from "axios";

const Novedadesfull = () => {
    const [visibles, setVisibles] = useState({list: []}); 
    const [data, setData] = useState({list: []}); 
    const [page, setPage] = useState(1);
    const loader = useRef(null);

    useEffect(() => {

        var options = {
           root: null,
           rootMargin: "20px",
           threshold: 1.0
        };
       // initialize IntersectionObserver
       // and attaching to Load More div
       axios({
        method: "get",
        headers: {
          Authorization: "token"
        },
        url: `${process.env.REACT_APP_API}/novedades`,
        responseType: "json"
      })
        .then(response => {
          setVisibles({list: response.data.data.registros.splice(0, 12)})
          setData({list: response.data.data.registros})
        })
        .catch(error => {
          console.log(error);
        });

        const observer = new IntersectionObserver(handleObserver, options);
        if (loader.current) {
           observer.observe(loader.current)
        }

   }, []);

   useEffect(() => {
       // here we simulate adding new posts to List
       const newList = visibles.list.concat(data.list.splice(0, 12));
       setVisibles({
           list: newList
       })
       setData({list: data.list})
   }, [page])

   // here we handle what happens when user scrolls to Load More div
  // in this case we just update page variable
   const handleObserver = (entities) => {
       const target = entities[0];
       if (target.isIntersecting) {   
           setPage((page) => page + 1)
       }
    }

    return (
        <React.Fragment>
            {
                <div>
                    <div className="container Novedadesfull">
                        <div className="nf-titulo">
                            <span>NOVEDADES</span>
                        </div>
                    </div>
                    <div className="container">
                        {
                            visibles.list.map((nov, index) => {
                                let descripcion = nov.descripcion.substr(0, 450) + "...";
                                let fecha = nov.fecha.split("-");
                                return(
                                    <div key={`nov-f-${nov.id}`} className="row mb-5">
                                        <div className="col">
                                            <div className="novedad-full-item">
                                                <div className="imagen">
                                                    <span style={{backgroundColor: nov.color}}>{`${fecha[2]}/${fecha[1]}/${fecha[0]}`} - {nov.localidad}</span>
                                                    <img className="img-fluid" src={`${process.env.REACT_APP_API_RECURSOS}/recursos/novedades/${nov.foto_uno}`} alt="Img" />
                                                </div>
                                                <div className="titulo" style={{backgroundColor: nov.color}}>
                                                    <h3>{nov.titulo}</h3>
                                                    <h3>{nov.subtitulo}</h3>
                                                </div>
                                                <div className="body">
                                                    <p className="text-dark mb-2">{descripcion}</p>
                                                    <Link to={`/novedad/${nov.id}`}><span className="btn-novedades">Leer <i className="fas fa-arrow-right"></i></span></Link>
                                                </div>
                                            </div>
                                        </div>
                                    </div>
                                )
                            })
                        }       
                        <div className="loading" ref={loader}>
                            <Loading margins="96px" />
                        </div>                   
                    </div>
                </div>
                
            }
        </React.Fragment>
    );
}


Novedadesfull.contextType = Consumer;

export default Novedadesfull;


/*import React, { Component, useEffect, useState, useRef  } from 'react';
import { Consumer } from "../context";
import { Link } from "react-router-dom";
import axios from "axios";

const Novedadesfull = () => {
    
    const [postList, setPostList] = useState({
        list: [1,2,3,4]
    }); 
    const [data, setData] = useState([]);
    const [loading, setLoading] = useState(true); 
    const [page, setPage] = useState(1);
    const loader = useRef(null);

    useEffect(() => {
         var options = {
            root: null,
            rootMargin: "20px",
            threshold: 1.0
         };
        // initialize IntersectionObserver
        // and attaching to Load More div
        var token = this.context.token;
        var self = this;
        axios({
            method: "get",
            headers: {
                "Authorization": token
            },
            url: `${process.env.REACT_APP_API}/novedades`,
            responseType: 'json'
        })
        .then((response) => {
            setData({
                response.data.data.registros
            })
            self.setState({
                data: response.data.data.registros,
                loading: false
            });
        })
        .catch((error) => {
            console.log(error);
        });
         const observer = new IntersectionObserver(handleObserver, options);
         if (loader.current) {
            observer.observe(loader.current)
         }

    }, []);


    useEffect(() => {
        // here we simulate adding new posts to List
        const newList = postList.list.concat([1,1,1,1]);
        setPostList({
            list: newList
        })
    }, [page])

    // here we handle what happens when user scrolls to Load More div
   // in this case we just update page variable
    const handleObserver = (entities) => {
        const target = entities[0];
        if (target.isIntersecting) {   
            setPage((page) => page + 1)
        }
    }

    const novedades = this.state.data.map((nov) => {
        let descripcion = nov.descripcion.substr(0, 450) + "...";
        let fecha = nov.fecha.split("-");

            return(
                <div key={`nov-f-${nov.id}`} className="row mb-5">
                    <div className="col">
                        <div className="novedad-full-item">
                            <div className="imagen">
                                <span style={{backgroundColor: nov.color}}>{`${fecha[2]}/${fecha[1]}/${fecha[0]}`} - {nov.localidad}</span>
                                <img className="img-fluid" src={`${process.env.REACT_APP_API_RECURSOS}/recursos/novedades/${nov.foto_uno}`} alt="Img" />
                            </div>
                            <div className="titulo" style={{backgroundColor: nov.color}}>
                                <h3>{nov.titulo}</h3>
                                <h3>{nov.subtitulo}</h3>
                            </div>
                            <div className="body">
                                <p className="text-dark mb-2">{descripcion}</p>
                                <Link to={`/novedad/${nov.id}`}><span className="btn-novedades">Leer <i className="fas fa-arrow-right"></i></span></Link>
                            </div>
                        </div>
                    </div>
                </div>
            );
        });

        return (
            <React.Fragment>
                <div className="container Novedadesfull">
                    <div className="nf-titulo">
                        <span>NOVEDADES</span>
                    </div>
                </div>
                <div className="container">
                    {novedades}
                </div>
            </React.Fragment>
        );
    }

Novedadesfull.contextType = Consumer;

export default Novedadesfull;*/ 