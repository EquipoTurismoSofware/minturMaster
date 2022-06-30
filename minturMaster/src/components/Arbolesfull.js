import React, { useEffect, useState, useRef  } from 'react';
import { Consumer } from "../context";
import Loading from "../utils/Loading";
import { Link } from "react-router-dom";
import axios from "axios";
import { pink } from '@mui/material/colors';

const Arbolesfull = () => {
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
        url: `${process.env.REACT_APP_API}/arboles`,
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
                    <div className="container Arbolesfull">
                        <div className="nf-titulo">
                            <span>ARBOLES</span>
                        </div>
                    </div>
                    <div className="container">
                        {
                            visibles.list.map((arb, index) => {
                                let descripcion = arb.descripcion.substr(0, 450) + "...";
                                //let fecha = nov.fecha.split("-");
                                return(
                                    <div key={`nov-f-${arb.id}`} className="row mb-5">
                                        <div className="col">
                                            <div className="arbol-full-item">
                                                <div className="imagen">
                                                    <span style={{background: "linear-gradient(to right, #722789 0%, #ed0f68 100%);"}}> {arb.nombre_popular}</span>
                                                    <img className="img-fluid" src={`${process.env.REACT_APP_API_RECURSOS}/recursos/arboles/${arb.foto_uno}`} alt="Img" />
                                                </div>
                                                <div className="titulo" style={{background: "linear-gradient(to right, #722789 0%, #ed0f68 100%);"}}>
                                                    <h3 id="nombre-cientifico">{arb.nombre_cientifico}</h3>
                                                    <h3 className='nombre-popular'>{arb.nombre_popular}</h3>
                                                </div>
                                                <div className="body">
                                                    <p className="text-dark mb-2">{descripcion}</p>
                                                    <Link to={`/arbol/${arb.id}`}><span className="btn-arboles">Leer <i className="fas fa-arrow-right"></i></span></Link>
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


Arbolesfull.contextType = Consumer;

export default Arbolesfull;