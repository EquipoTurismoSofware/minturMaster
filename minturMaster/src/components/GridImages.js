import React, { useEffect, useRef  } from 'react';
import { Consumer } from "../context";

const GridImages = () => {
    const gallery = useRef(null);

    useEffect(() => {
      var links = [
         {link: "https://forms.gle/NyAVNHqRsRrZDBs7A", nombre: "AstroTurismo", foto:"http://turismo.sanluis.gov.ar/api-turismo/public/recursos/AstroTurismo2021.jpeg"}, 
         {link: "https://forms.gle/kQui56yJXDwFuDD29", nombre: 'Visitas a "ANTU RUCA" 🦙', foto:`https://source.unsplash.com/collection/167880/500x500/?sig=${randomNumber(12)}`},
         {link: "https://forms.gle/z2scZi2AwK5aj9vp8", nombre: "Visitas a la Mina de Oro ⛏️", foto:"http://turismo.sanluis.gov.ar/api-turismo/public/recursos/MinasDeOro2021.jpeg"}, 
         {link: "https://forms.gle/srFroWMXvZgHgxNt6", nombre: "Trekking Cascada Esmeralda 🌊", foto:`https://source.unsplash.com/collection/167880/500x500/?sig=${randomNumber(12)}`}, 
         {link: "https://forms.gle/Jb8Zyg6kTReP1zKg8", nombre: "Trekking Nido del Águila🌊", foto:`https://source.unsplash.com/collection/167880/500x500/?sig=${randomNumber(12)}`}, 
         {link: "https://forms.gle/K6gdKDXjoPx7FAaQ8", nombre:"Trekking Salto de la Moneda🌊", foto:`https://source.unsplash.com/collection/167880/500x500/?sig=${randomNumber(12)}`}, 
         {link: "https://forms.gle/LquZiaxMnF56A6hr9", nombre: "Caminata de interpretación - MIRADOR DEL PEÑON", foto:`https://source.unsplash.com/collection/167880/500x500/?sig=${randomNumber(12)}`}
      ]
      
      var cuerpo = links.map(x => {
         return `<a class="item col4 row4" href="${x.link}" target="_blank">
           <img src="${x.foto}" />
           <div class="item__overlay">
            <button>${x.nombre} →</button>
           </div>
         </a>`
      })
      
      gallery.current.innerHTML = cuerpo + "";
   }, [])

    const randomNumber = (max) => {
       return Math.floor((Math.random() * (max - 3 + 1)) + 3);
    }

    return (
        <React.Fragment>
            {
            <div className="GridImageMain">
               <div className="GridImageTitle">
                  <h2>Turismo en vacaciones de invierno</h2>
               </div>
               <div className="GridImageBody" >
                 <section class="gallery" ref={gallery}></section> 
               </div>
            </div>               
               
            }
        </React.Fragment>
    );
}


GridImages.contextType = Consumer;

export default GridImages;
