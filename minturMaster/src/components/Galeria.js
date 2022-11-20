import React, { useState } from "react";
//import axios from "axios";
import Photos from "./subcomponentes/Photos";

const Gallery = () => {
  //const [getSearchList, setGetSearchList] = useState([]);
  const [searchFilter, setSearchFilter] = useState("");
  //const [filterValue, setFilterValue] = useState("");
  //console.log("Soy galeria: Me renderice");
  //const [filteredResults, setFilteredResults] = useState([]);

  const onChange = async (e) =>{
    e.persist();
    await setSearchFilter(e.target.value);
    console.log(searchFilter);
  }
  //Muestra las sugerencias de busqueda que corresponden con el texto ingresado en el buscador
  const handleChange = (e) => {
    
    setSearchFilter(e.target.value);
    //console.log(searchFilter);
    //if (searchFilter !== "") {

      // const filteredData = getSearchList.filter((item) => {
      //   return Object.values(item)
      //     .join("")
      //     .toLowerCase()
      //     .includes(searchFilter.toLowerCase());
      // });

      //setFilteredResults(filteredData);

    //} else {
      //setFilteredResults(getSearchList);
      //console.log("No hice nada");
    //}
  };

  //Api call - sugerencias de busqueda
  // useEffect(() => {
  //   async function fetchSearchList() {
  //     const URL = `${process.env.REACT_APP_API}/buscadorList`;
  //     try {
  //       const res = await axios.get(URL);

  //       setGetSearchList(res.data.data.registros);
  //     } catch (error) {
  //       console.log(error);
  //     }
  //   }

  //   fetchSearchList();
  // }, []);

  return (
    <>
    <div class="header-gallery col-sm-10 offset-sm-1">
      <p className="gallery-title">Galería de localidades</p>
      <input
        id="buscar"
        type="text"
        className="gallery-search buscador-icon"
        placeholder="Buscá localidad/tag...    &#9660;"
        autoComplete="off"
        onChange={handleChange}
        //onChange={handleSearchChange}
        //value={searchFilter}
      />
      {/* {searchFilter.length >0 ? <ul className="ul-busquedas">{filteredResults.map((item) => {
        return(
          <li
            id={item["id"]}
            key= {"li-" + item["nombre"]}
            value={item["nombre"]}
            className="linkBusqueda"
            //onClick={filteredGallery(item)}
            style={{ textDecoration: "none" }}
          >
            {item["nombre"]}
          </li>
        )
      })}
      </ul> : ""} */}
    </div>
    <Photos searchFilter={searchFilter} /> 
    {/* filteredResults={filteredResults}  */}
   {/* searchClicked={searchClicked} /> */}
    </>
  );
};

export default Gallery;

// function LoadGallery(){

//   const [getPhotos, setGetPhotos] = useState([]);

//   fetch(`${process.env.REACT_APP_API}/fotos`, {
//     method: "GET",
//     headers: {
//       Authorization: "asdssffsdff",
//     },
//   })
//     .then((res) => res.json())
//     .then((result) => {
//       if (!result.err) {
//         var setX = result.data.registros.map((v) => {
//           return {
//             ...v,
//           };
//         });
//         PhotosTest = setX;
//       } else {
//         //if not working
//       }
//     });
// }

// const Photos = () => {
//   return (
//     <div className="center-masonry">
//       <Header />
//       <Masonry
//         breakpointCols={Columns}
//         className="my-masonry-grid"
//         columnClassName="my-masonry-grid_column"
//       >
//         {PhotosTest.data.registros.map(({ id, imagen, ciudad }) => {
//           imagen = "http://www.turismo.sanluis.gov.ar/api-turismo/public/recursos/galeriaLocalidad/" + imagen;
//           return (
//             <div className="container-img" onClick={() => setModal()} key={id}>
//               <img clasName="imagen" src={imagen} alt="" />
//               <div className="ciudad">
//                 <p className="text-light m-1">{ciudad}</p>
//               </div>

//             </div>
//           );
//         })}
//       </Masonry>
//     </div>
//   );
// };

// const Modal = (img) => {
//   return(
//     <div className="modal fade" id="modal-img" tabIndex="-1" aria-hidden="true">
//             <div className="modal-dialog">
//               <div className="modal-content hijo">
//                 <div className="modal-body">
//                   <button type="button" className="btn-close" data-bs-dismiss="modal" aria-label="Close">
//                   <span aria-hidden="true">&times;</span>
//                   </button>
//                   <p>Prodria ser una imagen</p>
//                   {/* <img className="d-block w-100" src= /> */}
//                 </div>
//               </div>
//             </div>

//           </div>
//   );
// }


//Funcion search list vieja
// function handleSearchChange(event) {
  //   let value = event.target.value;
  //   setSearchFilter(value);

  //   var copy = Object.assign([], getSearchList);
  //   copy = copy.map((d) => {
  //     if(d.nombre.toLowerCase().indexOf(value.toLowerCase()) > -1) {
  //       d.visible = true;
  //       return d;
  //     }
  //     else{
  //       d.visible = false;
  //     }
  //     return d;
  //   });
  //   setGetSearchList(copy);
  //   setShowList(true);

  //   console.log(getSearchList);
  // }