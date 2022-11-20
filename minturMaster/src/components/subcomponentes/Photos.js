import Masonry from "react-masonry-css";
import React, { useEffect, useState } from "react";
import axios from "axios";
import PhotosModal from "./PhotosModal";

const Columns = {
    default: 4,
    1200: 3,
    1000: 2,
    700: 1,
  };

const Photos = (props)  => {
    const [getPhotos, setGetPhotos] = useState([]);
    const [getFilteredPhotos, setGetFilteredPhotos] = useState([]);
    const [getHashtags, setGetHashtags] = useState([]);
    const [activeSearch, setActiveSearch] = useState(false);
    const [searchValue, setSearchValue] = useState("");
    const [openModal, setOpenModal] = useState(false);

    //Valores para modal
    const [selectedImg, setSelectedImg] = useState("");
    const [selectedImgCity, setSelectedImgCity] = useState("");
    const [selectedImgTags, setSelectedImgTags] = useState([]);
    
    console.log("Soy Photos: Me renderice");

      //Get de fotos y hashtags
      useEffect(() => {
        async function fetchPhotos() {
          const URL = `${process.env.REACT_APP_API}/fotos`;
          try {
            const res = await axios.get(URL);
    
            setGetPhotos(res.data.data.registros);
            setGetFilteredPhotos(getPhotos);
          } catch (error) {
            console.log(error);
          }
        }
    
        async function fetchHashtags() {
          const URL = `${process.env.REACT_APP_API}/tags`;
          try {
            const res = await axios.get(URL);
            setGetHashtags(res.data.data.registros);
          } catch (error) {
            console.log(error);
          }
        }
    
        //console.log("valor filtro: " + props.filterValue);
    
        fetchPhotos();
        fetchHashtags();
      }, []);

      const posts = getPhotos
        .filter((item) => {
          let searchParam = props.searchFilter;

          if(item.ciudad.toString().toLowerCase().includes(searchParam.toLowerCase())){
                  return item;
                }
        })
        .map(({ id, imagen, ciudad, tags }) => {
          imagen =
            "http://www.turismo.sanluis.gov.ar/api-turismo/public/recursos/galeriaLocalidad/" +
            imagen;

          let namedTags = [];
          let countTag = 0;
          let splitedTags = tags.split(",");
          splitedTags.forEach(function(tagid) {
            getHashtags.forEach(function(tag) {
              if (tagid == tag.id) {
                let positionTag = "";
                switch (countTag) {
                  case 0:
                    positionTag = "first";
                    break;
                  case 1:
                    positionTag = "second";
                    break;
                  case 2:
                    positionTag = "third";
                    break;
                  case 3:
                    positionTag = "fourth";
                    break;
                  case 4:
                    positionTag = "fifth";
                    break;
                  default:
                    console.log("demasiados tags");
                }
                //namedTags.push(item.nombre);
                //namedTags[countTag] = tag.nombre;
                namedTags[countTag] = (
                  <span
                    className={`hashtag text-light small col-sm-auto m-0 ${positionTag}`}
                  >
                    #{tag.nombre}
                  </span>
                );

                countTag++;
              }
            });
          });
          return (
            <div
              className="container-img"
              onClick={() => setModal(id,imagen,ciudad)}
              key={id}
            >
              <img clasName="imagen" src={imagen} alt="" />
              <div className="ciudad">
                <p className="text-light m-1">{ciudad}</p>
              </div>
              <div className="hashtag-container">{namedTags}</div>
            </div>
          );
        });
        
    // const filtrar = (busqueda) => {
    //   var searchParam = busqueda
    //   setGetFilteredPhotos(getPhotos.filter((elemento) =>{
    //     if(elemento.ciudad.toString().toLowerCase().includes(searchParam.toLowerCase())){
    //       //console.log(elemento);
    //       return elemento;
    //     }
    //     //console.log(resultadoBusqueda);

    //   }));

    //   //setGetPhotos(resultadoBusqueda);
    // }

    function updatePhotos(){

      setSearchValue(props.searchFilter);
      
        console.log("Busqueda: " + searchValue);
        //filtrar galeria
  
        // let aux = [];
        
        // getFilteredPhotos.filter((item) =>{
        //   if(item.ciudad.toLowerCase().match(props.searchFilter.toLowerCase()))
        //   {
        //     aux.push(item); 
        //   }
        // })
  
        // console.log(aux);
        
        //setGetFilteredPhotos(aux);
        setActiveSearch(true);
    }
   
    function setModal(id,imagen,ciudad) {
      
        setOpenModal(true);

        setSelectedImg(imagen);
        setSelectedImgCity(ciudad);

        //Set array hashtags
        let spanTags = [];
        let hashtags = getPhotos.find(x => x.id == id).tags.split(',');

        hashtags.forEach(function(tagId) {
          getHashtags.forEach(function(tag) {
            if(tagId == tag.id){
 
              spanTags.push("#" + tag.nombre)
            }
          })
        });

        setSelectedImgTags(spanTags);
        
      }

  
    return (
      <div className="center-masonry">
        <Masonry
          breakpointCols={Columns}
          className="my-masonry-grid col-sm-10 offset-sm-1"
          columnClassName="my-masonry-grid_column"
        >
          {posts}
        </Masonry>
        
        {openModal && <PhotosModal 
        closeModal={setOpenModal} 
        src={selectedImg} 
        city={selectedImgCity} 
        hashtags={selectedImgTags} 
        />}
        
      </div>
    );
  }

  export default Photos;