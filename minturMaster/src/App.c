@charset "UTF-8";
/*
    Configuración General
*/
@import url("https://fonts.googleapis.com/css?family=Dosis:200,300,400,500,600,700,800");
/*
    Configuración General
*/
/*
    Mixins
*/
/*
background-color: rgb(114,39,137);
@include filter-gradient(#722789, #ed0f68, horizontal);
@include background-image(linear-gradient(left, rgba(114,39,137,1) 0%,rgba(237,15,104,1) 100%));
*/
/*
@mixin degrado($opacity-start, $opacity-end) {
    background: rgb(105,22,113);
    background: -moz-linear-gradient(left, rgba(105,22,113,$opacity-start) 0%, rgba(190,33,93,$opacity-end) 100%);
    background: -webkit-linear-gradient(left, rgba(105,22,113,$opacity-start) 0%,rgba(190,33,93,$opacity-end) 100%);
    background: linear-gradient(to right, rgba(105,22,113,$opacity-start) 0%,rgba(190,33,93,$opacity-end) 100%);
    filter: progid:DXImageTransform.Microsoft.gradient( startColorstr='#691671', endColorstr='#be215d',GradientType=1 );
}
*/
/*
    Configuración Inicial
*/
@import "~slick-carousel/slick/slick.css";
@import "~slick-carousel/slick/slick-theme.css";
@import url("https://fonts.googleapis.com/css?family=Permanent+Marker|Rock+Salt");
@import url("https://fonts.googleapis.com/css2?family=Jolly+Lodger&display=swap");
@import url("https://fonts.googleapis.com/css2?family=Montserrat:wght@500;600;700;800&display=swap");
@import url("https://fonts.googleapis.com/css?family=Fira+Sans:400,500,600,700,800");
@import "https://fonts.googleapis.com/css?family=Montserrat:400,700|Raleway:300,400";
@import url("https://fonts.googleapis.com/css?family=Josefin+Sans:100,300,400,600,700");
@import url("https://fonts.googleapis.com/css?family=Indie+Flower");
@import url("https://fonts.googleapis.com/css?family=Audiowide|Monoton|Poiret+One|Raleway");
@import url("https://fonts.googleapis.com/css?family=Quicksand:400,500,700&subset=latin-ext");
body {
  font-family: "Roboto", sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  min-width: 360px;
}

.menu-y-slider {
  position: relative;
  width: 100%;
  height: 90vh;
}

.player {
  width: 100%;
  flex-basis: 50%;
  display: flex;
  flex-direction: row;
  justify-content: space-between;
  align-items: center;
  padding: 20px 0;
}
.player .song {
  user-select: none;
  margin: 0 20px;
}
.player .song .song__title {
  text-align: left;
  margin: 0;
  color: rgb(28, 228, 45);
  font-family: "Jolly Lodger";
  font-weight: normal;
  font-size: 4em;
}
.player .song .song__title:hover {
  color: white;
}
.player .song .song__artist {
  margin: 0;
  color: white;
  font-family: "Rock Salt", cursive;
  font-weight: normal;
  font-size: 1em;
}
.player .song .song__artist:hover {
  color: greenyellow;
}
.player .controls {
  flex-grow: 1;
  margin: 15px 20px;
  display: flex;
  flex-direction: column;
  justify-content: center;
  align-items: center;
}
.player .player__button {
  width: fit-content;
  margin-bottom: 15px;
  background-color: transparent;
  border: none;
}
.player .player__button:focus {
  outline: none;
}
.player .player__button:hover {
  cursor: pointer;
}
.player .player__button:hover i {
  color: white;
}
.player .player__button i {
  font-size: 3.5em;
  color: rgb(28, 228, 45);
}
.player .bar {
  user-select: none;
  width: 100%;
  display: flex;
  align-items: center;
}
.player .bar .bar__time {
  color: white;
  font-size: 16px;
}
.player .bar .bar__progress {
  flex: 1;
  border-radius: 5px;
  margin: 0 20px;
  height: 10px;
  display: flex;
  align-items: center;
  cursor: pointer;
}
.player .bar .bar__progress .bar__progress__knob {
  position: relative;
  height: 16px;
  width: 16px;
  bottom: 0px;
  border: 1.5px solid white;
  border-radius: 50%;
  background-color: rgb(22, 172, 34);
}
@media screen and (max-width: 992px) {
  .player {
    flex-direction: column;
  }
  .player .controls {
    width: 100%;
    margin-top: 20px;
  }
  .player .bar {
    width: 90%;
  }
}
@media screen and (max-width: 500px) {
  .player .song .song__title {
    font-size: 2.5em;
  }
  .player .song .song__artist {
    font-size: 0.8em;
  }
}

.material-card-hallo {
  position: relative;
  height: 500px;
  width: 270px;
  margin-right: 5px;
}
.material-card-hallo .hallo-mc-content {
  background-color: black;
  position: absolute;
  right: 0;
  border-radius: 20px;
  padding-top: 5.6em;
  top: 0;
  bottom: 16px;
  left: 16px;
}
.material-card-hallo .hallo-mc-content .hallo-mc-title {
  position: absolute;
  height: fit-content;
  width: 100%;
  top: 0px;
  text-align: center;
  overflow: hidden;
  text-overflow: ellipsis;
  font-size: 2.3rem;
  font-family: "Jolly Lodger";
}
.material-card-hallo .hallo-mc-content .hallo-mc-title li {
  list-style-type: none;
  background: linear-gradient(to right, rgb(73, 0, 95) 10%, rgb(255, 0, 13) 100%);
  -webkit-background-clip: text;
  -webkit-text-fill-color: transparent;
}
.material-card-hallo .hallo-mc-content .hallo-img-container {
  overflow: hidden;
  position: absolute;
  width: 100%;
  height: 40%;
  top: 50px;
}
.material-card-hallo .hallo-mc-content .hallo-img-container img {
  width: 270px;
  height: 200px;
  object-fit: cover;
}
.material-card-hallo .hallo-mc-content .hallo-mc-description {
  position: absolute;
  right: 20px;
  left: 20px;
  top: 35%;
  padding-top: 5.6em;
  overflow: hidden;
  text-overflow: ellipsis;
  color: white;
}
.material-card-hallo .hallo-mc-content .hallo-mc-description li {
  list-style-type: none;
  text-align: left;
  margin-top: 6px;
}
.material-card-hallo .hallo-mc-footer {
  position: absolute;
  cursor: pointer;
  text-align: center;
  top: 89%;
  left: 13%;
}
.material-card-hallo .hallo-mc-footer a {
  color: white;
}

.Main-Halloween {
  background-image: url("http://turismo.sanluis.gov.ar/api-turismo/public/recursos/halloween/fondo.jpg");
  background-repeat: no-repeat;
  background-size: cover;
}
.Main-Halloween .row {
  margin-right: 0;
}
.Main-Halloween .Titulo-Halloween {
  position: relative;
  top: -25%;
  text-align: left;
  left: 5%;
  width: fit-content;
  font-size: 7rem;
  line-height: 80px;
  font-family: "Jolly Lodger";
  color: rgb(28, 228, 45);
}
.Main-Halloween .Subtitulo-Halloween {
  position: relative;
  top: -15%;
  width: 100%;
  text-align: left;
  left: 10%;
  color: white;
}
.Main-Halloween .Container-Logo1-Halloween {
  position: relative;
  margin-top: 30px;
  width: 100%;
  text-align: left;
  left: 10%;
}
.Main-Halloween .Container-Logo1-Halloween img {
  margin-top: 10%;
  margin-bottom: 10%;
  width: 300px;
  height: 100px;
}
.Main-Halloween .Container-Logo2-Halloween {
  position: relative;
  margin-top: 80px;
}
.Main-Halloween .Container-Logo2-Halloween img {
  margin-top: 10%;
  margin-left: 150px;
  width: 200px;
  height: 50px;
}
.Main-Halloween .Telarania-Halloween {
  position: relative;
  left: -10%;
}
.Main-Halloween .Luna-Halloween {
  position: relative;
  padding-top: 100px;
  text-align: left;
  margin-left: 10%;
}
.Main-Halloween .Luna-Halloween img {
  width: 380px;
  height: 160px;
}
.Main-Halloween .Mitos-Halloween {
  position: relative;
  padding-top: 50px;
  margin-left: 28%;
}
.Main-Halloween .Mitos-Halloween img {
  width: 150px;
  height: 30px;
}
.Main-Halloween .Mitos-Halloween .Mitos-Halloween-Texto {
  color: white;
  margin-top: 10px;
  font-size: 1.5rem;
}
@media screen and (max-width: 900px) {
  .Main-Halloween .Titulo-Halloween {
    font-size: 6.5rem;
  }
  .Main-Halloween .Luna-Halloween img {
    width: 300px;
    height: 130px;
  }
  .Main-Halloween .Mitos-Halloween img {
    width: 130px;
    height: 25px;
  }
  .Main-Halloween .Mitos-Halloween .Mitos-Halloween-Texto {
    font-size: 1.3rem;
  }
}
@media screen and (max-width: 768px) {
  .Main-Halloween .Subtitulo-Halloween {
    text-align: left;
    left: 0;
    padding-left: 10%;
  }
  .Main-Halloween .Luna-Halloween {
    padding-top: 0px;
    text-align: center;
    margin-left: 20px;
  }
  .Main-Halloween .Luna-Halloween img {
    width: 300px;
    height: 130px;
  }
  .Main-Halloween .Mitos-Halloween {
    text-align: center;
    margin-left: 0;
    margin-bottom: 10%;
  }
  .Main-Halloween .Mitos-Halloween img {
    width: 130px;
    height: 25px;
  }
  .Main-Halloween .Mitos-Halloween .Mitos-Halloween-Texto {
    font-size: 1.3rem;
  }
  .Main-Halloween .Container-Logo1-Halloween {
    width: 100%;
    left: 0;
    text-align: center;
  }
  .Main-Halloween .Container-Logo2-Halloween {
    width: 100%;
    text-align: center;
    margin: 0 0 50px 0;
  }
  .Main-Halloween .Container-Logo2-Halloween img {
    margin: 0 0 0 0;
  }
}

/*
    Class Viewer
*/
.Viewer {
  display: grid;
  grid-template-areas: "btn-left items btn-right" "pages pages pages";
  grid-template-columns: 25px 1fr 25px;
  grid-gap: 10px;
}
.Viewer .btn-left {
  grid-area: btn-left;
}
.Viewer .items {
  grid-area: items;
  display: flex;
  flex-direction: row;
  flex-wrap: wrap;
  justify-content: center;
  align-items: center;
}
.Viewer .btn-right {
  grid-area: btn-right;
}
.Viewer .pagesBullets {
  grid-area: pages;
}
.Viewer .pagesBullets ul {
  list-style-type: none;
  display: flex;
  flex-direction: row;
  flex-wrap: wrap;
  justify-content: center;
  align-items: center;
  margin: 0;
  margin-block-start: 0;
  margin-block-end: 0;
  padding-inline-start: 0;
}
.Viewer .pagesBullets ul li {
  display: flex;
  justify-content: center;
  align-items: center;
  margin: 0.2em;
  padding: 2px;
  min-width: 30px;
  -webkit-border-radius: 50%;
  border-radius: 50%;
  background-color: rgba(237, 15, 104, 0.7);
  color: white;
  cursor: pointer;
  transition: all 1.5s;
}
.Viewer .pagesBullets ul li.selected {
  background-color: rgb(141, 10, 62);
  color: white;
}
.Viewer .pages {
  grid-area: pages;
}
.Viewer .pages ul {
  list-style-type: none;
  display: flex;
  flex-direction: row;
  flex-wrap: wrap;
  justify-content: center;
  align-items: center;
  margin: 0;
  margin-block-start: 0;
  margin-block-end: 0;
  padding-inline-start: 0;
}
.Viewer .pages ul li {
  display: flex;
  justify-content: center;
  align-items: center;
  margin: 0.2em;
  padding: 2px;
  min-width: 30px;
  -webkit-border-radius: 2px;
  border-radius: 2px;
  background-color: rgb(237, 15, 104);
  color: white;
  cursor: pointer;
  transition: all 1.5s;
}
.Viewer .pages ul li.selected {
  background-color: rgb(114, 39, 137);
  color: white;
}
.Viewer .btn-left,
.Viewer .btn-right,
.Viewer .pages {
  display: flex;
  flex-direction: row;
  flex-wrap: wrap;
  justify-content: center;
  align-items: center;
}
.Viewer .btn-left,
.Viewer .btn-right {
  cursor: pointer;
}

.ViewerListados .btn-left {
  grid-area: btn-left;
}
.ViewerListados .btn-right {
  grid-area: btn-right;
}
.ViewerListados .pages {
  grid-area: pages;
}
.ViewerListados .pages ul {
  list-style-type: none;
  display: flex;
  flex-direction: row;
  flex-wrap: wrap;
  justify-content: center;
  align-items: center;
  margin: 0;
  margin-block-start: 0;
  margin-block-end: 0;
  padding-inline-start: 0;
}
.ViewerListados .pages ul li {
  display: flex;
  justify-content: center;
  align-items: center;
  margin: 0.2em;
  padding: 2px;
  min-width: 30px;
  -webkit-border-radius: 2px;
  border-radius: 2px;
  background-color: rgb(237, 15, 104);
  color: white;
  cursor: pointer;
  transition: all 1.5s;
}
.ViewerListados .pages ul li.selected {
  background-color: rgb(114, 39, 137);
  color: white;
}
.ViewerListados .btn-left,
.ViewerListados .btn-right,
.ViewerListados .pages {
  display: flex;
  flex-direction: row;
  flex-wrap: wrap;
  justify-content: center;
  align-items: center;
}
.ViewerListados .btn-left,
.ViewerListados .btn-right {
  cursor: pointer;
}

.City {
  display: flex;
  height: 300px;
  width: 300px;
  margin: 5px;
  justify-content: center;
  align-items: center;
  background-color: grey;
}
.City p {
  text-align: center;
  color: #fff;
}

.logoParques {
  width: 200px;
}

.imgActividades {
  width: 50%;
}

.GridImageMain {
  padding-top: 100px;
  background-color: #eeeeee;
  text-align: center;
}

.GridImageTitle {
  position: relative;
  margin-left: 20%;
  align-items: center;
  font-size: 1em;
  font-weight: 700;
  width: 60%;
  letter-spacing: 5px;
  text-align: center;
  margin-top: 10px;
  padding: 10px 0 0 10px;
  text-transform: uppercase;
  background-color: #eeeeee;
}
.GridImageTitle h2 {
  color: #eeeeee;
}

.GridImageBody {
  padding: 40px 0 40px 40px;
  overflow: hidden;
  display: flex;
  justify-content: center;
  align-items: center;
}

.gallery {
  width: 100%;
  height: 100%;
  display: grid;
  grid-template-columns: repeat(auto-fill, 100px);
  grid-auto-rows: 100px;
  grid-auto-flow: dense;
  grid-gap: 10px;
}

.item {
  overflow: hidden;
  display: grid;
  grid-template-columns: 1;
  grid-template-rows: 1;
}
.item.row2 {
  grid-row: span 2;
}
.item.row3 {
  grid-row: span 3;
}
.item.row4 {
  grid-row: span 4;
}
.item.col2 {
  grid-column: span 2;
}
.item.col3 {
  grid-column: span 3;
}
.item.col4 {
  grid-column: span 4;
}
.item img {
  grid-column: 1/-1;
  width: 100%;
  grid-row: 1/-1;
  height: 100%;
  object-fit: cover;
}
.item:hover .item__overlay {
  transform: translateY(0%);
}

.item__overlay {
  grid-column: 1/-1;
  grid-row: 1/-1;
  background: rgba(0, 0, 0, 0.3);
  position: relative;
  display: grid;
  align-items: center;
  justify-items: center;
  transform: translateY(100%);
  transition: transform 0.3s cubic-bezier(0, 0, 0.2, 1);
}
.item__overlay button {
  background: none;
  border: 2px solid #eeeeee;
  color: #eeeeee;
  text-transform: uppercase;
  cursor: pointer;
  padding: 2.5px 10px;
  outline: none;
}

.pantallaGrandeGrid {
  display: inline;
}

.pantallaChicaGrid {
  display: none;
}

@media only screen and (max-width: 510px) {
  .logoParques {
    width: 350px;
  }

  .pantallaGrandeGrid {
    display: inline;
    padding-left: 10px;
  }

  .pantallaGrandeGrid h5 {
    padding-top: 70px;
  }

  .imgActividades {
    width: 70%;
  }

  .pantallaChicaGrid {
    display: none;
  }
}
.boxWeather {
  width: 20vw;
  height: 60vh;
  border-radius: 5px;
  box-shadow: 0 2px 30px rgba(0, 0, 0, 0.2);
  background: #a5bbdd;
  position: relative;
  overflow: hidden;
  transform: translate3d(0, 0, 0);
  min-width: 200px;
  min-height: 350px;
}

.wave {
  opacity: 0.3;
  position: absolute;
  top: 120%;
  left: 50%;
  background: white;
  width: 500px;
  height: 500px;
  margin-left: -250px;
  margin-top: -250px;
  transform-origin: 50% 48%;
  border-radius: 43%;
  animation: drift 3000ms infinite linear;
  z-index: 1;
}

.wave.-three {
  animation: drift 5000ms infinite linear;
  z-index: 2 !important;
  opacity: 0.2;
}

.wave.-two {
  animation: drift 7000ms infinite linear;
  opacity: 0.1;
  z-index: 3 !important;
}

.boxWeather:after {
  content: "";
  display: block;
  left: 0;
  top: 0;
  width: 100%;
  height: 100%;
  z-index: 11;
  transform: translate3d(0, 0, 0);
}

@keyframes drift {
  from {
    transform: rotate(0deg);
  }
  from {
    transform: rotate(360deg);
  }
}
.infoWeather {
  position: absolute;
  bottom: 0;
  width: 100%;
  height: 45%;
  z-index: 4;
}

.locationWeather {
  text-align: center;
  font-weight: 800;
}

.dateWeather {
  text-align: center;
  margin-top: 5%;
  color: #9a9a9a;
  font-size: 70%;
}

.tempWeather {
  margin-top: 10%;
  text-align: center;
}

.weathercon {
  height: 55%;
  display: flex;
  justify-content: center;
  align-items: center;
  font-size: 3em;
}

@media (max-width: 600px) {
  .boxWeather {
    width: 90vw;
    height: 80vh;
  }

  .wave {
    top: 85%;
  }

  .weathercon {
    font-size: 5em;
  }

  .infoWeather {
    font-size: 1.5rem;
  }
}
@media (max-height: 500px) {
  .boxWeather {
    height: 80vh;
  }

  .wave {
    top: 115%;
  }
}
@keyframes pulse {
  0% {
    box-shadow: 0 0 0 0 rgba(230, 67, 82, 0.9);
  }
  75%, 100% {
    box-shadow: 0 0 0 2rem rgba(230, 67, 82, 0);
  }
}
.chat-widget {
  position: absolute;
  right: 12rem;
  bottom: 10px;
  z-index: 100;
}
.chat-widget--button-second {
  display: flex;
  align-items: center;
  justify-content: center;
  width: 3.5rem;
  height: 3.5rem;
  position: relative;
  right: 0;
  margin-bottom: 5.5px;
  cursor: pointer;
  bottom: 4.7rem;
  z-index: 1;
  border-radius: 50%;
  background-color: #e64352;
  box-shadow: 0 0 0 -2px black, 0 2px 4px 0 rgba(0, 0, 0, 0.3);
  transition: opacity 400ms ease, transform 400ms ease;
  transform: translateY(0rem) scale(1, 1) skew(0deg, 0deg);
  /*&::before,
    &::after {
      content: '';
      display: block;
      position: absolute;
      top: 0;
      right: 0;
      bottom: 0;
      left: 0;
      z-index: -1;
      border-radius: 50%;
      animation: pulse 2s ease-in-out 5;  
    }
    &::after {
      animation-delay: 0.5s;
    }*/
}
.chat-widget--button-second.-hide {
  opacity: 0;
  transform: translateY(3rem) scale(0, 0) skew(0deg, 50deg);
}
.chat-widget--button-second:hover {
  box-shadow: 0 16px 10px -8px rgba(0, 0, 0, 0.3), 0 4px 10px 0 rgba(0, 0, 0, 0.2);
}
.chat-widget--button {
  display: flex;
  align-items: center;
  justify-content: center;
  width: 4rem;
  height: 4rem;
  cursor: pointer;
  position: absolute;
  right: 0;
  bottom: 0;
  z-index: 1;
  border-radius: 50%;
  background-color: #e64352;
  box-shadow: 0 0 0 -2px black, 0 2px 4px 0 rgba(0, 0, 0, 0.3);
  transition: box-shadow 250ms ease;
}
.chat-widget--button:hover {
  box-shadow: 0 16px 10px -8px rgba(0, 0, 0, 0.3), 0 4px 10px 0 rgba(0, 0, 0, 0.2);
}
.chat-widget--button::before, .chat-widget--button::after {
  content: "";
  display: block;
  position: absolute;
  top: 0;
  right: 0;
  bottom: 0;
  left: 0;
  z-index: -1;
  border-radius: 50%;
  animation: pulse 2s ease-in-out infinite;
}
.chat-widget--button::after {
  animation-delay: 0.5s;
}
.chat-widget--icon {
  width: 2.5rem;
  height: auto;
}
.chat-widget--icon path {
  fill: white;
}

@media only screen and (max-width: 510px) {
  .chat-widget {
    display: none;
  }
}
.asistentePNG {
  margin-top: 50px;
}

:root {
  --card-width: 250px;
  --card-height: 400px;
  --card-transition-duration: 800ms;
  --card-transition-easing: ease;
}

.cuerpoimperdible {
  width: 100%;
  height: 100vh;
  justify-content: start;
  align-items: center;
}

.tituloImperdibles {
  margin: 20px 0 20px 0;
  display: flex;
  flex-direction: column;
  justify-content: center;
  align-items: center;
}
.tituloImperdibles .imp-t-sub2 {
  font-size: 2em;
  padding: 2px 15px;
  background-color: rgb(114, 39, 137);
  color: #fff;
  text-transform: uppercase;
}

.cardList__btn {
  border: none;
  background: none;
  cursor: pointer;
}
.cardList__btn:focus {
  outline: none;
  border: none;
}

.app {
  position: relative;
  width: 100%;
  height: 100%;
  display: flex;
  justify-content: center;
  align-items: center;
}
.app__bg {
  position: absolute;
  width: 100%;
  height: 100%;
  z-index: -5;
  filter: blur(8px);
  pointer-events: none;
  user-select: none;
  overflow: hidden;
  /*position: absolute;
  width: 70%;
  height: 70%;
  top: 5%;
  z-index: -5;
  filter: blur(3px);
  pointer-events: none;
  user-select: none;
  overflow: hidden;
  */
}
.app__bg::before {
  content: "";
  position: absolute;
  left: 0;
  top: 0;
  width: 100%;
  height: 100%;
  background: #000;
  z-index: 1;
  opacity: 0.6;
}
.app__bg__image {
  position: absolute;
  left: 50%;
  top: 50%;
  transform: translate(-50%, -50%) translateX(var(--image-translate-offset, 0));
  width: 180%;
  height: 180%;
  transition: transform 1000ms ease, opacity 1000ms ease;
  overflow: hidden;
}
.app__bg__image img {
  width: 100%;
  height: 100%;
  object-fit: cover;
}
.app__bg__image.current--image {
  opacity: 1;
  --image-translate-offset: 0;
}
.app__bg__image.previous--image, .app__bg__image.next--image {
  opacity: 0;
}
.app__bg__image.previous--image {
  --image-translate-offset: -25%;
}
.app__bg__image.next--image {
  --image-translate-offset: 25%;
}

.cardList {
  position: absolute;
  width: calc(3 * var(--card-width));
  height: 100%;
}
.cardList__btn {
  --btn-size: 45px;
  width: var(--btn-size);
  height: var(--btn-size);
  position: absolute;
  top: 50%;
  transform: translateY(-50%);
}
.cardList__btn.btn--left {
  left: -15%;
}
.cardList__btn.btn--right {
  right: -15%;
}
.cardList__btn .icon {
  width: 100%;
  height: 100%;
}
.cardList__btn .icon i {
  font-size: calc(var(--card-width) * var(--text-size-offset, 0.1));
  width: 100%;
  height: 100%;
}
.cardList .cards__wrapper {
  position: relative;
  width: 100%;
  height: 100%;
  perspective: 1000px;
}

.cardImp {
  --card-translateY-offset: 100vh;
  position: absolute;
  left: 50%;
  top: 50%;
  transform: translate(-50%, -50%) translateX(var(--card-translateX-offset)) translateY(var(--card-translateY-offset)) rotateY(var(--card-rotation-offset)) scale(var(--card-scale-offset));
  display: inline-block;
  width: var(--card-width);
  height: var(--card-height);
  transition: transform var(--card-transition-duration) var(--card-transition-easing);
  user-select: none;
}
.cardImp::before {
  content: "";
  position: absolute;
  left: 0;
  top: 0;
  width: 100%;
  height: 100%;
  background: #000;
  z-index: 1;
  transition: opacity var(--card-transition-duration) var(--card-transition-easing);
  opacity: calc(1 - var(--opacity));
}
.cardImp__image {
  position: relative;
  width: 100%;
  height: 100%;
}
.cardImp__image img {
  position: absolute;
  left: 0;
  top: 0;
  width: 100%;
  height: 100%;
  object-fit: cover;
}
.cardImp.current--card {
  --current-card-rotation-offset: 0;
  --card-translateX-offset: 0;
  --card-rotation-offset: var(--current-card-rotation-offset);
  --card-scale-offset: 1.2;
  --opacity: 0.8;
}
.cardImp.previous--card {
  --card-translateX-offset: calc(-1 * var(--card-width) * 1.1);
  --card-rotation-offset: 25deg;
}
.cardImp.next--card {
  --card-translateX-offset: calc(var(--card-width) * 1.1);
  --card-rotation-offset: -25deg;
}
.cardImp.previous--card, .cardImp.next--card {
  --card-scale-offset: 0.9;
  --opacity: 0.4;
}

.infoList {
  position: absolute;
  width: calc(3 * var(--card-width));
  height: var(--card-height);
  pointer-events: none;
}
.infoList .info__wrapper {
  position: relative;
  width: 100%;
  height: 100%;
  display: flex;
  z-index: 95;
  justify-content: flex-start;
  align-items: flex-end;
  perspective: 1000px;
  transform-style: preserve-3d;
}

.info {
  margin-bottom: calc(var(--card-height) / 8);
  margin-left: calc(var(--card-width) / 1.5);
  transform: translateZ(2rem);
  transition: transform var(--card-transition-duration) var(--card-transition-easing);
}
.info .text {
  position: relative;
  font-family: "Montserrat";
  font-size: calc(var(--card-width) * var(--text-size-offset, 0.2));
  color: #fff;
  width: fit-content;
}
.info .name,
.info .location {
  text-transform: uppercase;
}
.info .location {
  font-weight: 800;
}
.info .location {
  --mg-left: 40px;
  --text-size-offset: 0.12;
  font-weight: 600;
  margin-left: var(--mg-left);
  margin-bottom: calc(var(--mg-left) / 2);
  padding-bottom: 0.8rem;
}
.info .location::before, .info .location::after {
  content: "";
  position: absolute;
  background: #fff;
  left: 0%;
  transform: translate(calc(-1 * var(--mg-left)), -50%);
}
.info .location::before {
  top: 50%;
  width: 20px;
  height: 5px;
}
.info .location::after {
  bottom: 0;
  width: 60px;
  height: 2px;
}
.info .description {
  --text-size-offset: 0.065;
  font-weight: 500;
}
.info.current--info {
  opacity: 1;
  display: block;
}
.info.previous--info, .info.next--info {
  opacity: 0;
  display: none;
}

@media only screen and (max-width: 978px) {
  :root {
    --card-width: 200px;
    --card-height: 350px;
  }
}
@media only screen and (max-width: 780px) {
  .cardList__btn {
    z-index: 95;
  }
  .cardList__btn.btn--left {
    left: -7%;
  }
  .cardList__btn.btn--right {
    right: -7%;
  }
}
@media only screen and (max-width: 690px) {
  :root {
    --card-width: 240px;
    --card-height: 400px;
  }

  .cardList {
    width: 100%;
  }
  .cardList__btn {
    z-index: 95;
  }
  .cardList__btn.btn--left {
    left: 2%;
  }
  .cardList__btn.btn--right {
    right: 2%;
  }

  .cardImp.previous--card {
    display: none;
  }
  .cardImp.next--card {
    display: none;
  }

  .infoList {
    width: 85%;
  }

  .info {
    margin-left: calc(var(--card-width) / 2.5);
  }
  .info .text {
    font-size: calc(var(--card-width) * var(--text-size-offset, 0.2));
  }
}
@media only screen and (max-width: 547px) {
  .info {
    margin-left: calc(var(--card-width) / 4);
  }
}
@media only screen and (max-width: 438px) {
  :root {
    --card-width: 220px;
  }

  .cardList__btn.btn--left {
    left: 0.5%;
  }
  .cardList__btn.btn--right {
    right: 0.5%;
  }

  .info {
    margin-left: calc(var(--card-width) / 10);
  }
  .info .text {
    font-size: calc(var(--card-width) * var(--text-size-offset, 0.18));
  }
}
.main-chart-wrapper .estadisticas-leyenda span {
  margin: 10px 0 10px 20px;
  font-size: 2em;
  padding: 2px 15px;
  background-color: rgb(114, 39, 137);
  color: #fff;
  text-transform: uppercase;
}

.est-main {
  padding-top: 100px;
  margin: 0 20px 0 20px;
}
.est-main .est-titulo {
  background-color: rgb(114, 39, 137);
  display: block;
  width: 100%;
  top: 10px;
  height: 50px;
  position: relative;
  margin-bottom: 60px;
}
.est-main .est-titulo h3 {
  position: absolute;
  top: 20px;
  left: 20px;
  background-color: #fff;
  text-transform: uppercase;
  padding: 8px;
  font-weight: bold;
  font-size: 3rem;
}

.sub-chart-wrapper {
  padding: 2%;
  display: inline-block;
  width: 50%;
  height: 300px;
  margin-bottom: 100px;
  text-align: center;
}
.sub-chart-wrapper .sub-chart-wrapper-titulo {
  font-size: 1.3em;
  padding: 2px 15px;
  background-color: rgb(237, 15, 104);
  color: #fff;
  text-transform: uppercase;
}
.sub-chart-wrapper .sub-chart-wrapper-subtitulo {
  font-size: 1.3em;
  padding: 2px 15px;
  margin-bottom: 15px;
  background-color: rgb(237, 15, 104);
  color: #fff;
  text-transform: uppercase;
}

/* Simple responsivenss example */
@media (max-width: 700px) {
  .sub-chart-wrapper {
    width: 96%;
  }
}
/*
    Componente Menu.js
*/
.input {
  z-index: 5;
  width: 0px;
  outline: none;
  border: none;
  background: rgb(114, 39, 137);
  color: white;
  text-shadow: 0 0 10px rgb(114, 39, 137);
  padding: 0 80px 0 20px;
  border-radius: 40px;
  box-shadow: 0 0 25px 0 rgb(114, 39, 137), 0 20px 25px 0 rgba(0, 0, 0, 0.2);
  transition: all 1s;
  font-weight: 500;
  letter-spacing: 0.1em;
}
.input:hover {
  cursor: pointer;
}
.input:focus {
  opacity: 1;
  cursor: text;
}
.input:focus .listaBusqueda {
  background-color: rgb(114, 39, 137);
  width: 200px;
  max-height: auto;
  overflow: auto;
  position: absolute;
  margin-left: -19px;
  border-radius: 10%;
  transition: all 1s;
  z-index: 4;
  color: white;
  font-weight: 500;
  box-shadow: 0 0 25px 0 rgba(0, 0, 0, 0.4);
}
.input:focus .listaBusqueda a {
  list-style: none;
  padding-left: 10px;
}
.input:focus ~ .search {
  background: #151515;
  z-index: 6;
}
.input:focus ~ .search::before {
  top: 0;
  left: 0;
  width: 25px;
}
.input:focus ~ .search::after {
  top: 0;
  left: 0;
  width: 25px;
  height: 2px;
  border: none;
  background: white;
  border-radius: 0%;
  transform: rotate(-45deg);
}
.input::placeholder {
  color: white;
  opacity: 0.5;
  font-weight: bolder;
}

.linkBusqueda {
  overflow-x: hidden;
  margin: 0;
  list-style: none;
  color: white;
}
.linkBusqueda a {
  color: white;
}
.linkBusqueda a li {
  color: white;
}
.linkBusqueda a li:hover {
  font-size: 0%;
}

.listaBusqueda {
  background-color: rgb(114, 39, 137);
  width: 200px;
  max-height: auto;
  overflow: auto;
  position: absolute;
  margin-left: -19px;
  border-radius: 2%;
  transition: all 1s;
  z-index: 4;
  color: white;
  font-weight: 500;
  box-shadow: 0 0 25px 0 rgba(0, 0, 0, 0.4);
}
.listaBusqueda li {
  width: auto;
  padding-right: 5px;
}
.listaBusqueda a {
  list-style: none;
  display: inline-block;
}

.buscador {
  background-color: transparent;
  width: 160px;
  height: 30px;
  margin-top: 5px;
}

.redes {
  margin-top: -10px;
  clear: inherit;
  display: inline;
  margin-left: 8%;
  margin-right: 5%;
  color: white;
  font-size: 20px;
}
.redes:hover {
  font-size: 1.4rem;
  /*
  color: $color-uno;
  font-weight: 600;
  text-shadow: 1px 1px 1px #FFFFFF;
  */
}

.Menu {
  background: rgb(114, 39, 137);
  background: -moz-linear-gradient(left, rgba(114, 39, 137, 0.6) 0%, rgba(237, 15, 104, 0.7) 100%);
  background: -webkit-linear-gradient(left, rgba(114, 39, 137, 0.6) 0%, rgba(237, 15, 104, 0.7) 100%);
  background: linear-gradient(to right, rgba(114, 39, 137, 0.6) 0%, rgba(237, 15, 104, 0.7) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
  position: absolute;
  z-index: 99;
  display: flex;
  margin-top: 45px;
  justify-content: space-between;
  width: 100%;
  align-items: center;
  height: 50px;
  padding: 0 5rem;
  color: #fff;
}
.Menu .linkHome {
  display: inline;
}
.Menu .logoGob2 {
  display: none;
}
.Menu ul {
  color: #fff;
}
.Menu li {
  margin-top: 4px;
  color: #fff;
  cursor: pointer;
}
.Menu span {
  color: #fff;
  font-weight: 500;
  white-space: nowrap;
}
.Menu .menu-visita-containerMenu {
  background: rgb(114, 39, 137);
  background: -moz-linear-gradient(left, rgba(114, 39, 137, 0.9) 0%, rgba(237, 15, 104, 0.8) 100%);
  background: -webkit-linear-gradient(left, rgba(114, 39, 137, 0.9) 0%, rgba(237, 15, 104, 0.8) 100%);
  background: linear-gradient(to right, rgba(114, 39, 137, 0.9) 0%, rgba(237, 15, 104, 0.8) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
  position: absolute;
  top: 50px;
  left: 0px;
  height: auto;
  padding-bottom: 20px;
  width: 100%;
  display: flex;
  justify-content: center;
  z-index: 96;
  padding-top: 10px;
}
.Menu .menu-visita-containerMenu .menu-visita {
  width: 100%;
  color: #fff;
  padding-top: 30px;
}

.sticky {
  background: rgb(114, 39, 137);
  background: -moz-linear-gradient(left, rgb(114, 39, 137) 0%, rgb(237, 15, 104) 100%);
  background: -webkit-linear-gradient(left, rgb(114, 39, 137) 0%, rgb(237, 15, 104) 100%);
  background: linear-gradient(to right, rgb(114, 39, 137) 0%, rgb(237, 15, 104) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
  width: 100%;
  top: 0;
  left: 0;
  position: fixed;
  -webkit-transform: translate3d(0, 0, 0);
  -o-transform: translate3d(0, 0, 0);
  transform: translate3d(0, 0, 0);
  z-index: 99;
  justify-content: space-between;
  display: flex;
  align-items: center;
  height: 50px;
  padding: 0 5rem;
  color: #fff;
}
.sticky .linkHome {
  display: inline;
}
.sticky .logoGob2 {
  display: none;
}
.sticky ul {
  color: #fff;
}
.sticky li {
  margin-top: 4px;
  color: #fff;
  cursor: pointer;
}
.sticky span {
  color: #fff;
  font-weight: 500;
  white-space: nowrap;
}
.sticky .menu-visita-containersticky {
  background: rgb(114, 39, 137);
  background: -moz-linear-gradient(left, rgba(114, 39, 137, 0.9) 0%, rgba(237, 15, 104, 0.8) 100%);
  background: -webkit-linear-gradient(left, rgba(114, 39, 137, 0.9) 0%, rgba(237, 15, 104, 0.8) 100%);
  background: linear-gradient(to right, rgba(114, 39, 137, 0.9) 0%, rgba(237, 15, 104, 0.8) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
  position: fixed;
  -webkit-transform: translate3d(0, 0, 0);
  -o-transform: translate3d(0, 0, 0);
  transform: translate3d(0, 0, 0);
  top: 45px;
  left: 0px;
  height: auto;
  padding-bottom: 20px;
  width: 100%;
  display: flex;
  justify-content: center;
  z-index: 96;
  padding-top: 10px;
}
.sticky .menu-visita-containersticky .menu-visita {
  width: 100%;
  color: #fff;
  padding-top: 30px;
}

.liLista:hover {
  text-decoration-line: underline;
  font-size: 18px;
}

@media only screen and (max-width: 1185px) {
  .Menu {
    background: rgb(114, 39, 137);
    background: -moz-linear-gradient(left, rgba(114, 39, 137, 0.6) 0%, rgba(237, 15, 104, 0.7) 100%);
    background: -webkit-linear-gradient(left, rgba(114, 39, 137, 0.6) 0%, rgba(237, 15, 104, 0.7) 100%);
    background: linear-gradient(to right, rgba(114, 39, 137, 0.6) 0%, rgba(237, 15, 104, 0.7) 100%);
    filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
    position: absolute;
    z-index: 30;
    color: #fff;
    width: 100%;
    height: auto;
    margin-top: 45px;
  }
  .Menu .linkHome {
    display: inline;
  }
  .Menu .logoGob {
    display: none;
  }
  .Menu .menu-visita-containerMenu {
    top: 45px;
  }

  .sticky {
    background: rgb(114, 39, 137);
    background: -moz-linear-gradient(left, rgb(114, 39, 137) 0%, rgb(237, 15, 104) 100%);
    background: -webkit-linear-gradient(left, rgb(114, 39, 137) 0%, rgb(237, 15, 104) 100%);
    background: linear-gradient(to right, rgb(114, 39, 137) 0%, rgb(237, 15, 104) 100%);
    filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
    position: fixed;
    z-index: 99;
    color: #fff;
    width: 100%;
    height: auto;
    margin-top: 0px;
  }
  .sticky .linkHome {
    display: inline;
  }
  .sticky .logoGob {
    display: none;
  }
}
@media only screen and (max-width: 992px) {
  .Menu {
    background: rgb(114, 39, 137);
    background: -moz-linear-gradient(left, rgba(114, 39, 137, 0.6) 0%, rgba(237, 15, 104, 0.7) 100%);
    background: -webkit-linear-gradient(left, rgba(114, 39, 137, 0.6) 0%, rgba(237, 15, 104, 0.7) 100%);
    background: linear-gradient(to right, rgba(114, 39, 137, 0.6) 0%, rgba(237, 15, 104, 0.7) 100%);
    filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
    position: absolute;
    z-index: 30;
    color: #fff;
    width: 100%;
    height: auto;
    margin-top: 45px;
  }
  .Menu .linkHome {
    display: none;
  }
  .Menu .logoGob2 {
    display: inline;
    margin-left: -60px;
  }
  .Menu .logoGob2 img {
    height: 35px;
    width: 200px;
    opacity: 1 !important;
  }
  .Menu ul {
    color: #fff;
  }
  .Menu li {
    margin-top: 4px;
    color: #fff;
    cursor: pointer;
  }
  .Menu span {
    text-decoration: none;
    color: #fff;
    font-weight: 500;
    text-transform: uppercase;
    cursor: pointer;
    white-space: nowrap;
  }
  .Menu .menu-visita-containerMenu {
    background: rgb(114, 39, 137);
    background: -moz-linear-gradient(left, rgba(114, 39, 137, 0.9) 0%, rgba(237, 15, 104, 0.8) 100%);
    background: -webkit-linear-gradient(left, rgba(114, 39, 137, 0.9) 0%, rgba(237, 15, 104, 0.8) 100%);
    background: linear-gradient(to right, rgba(114, 39, 137, 0.9) 0%, rgba(237, 15, 104, 0.8) 100%);
    filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
    position: absolute;
    top: 50px;
    margin-top: 189px;
    left: 0px;
    height: 270px;
    overflow-y: scroll;
    overflow-x: hidden;
    padding-bottom: 20px;
    width: 100%;
    display: flex;
    justify-content: center;
    z-index: 96;
    padding-top: 10px;
  }
  .Menu .menu-visita-containerMenu .menu-visita {
    width: 100%;
    color: #fff;
    padding-top: 10px;
  }

  .sticky {
    background: rgb(114, 39, 137);
    background: -moz-linear-gradient(left, rgb(114, 39, 137) 0%, rgb(237, 15, 104) 100%);
    background: -webkit-linear-gradient(left, rgb(114, 39, 137) 0%, rgb(237, 15, 104) 100%);
    background: linear-gradient(to right, rgb(114, 39, 137) 0%, rgb(237, 15, 104) 100%);
    filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
    position: fixed;
    z-index: 99;
    color: #fff;
    width: 100%;
    height: auto;
    margin-top: 0px;
  }
  .sticky .linkHome {
    display: none;
  }
  .sticky .logoGob2 {
    display: inline;
    margin-left: -60px;
  }
  .sticky .logoGob2 img {
    height: 35px;
    width: 200px;
    opacity: 1 !important;
  }
  .sticky ul {
    color: #fff;
  }
  .sticky li {
    margin-top: 4px;
    color: #fff;
    cursor: pointer;
  }
  .sticky span {
    text-decoration: none;
    color: #fff;
    font-weight: 500;
    text-transform: uppercase;
    cursor: pointer;
    white-space: nowrap;
  }
  .sticky .menu-visita-containersticky {
    background: rgb(114, 39, 137);
    background: -moz-linear-gradient(left, rgba(114, 39, 137, 0.9) 0%, rgba(237, 15, 104, 0.8) 100%);
    background: -webkit-linear-gradient(left, rgba(114, 39, 137, 0.9) 0%, rgba(237, 15, 104, 0.8) 100%);
    background: linear-gradient(to right, rgba(114, 39, 137, 0.9) 0%, rgba(237, 15, 104, 0.8) 100%);
    filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
    position: fixed;
    overflow-y: scroll;
    overflow-x: hidden;
    margin-top: 190px;
    left: 0px;
    height: 270px;
    padding-bottom: 20px;
    width: 100%;
    display: flex;
    justify-content: center;
    z-index: 96;
    padding-top: 10px;
  }
  .sticky .menu-visita-containersticky .menu-visita {
    width: 100%;
    color: #fff;
    padding-top: 10px;
  }
}
.link-menu {
  text-decoration: none;
  color: #fff;
  font-weight: 500;
  text-transform: uppercase;
  cursor: pointer;
}
.link-menu:hover {
  font-size: 1.1rem;
  /*
  color: $color-uno;
  font-weight: 600;
  text-shadow: 1px 1px 1px #FFFFFF;
  */
}

.containeres {
  display: inline;
}
.containeres .search {
  position: relative;
  margin-top: -31px;
  margin-left: 135px;
  width: 33px;
  height: 33px;
  background: rgb(237, 15, 104);
  border-radius: 50%;
  transition: all 1s;
  z-index: 4;
  box-shadow: 0 0 25px 0 rgba(0, 0, 0, 0.4);
}
.containeres .search:hover {
  cursor: pointer;
}
.containeres .search::before {
  content: "";
  position: absolute;
  margin: auto;
  top: 10px;
  right: 0;
  bottom: 0;
  left: 10px;
  width: 10px;
  height: 2px;
  background: white;
  transform: rotate(45deg);
  transition: all 0.5s;
}
.containeres .search::after {
  content: "";
  position: absolute;
  margin: auto;
  top: -5px;
  right: 0;
  bottom: 0;
  left: -5px;
  width: 15px;
  height: 15px;
  border-radius: 50%;
  border: 2px solid white;
  transition: all 0.5s;
}

.menu-ul {
  z-index: 30;
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
  height: 50px;
  background: rgb(114, 39, 137);
  background: -moz-linear-gradient(left, rgba(114, 39, 137, 0.6) 0%, rgba(237, 15, 104, 0.7) 100%);
  background: -webkit-linear-gradient(left, rgba(114, 39, 137, 0.6) 0%, rgba(237, 15, 104, 0.7) 100%);
  background: linear-gradient(to right, rgba(114, 39, 137, 0.6) 0%, rgba(237, 15, 104, 0.7) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
  display: flex;
  justify-content: space-between;
  align-items: center;
  padding: 0 8rem;
  margin-top: 45px;
}
.menu-ul ul {
  list-style-type: none;
  display: flex;
  flex-direction: row;
  justify-content: flex-start;
  margin-block-start: 0px;
  margin-block-end: 0px;
  margin-inline-start: 0px;
  margin-inline-end: 0px;
  padding-inline-start: 0px;
}
.menu-ul ul li .link-menu {
  display: flex;
  margin-bottom: -3%;
  margin-right: 20px;
  text-decoration: none;
  color: #fff;
  font-weight: 500;
  text-transform: uppercase;
  cursor: pointer;
}
.menu-ul ul li .link-menu:hover {
  font-size: 1.1rem;
  /*
    color: $color-uno;
    font-weight: 600;
    text-shadow: 1px 1px 1px #FFFFFF;
    */
}

.logo {
  top: 5px;
  right: 370px;
}
.logo img {
  width: 130px;
  opacity: 1 !important;
  display: none;
}

.logoGob {
  margin-left: 10%;
}
.logoGob img {
  height: 40px;
  width: 250px;
  opacity: 1 !important;
}

.home {
  margin-top: 1%;
}

.redesMobile {
  display: inline;
}

@media only screen and (max-width: 1133px) {
  .menu-ul {
    padding-left: 20px;
  }
}
@media only screen and (max-width: 991px) {
  .menu-ul {
    padding-left: 10px;
  }

  .redes {
    display: none;
  }

  .logo {
    right: 100px;
    top: 50px;
    position: absolute;
  }
  .logo img {
    display: inline;
  }

  .logoGob {
    display: none;
  }
}
@media only screen and (max-width: 700px) {
  .containeres {
    position: relative;
    margin-top: 30px;
    margin-bottom: 15px;
    padding-bottom: 10px;
    width: 0px;
    height: 0px;
  }

  .menu-ul {
    height: 200px;
    padding: 0;
    margin-top: 0px;
  }
  .menu-ul ul {
    flex-direction: column;
    padding-left: 3rem;
  }

  .redesMobile {
    display: inline;
    color: white;
    padding-left: 25px;
  }

  .listaBusqueda {
    margin: 0;
    top: 100%;
    right: 0;
    bottom: 50;
    left: 50px;
  }
}
@media only screen and (max-width: 450px) {
  .logo {
    right: 40px;
  }
}
/*-------------Menu nueva estetica para probar ------------*/
.topBar {
  position: absolute;
  top: 0;
  z-index: 100;
  height: 40px;
  display: flex;
  flex-direction: row;
  justify-content: space-around;
  width: 100%;
  padding-top: 7px;
}
.topBar a {
  color: white;
}
.topBar .tabIconos:hover {
  font-size: 20px;
}

.topBarTitle {
  padding-right: 150px;
}

.bg-navbar {
  background-position: bottom;
  background-image: url("./utils/images/menu-img.png");
  min-height: 140px;
  /* Center and scale the image nicely */
  background-repeat: no-repeat;
  background-size: cover;
  /* Needed to position the navbar */
  position: absolute;
  top: 40px;
  width: 100%;
  z-index: 99;
  /*Cambiar fuente desde el body*/
  font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, Oxygen, Ubuntu, Cantarell, "Open Sans", "Helvetica Neue", sans-serif;
  text-align: center;
  font-size: 17px;
  font-weight: bold;
}

.navbar-center {
  position: absolute;
  left: 55%;
  transform: translatex(-50%);
}

.nav-space {
  width: 20px;
  height: 1px;
}

.nav-ul {
  list-style-type: none;
  margin: 0;
  padding: 0;
  padding-top: 40px;
  padding-right: 50px;
  color: #f2f2f2;
  font-size: 17px;
  width: 100%;
}

.buscador-destino {
  width: 240px;
  height: 40px;
  float: right;
  border-radius: 18px;
  font-size: 16px;
  color: white;
  font-weight: bold;
}

#buscar {
  background-color: rgba(0, 0, 0, 0.1);
}

.buscador-icon {
  padding-left: 35px;
  background: url("./utils/images/search.png") no-repeat 5%;
  background-size: 20px;
}

.buscador-destino::placeholder {
  color: rgba(255, 255, 255, 0.7);
  font-weight: bold;
}

/* The container <div> - needed to position the dropdown content */
.dropdown {
  position: relative;
  float: right;
}

/* Dropdown Content (Hidden by Default) */
.dropdown-content {
  display: none;
  position: absolute;
  background-color: white;
  min-width: 160px;
  box-shadow: 0px 8px 16px 0px rgba(0, 0, 0, 0.2);
  margin-top: 45px;
  border-radius: 10px;
  font-weight: normal;
  opacity: 0.75;
}

.dropdown-content a {
  color: #a10d59;
  padding: 12px 16px;
  text-decoration: none;
  display: block;
  text-align: center;
  width: 100%;
}

/* Change color of dropdown links on hover */
.dropdown-content a:hover {
  background-color: #f1f1f1;
  border-radius: 10px;
}

/* Show the dropdown menu on hover */
.dropdown:hover .dropdown-content {
  display: block;
}

/* Style The Dropdown Button */
.dropbtn {
  background-color: transparent;
  font-size: 17px;
  color: white;
  padding: 16px;
  border: none;
  cursor: pointer;
  font-weight: bold;
}

/* Change the background color of the dropdown button when the dropdown content is shown */
.dropdown:hover .dropbtn {
  color: #000;
}

/* cambio de estilo del Navbar al scrollear
.scroll {
position: fixed;
min-height: 137px;
background-image: url("./utils/images/scrollNavbar.png");
background-repeat: no-repeat;
background-size: cover;
background-position: center center;
}*/
/*Logo class*/
.img-brand {
  position: absolute;
  margin-top: -2%;
  width: 240px;
  left: 25%;
  transform: translatex(-50%);
}

#collasible-nav-dropdown {
  color: whitesmoke;
}

/* shows dropdown menu options from navbar */
.nav-item.dropdown:hover .dropdown-menu {
  display: block;
  opacity: 90%;
}

/* Altura de los items del navbar*/
.nav-container {
  white-space: nowrap;
  margin: 3% 0;
  float: right;
}

/*Lista dinamica de localidades*/
.ul-busqueda {
  background-color: #c42a59;
  width: 250px;
  max-height: auto;
  overflow: auto;
  position: absolute;
  margin-left: 5px;
  margin-top: 40px;
  border-radius: 2%;
  transition: all 1s;
  z-index: 4;
  color: white;
  font-weight: 500;
  box-shadow: 0 0 25px 0 rgba(0, 0, 0, 0.4);
  opacity: 90%;
}

/* Responsive querys */
@media screen and (max-width: 600px) {
  .topBar {
    display: none;
  }
}
@media screen and (max-width: 1050px) {
  .topBarTitle {
    padding-right: 150px;
  }

  .topBarIcon {
    display: none;
  }
}
@media screen and (max-width: 991px) {
  #logoscroll {
    left: 50%;
    transform: translatex(-50%);
    margin-top: -2%;
  }
}
@media screen and (max-width: 1300px) {
  .img-brand {
    display: inline-block;
    width: 160px;
  }

  .navbar-center {
    left: 20%;
    transform: translatex(-50%);
  }
}
@media screen and (max-width: 1600px) {
  .img-brand {
    left: 20%;
    transform: translatex(-50%);
    transition: 0.3s;
  }
}
@media screen and (max-width: 1700px) {
  .img-brand {
    left: 30%;
    transform: translatex(-50%);
  }

  .navbar-center {
    left: 60%;
    transform: translatex(-50%);
  }
}
/*
    Sub componente de Menu (ZonasMenu)
*/
.ZonasMenu {
  width: 100%;
  display: flex;
  flex-direction: row;
  justify-content: center;
  flex-wrap: wrap;
}
.ZonasMenu .ZonaMenu-Zonas {
  min-width: 730px;
}
.ZonasMenu .ZonaMenu-Zonas h4 {
  padding-left: 30px;
}
.ZonasMenu .ZonaMenu-Zonas .ZonaMenu-Data {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(330px, 330px));
  grid-column-gap: 15px;
  grid-row-gap: 25px;
  justify-content: center;
}
.ZonasMenu .ZonaMenu-Zonas .ZonaMenu-Data a {
  text-decoration: none;
}
.ZonasMenu .ZonaMenu-Zonas .ZonaMenu-Data .ZonaMenu-Item {
  width: 100%;
  height: 70px;
}
.ZonasMenu .ZonaMenu-Zonas .ZonaMenu-Data .ZonaMenu-Item img {
  height: 80px;
  width: 80px;
  float: left;
}
.ZonasMenu .ZonaMenu-Zonas .ZonaMenu-Data .ZonaMenu-Item span {
  display: block;
  white-space: normal;
  word-wrap: break-word;
  text-align: center;
  width: 100%;
  padding-top: 10px;
  font-size: 1.2rem;
  color: #fff;
  padding-right: 5px;
}
.ZonasMenu .ZonaMenu-Lista ul {
  list-style-type: none;
  margin-block-start: 0px;
  margin-block-end: 0px;
  margin-inline-start: 0px;
  margin-inline-end: 0px;
  padding-inline-start: 0px;
  margin-bottom: 0px;
}
.ZonasMenu .ZonaMenu-Lista ul li .link {
  color: #fff;
  text-transform: uppercase;
  text-decoration: none;
  font-weight: 300;
}

.zonas-data {
  display: flex;
}

.media-zone {
  width: 330px;
  height: 70px;
  padding: 0 8px;
  margin-right: 10px;
  margin-bottom: 20px;
}
.media-zone img {
  height: 80px;
  width: 80px;
  float: left;
}
.media-zone span {
  display: block;
  text-align: right;
  width: 100%;
  padding-top: 40px;
  font-size: 1.2rem;
}

@media only screen and (max-width: 900px) {
  .ZonasMenu {
    display: flex;
    flex-direction: column;
    justify-content: center;
  }
  .ZonasMenu .ZonaMenu-Zonas h4 {
    text-align: center;
  }
  .ZonasMenu .ZonaMenu-Lista {
    display: flex;
    flex-direction: column;
    max-width: 600px;
    margin: 30px auto;
    padding: 0 20px;
  }
  .ZonasMenu .ZonaMenu-Lista ul li .link {
    margin-right: 20px;
  }
}
@media only screen and (max-width: 750px) {
  .ZonasMenu .ZonaMenu-Zonas {
    min-width: auto;
  }
  .ZonasMenu .ZonaMenu-Zonas .ZonaMenu-Data {
    grid-template-columns: 350px;
    justify-content: center;
  }
}
#modalMain-container {
  position: fixed;
  display: flex;
  height: 100%;
  width: 100%;
  top: 0;
  left: 0;
  transform: scale(0);
  z-index: 101;
}
#modalMain-container.modalIn {
  transform: scale(1);
}
#modalMain-container.modalIn .modalMain-background {
  width: 100%;
  background: rgba(0, 0, 0, 0);
  animation: fadeInModal 0.5s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
}
#modalMain-container.modalIn .modalMain-background .modalMain {
  background-color: transparent;
  animation: modalFadeInModal 0.5s 0.8s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
}
#modalMain-container.modalIn .modalMain-background .modalMain img {
  opacity: 0;
  position: relative;
  animation: modalContentFadeInModal 0.5s 1s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
}
#modalMain-container.modalIn .modalMain-background .modalMain .closeModal i {
  opacity: 0;
  position: relative;
  animation: modalContentFadeInModal 0.5s 1s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
}
#modalMain-container.modalIn .modalMain-background .modalMain .modalMain-svg rect {
  animation: sketchInModal 0.5s 0.3s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
}
#modalMain-container.modalIn.modalOut {
  animation: quickScaleDownModal 0s 0.5s linear forwards;
}
#modalMain-container.modalIn.modalOut .modalMain-background {
  animation: fadeOutModal 0.5s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
}
#modalMain-container.modalIn.modalOut .modalMain-background .modalMain {
  animation: modalFadeOutModal 0.5s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
}
#modalMain-container.modalIn.modalOut .modalMain-background .modalMain img {
  animation: modalContentFadeOutModal 0.5s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
}
#modalMain-container.modalIn.modalOut .modalMain-background .modalMain .closeModal i {
  animation: modalContentFadeOutModal 0.5s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
}
#modalMain-container.modalIn.modalOut .modalMain-background .modalMain .modalMain-svg rect {
  animation: sketchOutModal 0.5s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
}
#modalMain-container .modalMain-background {
  background: rgba(0, 0, 0, 0.8);
  text-align: center;
  vertical-align: middle;
}
#modalMain-container .modalMain-background .modalMain {
  background: white;
  height: 95%;
  width: 50%;
  display: inline-block;
  border-radius: 20px;
  position: relative;
  top: 2%;
}
#modalMain-container .modalMain-background .modalMain .closeModal {
  z-index: 2;
  position: absolute;
  top: 10px;
  right: 10px;
  color: rgb(237, 15, 104);
  cursor: pointer;
}
#modalMain-container .modalMain-background .modalMain .closeModal i {
  font-size: 3rem;
}
#modalMain-container .modalMain-background .modalMain img {
  border-radius: 20px;
  z-index: 1;
  height: 100%;
  width: 100%;
}
#modalMain-container .modalMain-background .modalMain .modalMain-svg {
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  border-radius: 20px;
}
#modalMain-container .modalMain-background .modalMain .modalMain-svg rect {
  stroke: #fff;
  stroke-width: 2px;
  stroke-dasharray: 778;
  stroke-dashoffset: 778;
}

@keyframes fadeInModal {
  0% {
    background: rgba(0, 0, 0, 0);
  }
  100% {
    background: rgba(0, 0, 0, 0.7);
  }
}
@keyframes fadeOutModal {
  0% {
    background: rgba(0, 0, 0, 0.7);
  }
  100% {
    background: rgba(0, 0, 0, 0);
  }
}
@keyframes scaleDownModal {
  0% {
    transform: scale(1) translateY(0px);
    opacity: 1;
  }
  100% {
    transform: scale(0.8) translateY(1000px);
    opacity: 0;
  }
}
@keyframes quickScaleDownModal {
  0% {
    transform: scale(1);
  }
  99.9% {
    transform: scale(1);
  }
  100% {
    transform: scale(0);
  }
}
@keyframes sketchInModal {
  0% {
    stroke-dashoffset: 778;
  }
  100% {
    stroke-dashoffset: 0;
  }
}
@keyframes sketchOutModal {
  0% {
    stroke-dashoffset: 0;
  }
  100% {
    stroke-dashoffset: 778;
  }
}
@keyframes modalFadeInModal {
  0% {
    background-color: transparent;
  }
  100% {
    background-color: white;
  }
}
@keyframes modalFadeOutModal {
  0% {
    background-color: white;
  }
  100% {
    background-color: transparent;
  }
}
@keyframes modalContentFadeInModal {
  0% {
    opacity: 0;
    top: -20px;
  }
  100% {
    opacity: 1;
    top: 0;
  }
}
@keyframes modalContentFadeOutModal {
  0% {
    opacity: 1;
    top: 0px;
  }
  100% {
    opacity: 0;
    top: -20px;
  }
}
.pantallaGrande {
  display: inline;
}

.pantallaChica {
  display: none;
}

@media only screen and (max-width: 500px) {
  .pantallaGrande {
    display: none;
  }

  .pantallaChica {
    display: inline;
  }

  #modalMain-container {
    position: fixed;
    display: flex;
    height: 100%;
    width: 100%;
    top: 0;
    left: 0;
    transform: scale(0);
    z-index: 101;
  }
  #modalMain-container.modalIn {
    transform: scale(1);
  }
  #modalMain-container.modalIn .modalMain-background {
    width: 100%;
    background: rgba(0, 0, 0, 0);
    animation: fadeInModal 0.5s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
  }
  #modalMain-container.modalIn .modalMain-background .modalMain {
    background-color: transparent;
    animation: modalFadeInModal 0.5s 0.8s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
  }
  #modalMain-container.modalIn .modalMain-background .modalMain img {
    height: 100%;
    width: 100%;
    opacity: 0;
    position: relative;
    animation: modalContentFadeInModal 0.5s 1s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
  }
  #modalMain-container.modalIn .modalMain-background .modalMain .closeModal i {
    opacity: 0;
    position: relative;
    animation: modalContentFadeInModal 0.5s 1s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
  }
  #modalMain-container.modalIn .modalMain-background .modalMain .modalMain-svg rect {
    animation: sketchInModal 0.5s 0.3s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
  }
  #modalMain-container.modalIn.modalOut {
    animation: quickScaleDownModal 0s 0.5s linear forwards;
  }
  #modalMain-container.modalIn.modalOut .modalMain-background {
    animation: fadeOutModal 0.5s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
  }
  #modalMain-container.modalIn.modalOut .modalMain-background .modalMain {
    height: 90%;
    animation: modalFadeOutModal 0.5s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
  }
  #modalMain-container.modalIn.modalOut .modalMain-background .modalMain img {
    animation: modalContentFadeOutModal 0.5s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
  }
  #modalMain-container.modalIn.modalOut .modalMain-background .modalMain .closeModal i {
    animation: modalContentFadeOutModal 0.5s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
  }
  #modalMain-container.modalIn.modalOut .modalMain-background .modalMain .modalMain-svg rect {
    animation: sketchOutModal 0.5s cubic-bezier(0.165, 0.84, 0.44, 1) forwards;
  }
  #modalMain-container .modalMain-background {
    background: rgba(0, 0, 0, 0.8);
    text-align: center;
    vertical-align: middle;
  }
  #modalMain-container .modalMain-background .modalMain {
    background: white;
    height: 90%;
    width: 75%;
    display: inline-block;
    border-radius: 20px;
    position: relative;
    top: 2%;
  }
  #modalMain-container .modalMain-background .modalMain .closeModal {
    z-index: 2;
    position: absolute;
    top: 10px;
    right: 10px;
    color: rgb(237, 15, 104);
    cursor: pointer;
  }
  #modalMain-container .modalMain-background .modalMain .closeModal i {
    font-size: 3rem;
  }
  #modalMain-container .modalMain-background .modalMain img {
    border-radius: 20px;
    z-index: 1;
    height: 100%;
    width: 100%;
  }
  #modalMain-container .modalMain-background .modalMain .modalMain-svg {
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    border-radius: 20px;
  }
  #modalMain-container .modalMain-background .modalMain .modalMain-svg rect {
    stroke: #fff;
    stroke-width: 2px;
    stroke-dasharray: 778;
    stroke-dashoffset: 778;
  }

  @keyframes fadeInModal {
    0% {
      background: rgba(0, 0, 0, 0);
    }
    100% {
      background: rgba(0, 0, 0, 0.7);
    }
  }
  @keyframes fadeOutModal {
    0% {
      background: rgba(0, 0, 0, 0.7);
    }
    100% {
      background: rgba(0, 0, 0, 0);
    }
  }
  @keyframes scaleDownModal {
    0% {
      transform: scale(1) translateY(0px);
      opacity: 1;
    }
    100% {
      transform: scale(0.8) translateY(1000px);
      opacity: 0;
    }
  }
  @keyframes quickScaleDownModal {
    0% {
      transform: scale(1);
    }
    99.9% {
      transform: scale(1);
    }
    100% {
      transform: scale(0);
    }
  }
  @keyframes sketchInModal {
    0% {
      stroke-dashoffset: 778;
    }
    100% {
      stroke-dashoffset: 0;
    }
  }
  @keyframes sketchOutModal {
    0% {
      stroke-dashoffset: 0;
    }
    100% {
      stroke-dashoffset: 778;
    }
  }
  @keyframes modalFadeInModal {
    0% {
      background-color: transparent;
    }
    100% {
      background-color: white;
    }
  }
  @keyframes modalFadeOutModal {
    0% {
      background-color: white;
    }
    100% {
      background-color: transparent;
    }
  }
  @keyframes modalContentFadeInModal {
    0% {
      opacity: 0;
      top: -20px;
    }
    100% {
      opacity: 1;
      top: 0;
    }
  }
  @keyframes modalContentFadeOutModal {
    0% {
      opacity: 1;
      top: 0px;
    }
    100% {
      opacity: 0;
      top: -20px;
    }
  }
}
h1 {
  text-align: center;
  font-family: Montserrat, sans-serif;
  color: #333;
}

.accordion {
  width: 75%;
  max-width: 1080px;
  height: 550px;
  overflow: hidden;
  margin: 50px auto;
  -moz-border-radius: 7px;
  -webkit-border-radius: 7px;
}
.accordion ul {
  width: 100%;
  display: table;
  table-layout: fixed;
  margin: 0;
  padding: 0;
}
.accordion ul li {
  display: table-cell;
  vertical-align: bottom;
  position: relative;
  width: 16.666%;
  height: 550px;
  background-size: cover;
  background-repeat: no-repeat;
  background-position: center center;
  transition: all 500ms ease;
}
.accordion ul li div {
  display: block;
  overflow: hidden;
  width: 100%;
}
.accordion ul li div a {
  display: block;
  height: 550px;
  width: 100%;
  position: relative;
  z-index: 3;
  vertical-align: bottom;
  padding: 15px 20px;
  box-sizing: border-box;
  color: #fff;
  text-decoration: none;
  font-family: "Roboto";
  transition: all 200ms ease;
}
.accordion ul li div a * {
  opacity: 0;
  margin: 0;
  width: 100%;
  text-overflow: ellipsis;
  position: relative;
  z-index: 5;
  white-space: nowrap;
  overflow: hidden;
  -webkit-transform: translateX(-20px);
  transform: translateX(-20px);
  -webkit-transition: all 400ms ease;
  transition: all 400ms ease;
}
.accordion ul li div a h2 {
  font-family: Montserrat, sans-serif;
  text-overflow: clip;
  font-size: 24px;
  text-transform: uppercase;
  margin-bottom: 2px;
  top: 460px;
}
.accordion ul li div a p {
  top: 460px;
  font-size: 13.5px;
}
.accordion ul li:nth-child(1) {
  background-image: url("https://i.ibb.co/Z8R0kXX/Whats-App-Image-2022-04-13-at-1-17-53-PM.jpg");
}
.accordion ul li:nth-child(2) {
  background-image: url("http://michael-ferry.com/assets/accordion2.jpg");
}
.accordion ul li:nth-child(3) {
  background-image: url("http://michael-ferry.com/assets/accordion3.jpg");
}
.accordion ul li:nth-child(4) {
  background-image: url("http://michael-ferry.com/assets/accordion4.jpg");
}
.accordion ul li:nth-child(5) {
  background-image: url("http://michael-ferry.com/assets/accordion5.jpg");
}
.accordion ul li:nth-child(6) {
  background-image: url("http://michael-ferry.com/assets/accordion6.jpg");
}
.accordion ul:hover li, .accordion ul:focus-within li {
  width: 8%;
}
.accordion ul li:focus {
  outline: none;
}
.accordion ul:hover li:hover,
.accordion ul li:focus, .accordion ul:focus-within li:focus {
  width: 60%;
}
.accordion ul:hover li:hover a,
.accordion ul li:focus a, .accordion ul:focus-within li:focus a {
  background: rgb(0, 0, 0);
}
.accordion ul:hover li:hover a *,
.accordion ul li:focus a *, .accordion ul:focus-within li:focus a * {
  opacity: 1;
  -webkit-transform: translateX(0);
  transform: translateX(0);
}
.accordion ul:hover li {
  width: 8% !important;
}
.accordion ul:hover li a * {
  opacity: 0 !important;
}
.accordion ul:hover li:hover {
  width: 60% !important;
}
.accordion ul:hover li:hover a {
  background: rgba(0, 0, 0, 0.4);
}
.accordion ul:hover li:hover a * {
  opacity: 1 !important;
  -webkit-transform: translateX(0);
  transform: translateX(0);
}
.accordion ul:hover li:hover .section-title h2 {
  margin-top: 300px;
  margin-left: 20px;
  transform: rotate(-360deg);
}

:hover.accordion {
  width: 100% !important;
  transition: all 0.7s ease;
}

@media screen and (max-width: 600px) {
  body {
    margin: 0;
  }

  .accordion {
    height: auto;
  }
  .accordion ul li,
.accordion ul li:hover,
.accordion ul:hover li,
.accordion ul:hover li:hover {
    position: relative;
    display: table;
    table-layout: fixed;
    width: 100%;
    -webkit-transition: none;
    transition: none;
  }
}
.tituloProducto {
  font-family: "roboto";
  font-size: 21px;
  letter-spacing: -0.8px;
  word-spacing: 0.4px;
  color: #525252;
  font-weight: 700;
}

/* ESTILO CARD EN PRODUCTO */
.menu-item {
  padding: 0 40px;
  margin: 5px 10px;
  user-select: none;
  cursor: pointer;
  border: none;
}

.menu-item-wrapper.active {
  border: 1px blue solid;
}

.menu-item.active {
  border: 1px green solid;
}

.scroll-menu-arrow {
  padding: 20px;
  cursor: pointer;
}

/*SCROLL MENU */
source-css-scss .menu-item {
  padding: 0 40px;
  margin: 5px 10px;
  user-select: none;
  cursor: pointer;
  border: none;
}

.menu-item-wrapper.active {
  border: 1px blue solid;
}

.menu-item.active {
  border: 1px green solid;
}

.scroll-menu-arrow {
  padding: 20px;
  cursor: pointer;
}

/*
    Slider Home
*/
.close {
  position: absolute;
  right: 32px;
  top: 32px;
  width: 32px;
  height: 32px;
  opacity: 0.3;
}

.close:hover {
  opacity: 1;
}

.close:before,
.close:after {
  position: absolute;
  left: 15px;
  content: " ";
  height: 33px;
  width: 2px;
  background-color: #333;
}

.close:before {
  transform: rotate(45deg);
}

.close:after {
  transform: rotate(-45deg);
}

.placasCoronavirus {
  height: 600px;
}

.carouselExampleIndicators {
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
}

.carouselExampleIndicators,
.carousel-inner,
.carousel-item,
.img-slider {
  height: 100vh;
}

.img-slider {
  object-fit: contain;
}

.img-slider-1 {
  width: 100%;
  height: 100vh;
  background-position: center;
  background-size: cover;
  background-repeat: no-repeat;
  background-image: url(http://turismo.sanluis.gov.ar/api-turismo/public/recursos/carousel/1-min.jpg);
  background-repeat: no-repeat;
}

.img-slider-2 {
  width: 100%;
  height: 100vh;
  background-position: center;
  background-size: cover;
  background-repeat: no-repeat;
  background-image: url(http://turismo.sanluis.gov.ar/api-turismo/public/recursos/carousel/FONDO%201-min.png);
  background-repeat: no-repeat;
  background-position: 0 0 50px 0;
  background-size: cover;
}

.img-slider-3 {
  width: 100%;
  height: 100vh;
  background-position: center;
  background-size: cover;
  background-repeat: no-repeat;
  background-image: url(http://turismo.sanluis.gov.ar/api-turismo/public/recursos/carousel/FONDO%203-min.png);
  background-repeat: no-repeat;
  background-position: 0 0 50px 0;
  background-size: cover;
}

.img-slider-4 {
  width: 100%;
  height: 100vh;
  background-position: center;
  background-size: cover;
  background-repeat: no-repeat;
  background-image: url(http://turismo.sanluis.gov.ar/api-turismo/public/recursos/carousel/4.jpg);
  background-repeat: no-repeat;
  background-position: 0 0;
  background-size: cover;
}

.tituloCarrusel {
  position: absolute;
  bottom: 7vh;
  left: 4vw;
  width: 450px;
  height: 160px;
}

.tituloCarrusel2 {
  position: absolute;
  bottom: 7vh;
  left: 4vw;
  width: 370px;
  height: 155px;
}

.tituloCarrusel3 {
  position: absolute;
  bottom: 7vh;
  left: 4vw;
  width: 395px;
  height: 155px;
}

.tituloCarrusel4 {
  display: none;
}

.slider-home-leyenda {
  position: absolute;
  bottom: 4px;
  left: 12rem;
  display: none;
}
.slider-home-leyenda h1 {
  text-transform: uppercase;
  color: #fff;
  font-weight: 700;
  text-shadow: 1px 1px 1px #3d3d3d;
  font-size: 3em;
  margin-block-start: 0px;
  margin-block-end: 0px;
  margin: 0px;
  padding: 0px;
  vertical-align: bottom;
  line-height: 2rem;
}
.slider-home-leyenda span {
  text-transform: uppercase;
  color: #fff;
  font-weight: 700;
  text-shadow: 1px 1px 1px #3d3d3d;
  font-size: 3em;
}

.imagenHome {
  position: absolute;
  bottom: 12vh;
  right: 5vw;
}
.imagenHome img {
  width: 350px;
}

@media only screen and (max-width: 820px) {
  .placasCoronavirus {
    height: 400px;
  }

  .imagenHome {
    position: absolute;
    bottom: 40%;
    left: 20%;
  }
  .imagenHome img {
    width: 500px;
  }

  .slider-home-leyenda {
    left: 4rem;
  }

  .campeonatoPesca {
    height: 120px;
  }
  .campeonatoPesca .titulo {
    padding-left: 50px;
    padding-top: 30px;
  }
  .campeonatoPesca .botones {
    float: none;
    margin-top: -25px;
    margin-left: 50px;
  }

  .pngPesca1 {
    position: absolute;
    bottom: 2vh;
    width: 150px;
    height: 30px;
  }

  .pngPesca2 {
    position: absolute;
    bottom: 2vh;
    right: 5px;
    width: 250px;
    height: 50px;
  }
}
@media only screen and (max-width: 620px) {
  .placasCoronavirus {
    height: 300px;
  }

  .campeonatoPesca {
    height: 130px;
    top: -50px;
  }
  .campeonatoPesca .titulo {
    font-size: 23px;
    padding-left: 30px;
    padding-top: 10px;
  }
  .campeonatoPesca .botones {
    float: none;
    margin-top: 10px;
    margin-left: 30px;
  }
  .campeonatoPesca .boton1 {
    margin-right: 10px;
    margin-left: 50px;
  }

  .imagenHome {
    position: absolute;
    bottom: 45%;
    left: 17%;
  }
  .imagenHome img {
    width: 250px;
  }

  .slider-home-leyenda h1 {
    font-size: 1.5rem;
    line-height: 1.5rem;
  }
  .slider-home-leyenda span {
    font-size: 1.5rem;
  }

  .tituloCarrusel {
    position: absolute;
    bottom: 10vh;
    left: 6vw;
    width: 337.5px;
    height: 120px;
  }

  .tituloCarrusel2 {
    position: absolute;
    bottom: 10vh;
    left: 6vw;
    width: 277.5px;
    height: 110.25px;
  }

  .tituloCarrusel3 {
    position: absolute;
    bottom: 10vh;
    left: 6vw;
    width: 296.25px;
    height: 110.25px;
  }

  .img-slider-1 {
    width: 100%;
    height: 100vh;
    background-position: center;
    background-size: cover;
    background-repeat: no-repeat;
    background-image: url(http://turismo.sanluis.gov.ar/api-turismo/public/recursos/carousel/1-min.jpg);
    background-repeat: no-repeat;
    background-position: -300px 0px;
    background-size: cover;
  }

  .img-slider-2 {
    width: 100%;
    height: 100vh;
    background-position: center;
    background-size: cover;
    background-repeat: no-repeat;
    background-image: url(http://turismo.sanluis.gov.ar/api-turismo/public/recursos/carousel/PRIMAVERA1.jpg);
    background-repeat: no-repeat;
    background-position: 0 0 50px 0;
    background-size: cover;
  }

  .img-slider-3 {
    width: 100%;
    height: 100vh;
    background-position: center;
    background-size: cover;
    background-repeat: no-repeat;
    background-image: url(http://turismo.sanluis.gov.ar/api-turismo/public/recursos/carousel/FONDO%203-min.png);
    background-repeat: no-repeat;
    background-position: -600px 0px;
    background-size: cover;
  }

  .tituloCarrusel4 {
    display: inline;
    position: absolute;
    width: 250px;
    height: 170px;
    bottom: 30vh;
    left: 25vw;
  }
}
/*
   inicio nuevo Slider Home
*/
.slide-0 {
  height: 100%;
}

.mancha img {
  position: absolute;
  /*El div será ubicado con relación a la pantalla*/
  left: 0px;
  /*A la derecha deje un espacio de 0px*/
  right: 0px;
  /*A la izquierda deje un espacio de 0px*/
  bottom: 0px;
  /*Abajo deje un espacio de 0px*/
  height: 0%;
  /*alto del div*/
  width: 100%;
  min-height: 69px;
}

/* -------------------------------------------------------- reset */
.cuerpoSlider {
  width: 100%;
  height: 100%;
  margin: 0 auto;
}

.cuerpoSlider * {
  width: 100%;
  height: 100%;
  position: relative;
  display: block;
  margin: 0 auto;
  padding: 0;
  text-align: center;
  z-index: 0;
}

.cuerpoSlider h1 {
  font-size: 6vw;
  text-transform: uppercase;
  font-weight: normal;
}

.cuerpoSlider a {
  color: inherit;
  text-decoration: none;
  outline: 0;
}

.cuerpoSlider ul,
li {
  list-style: none;
}

.cuerpoSlider label {
  cursor: pointer;
}

.cuerpoSlider input {
  display: none;
}

/* -------------------------------------------------------- codepen */
/* -------------------------------------------------------- slider */
.sliderHome {
  height: 45vw;
  overflow: hidden;
}

/* -------------------------------------------------------- slide */
.sliderHome > ul {
  height: 100%;
  z-index: 100;
}

.sliderHome > ul > li {
  height: 100%;
  position: absolute;
  left: 0;
  top: 0;
  opacity: 0;
  z-index: 1;
  -webkit-transition: all 2000ms ease;
  -moz-transition: all 2000ms ease;
  -ms-transition: all 2000ms ease;
  -o-transition: all 2000ms ease;
  transition: all 2000ms ease;
}

.sliderHome > #input-slide-0:checked ~ ul > li.slide-0,
.sliderHome > #input-slide-1:checked ~ ul > li.slide-1,
.sliderHome > #input-slide-2:checked ~ ul > li.slide-2,
.sliderHome > #input-slide-3:checked ~ ul > li.slide-3 {
  opacity: 1;
  z-index: 2;
}

.sliderHome > ul > li.slide-0 {
  background-image: url(http://www.turismo.sanluis.gov.ar/api-turismo/public/recursos/carousel/1.jpg);
  background-size: 100%;
  background-repeat: no-repeat;
}

.sliderHome > ul > li.slide-1 {
  background-image: url(http://www.turismo.sanluis.gov.ar/api-turismo/public/recursos/carousel/2.jpg);
  background-size: 100%;
  background-repeat: no-repeat;
}

.sliderHome > ul > li.slide-2 {
  background-image: url(http://www.turismo.sanluis.gov.ar/api-turismo/public/recursos/carousel/3.jpg);
  background-size: 100%;
  background-repeat: no-repeat;
}

.sliderHome > ul > li.slide-3 {
  background-image: url(http://www.turismo.sanluis.gov.ar/api-turismo/public/recursos/carousel/4.jpg);
  background-size: 100%;
  background-repeat: no-repeat;
}

/* -------------------------------------------------------- arrow */
.sliderHome > .slider-arrow-prev,
.sliderHome > .slider-arrow-next {
  position: absolute;
  top: 50%;
  left: 0;
  z-index: 300;
}

.sliderHome > .slider-arrow-prev > label,
.sliderHome > .slider-arrow-next > label {
  position: absolute;
  width: 5vw;
  height: 5vw;
  margin-top: -2.5vw;
  opacity: 0;
  background-size: 100% auto;
  background-position: center;
  z-index: -1;
  -webkit-transition: all 0.5s ease;
  -moz-transition: all 0.5s ease;
  -ms-transition: all 0.5s ease;
  -o-transition: all 0.5s ease;
  transition: all 0.5s ease;
}

.sliderHome > #input-slide-0:checked ~ .slider-arrow-prev > label.slide-3,
.sliderHome > #input-slide-0:checked ~ .slider-arrow-next > label.slide-1,
.sliderHome > #input-slide-1:checked ~ .slider-arrow-prev > label.slide-0,
.sliderHome > #input-slide-1:checked ~ .slider-arrow-next > label.slide-2,
.sliderHome > #input-slide-2:checked ~ .slider-arrow-prev > label.slide-1,
.sliderHome > #input-slide-2:checked ~ .slider-arrow-next > label.slide-3,
.sliderHome > #input-slide-3:checked ~ .slider-arrow-prev > label.slide-2,
.sliderHome > #input-slide-3:checked ~ .slider-arrow-next > label.slide-0 {
  z-index: 1;
}

.sliderHome:hover > .slider-arrow-prev > label,
.sliderHome:hover > .slider-arrow-next > label {
  opacity: 1;
}

.sliderHome > .slider-arrow-prev > label {
  left: 5vw;
  background-image: url();
}

.sliderHome > .slider-arrow-next > label {
  right: 5vw;
  background-image: url();
}

/* -------------------------------------------------------- dot */
.sliderHome > .slider-dot {
  position: relative;
  margin-top: -3.5vw;
  text-align: center;
  z-index: 300;
  font-size: 0;
}

.sliderHome > .slider-dot > label {
  position: relative;
  display: inline-block;
  margin: 1vw 0.5vw;
  width: 0.8vw;
  height: 0.8vw;
  border-radius: 50%;
  border: #646464 1.5px solid;
  background-color: #646464;
}

.sliderHome > #input-slide-0:checked ~ .slider-dot > label.slide-0,
.sliderHome > #input-slide-1:checked ~ .slider-dot > label.slide-1,
.sliderHome > #input-slide-2:checked ~ .slider-dot > label.slide-2,
.sliderHome > #input-slide-3:checked ~ .slider-dot > label.slide-3 {
  background-color: #f1f6f8;
}

.sliderHome > .slider-dot > label:hover {
  background-color: #c9c3c3 !important;
}

/* -------------------------------------------------------- description */
.sliderHome > .slide-description {
  position: absolute;
  width: 50%;
  top: calc(50% - 3vw);
  left: 25%;
  z-index: 200;
}

.sliderHome > .slide-description > label {
  position: absolute;
  width: 100%;
  top: 0;
  left: 0;
  cursor: default;
  z-index: 0;
  opacity: 0;
  visibility: hidden;
  -webkit-transition: all 0.75s ease;
  -moz-transition: all 0.75s ease;
  -ms-transition: all 0.75s ease;
  -o-transition: all 0.75s ease;
  transition: all 0.75s ease;
}

.sliderHome > #input-slide-0:checked ~ .slide-description > .slide-0,
.sliderHome > #input-slide-1:checked ~ .slide-description > .slide-1,
.sliderHome > #input-slide-2:checked ~ .slide-description > .slide-2,
.sliderHome > #input-slide-3:checked ~ .slide-description > .slide-3 {
  z-index: 2;
  opacity: 1;
  visibility: visible;
}

.sliderHome > .slide-description > label > .text-slide {
  margin: 0 auto;
  line-height: 6vw;
  text-align: center;
}

.sliderHome > .slide-description > .slide-0 {
  font-family: "Raleway", sans-serif;
}

.sliderHome > .slide-description > .slide-1 {
  font-family: "Poiret One", cursive;
}

.sliderHome > .slide-description > .slide-2 {
  font-family: "Monoton", cursive;
}

.sliderHome > .slide-description > .slide-3 {
  font-family: "Audiowide", cursive;
}

/* -------------------------------------------------------- autoplay */
/*
	if you don't want to autoplay 
  just check input "slide-0" 
  instead of input "play" in html code
  and remove the code below
*/
/* -------------------------------------------------------- autoplay slide */
@-webkit-keyframes slide {
  0%, 100% {
    opacity: 0;
  }
  6%, 25% {
    opacity: 1;
    z-index: 2;
  }
  30%, 50% {
    opacity: 0;
    z-index: 2;
  }
}
@-moz-keyframes slide {
  0%, 100% {
    opacity: 0;
  }
  6%, 24% {
    opacity: 1;
    z-index: 2;
  }
  30%, 50% {
    opacity: 0;
    z-index: 2;
  }
}
@-ms-keyframes slide {
  0%, 100% {
    opacity: 0;
  }
  6%, 25% {
    opacity: 1;
    z-index: 2;
  }
  30%, 50% {
    opacity: 0;
    z-index: 2;
  }
}
@-o-keyframes slide {
  0%, 100% {
    opacity: 0;
  }
  6%, 25% {
    opacity: 1;
    z-index: 2;
  }
  30%, 50% {
    opacity: 0;
    z-index: 2;
  }
}
@keyframes slide {
  0%, 100% {
    opacity: 0;
  }
  6%, 25% {
    opacity: 1;
    z-index: 2;
  }
  30%, 50% {
    opacity: 0;
    z-index: 2;
  }
}
.sliderHome > #input-slide-autoplay:checked ~ ul > li.slide-0 {
  -webkit-animation: slide 32000ms infinite -2000ms linear;
  -moz-animation: slide 32000ms infinite -2000ms linear;
  -ms-animation: slide 32000ms infinite -2000ms linear;
  -o-animation: slide 32000ms infinite -2000ms linear;
  animation: slide 32000ms infinite -2000ms linear;
}

.sliderHome > #input-slide-autoplay:checked ~ ul > li.slide-1 {
  -webkit-animation: slide 32000ms infinite 6000ms linear;
  -moz-animation: slide 32000ms infinite 6000ms linear;
  -ms-animation: slide 32000ms infinite 6000ms linear;
  -o-animation: slide 32000ms infinite 6000ms linear;
  animation: slide 32000ms infinite 6000ms linear;
}

.sliderHome > #input-slide-autoplay:checked ~ ul > li.slide-2 {
  -webkit-animation: slide 32000ms infinite 14000ms linear;
  -moz-animation: slide 32000ms infinite 14000ms linear;
  -ms-animation: slide 32000ms infinite 14000ms linear;
  -o-animation: slide 32000ms infinite 14000ms linear;
  animation: slide 32000ms infinite 14000ms linear;
}

.sliderHome > #input-slide-autoplay:checked ~ ul > li.slide-3 {
  -webkit-animation: slide 32000ms infinite 22000ms linear;
  -moz-animation: slide 32000ms infinite 22000ms linear;
  -ms-animation: slide 32000ms infinite 22000ms linear;
  -o-animation: slide 32000ms infinite 22000ms linear;
  animation: slide 32000ms infinite 22000ms linear;
}

.sliderHome > #input-slide-autoplay:checked ~ ul > li {
  -webkit-transition: none;
  -moz-transition: none;
  -ms-transition: none;
  -o-transition: none;
  transition: none;
}

/* -------------------------------------------------------- autoplay arrow */
@-webkit-keyframes arrow {
  0%, 24% {
    z-index: 1;
  }
  25%, 100% {
    z-index: -1;
  }
}
@-moz-keyframes arrow {
  0%, 24% {
    z-index: 1;
  }
  25%, 100% {
    z-index: -1;
  }
}
@-ms-keyframes arrow {
  0%, 24% {
    z-index: 1;
  }
  25%, 100% {
    z-index: -1;
  }
}
@-o-keyframes arrow {
  0%, 24% {
    z-index: 1;
  }
  25%, 100% {
    z-index: -1;
  }
}
@keyframes arrow {
  0%, 24% {
    z-index: 1;
  }
  25%, 100% {
    z-index: -1;
  }
}
.sliderHome > #input-slide-autoplay:checked ~ .slider-arrow-prev > label.slide-3,
.sliderHome > #input-slide-autoplay:checked ~ .slider-arrow-next > label.slide-1 {
  -webkit-animation: arrow 32000ms infinite -2000ms;
  -moz-animation: arrow 32000ms infinite -2000ms;
  -ms-animation: arrow 32000ms infinite -2000ms;
  -o-animation: arrow 32000ms infinite -2000ms;
  animation: arrow 32000ms infinite -2000ms;
}

.sliderHome > #input-slide-autoplay:checked ~ .slider-arrow-prev > label.slide-0,
.sliderHome > #input-slide-autoplay:checked ~ .slider-arrow-next > label.slide-2 {
  -webkit-animation: arrow 32000ms infinite 6000ms;
  -moz-animation: arrow 32000ms infinite 6000ms;
  -ms-animation: arrow 32000ms infinite 6000ms;
  -o-animation: arrow 32000ms infinite 6000ms;
  animation: arrow 32000ms infinite 6000ms;
}

.sliderHome > #input-slide-autoplay:checked ~ .slider-arrow-prev > label.slide-1,
.sliderHome > #input-slide-autoplay:checked ~ .slider-arrow-next > label.slide-3 {
  -webkit-animation: arrow 32000ms infinite 14000ms;
  -moz-animation: arrow 32000ms infinite 14000ms;
  -ms-animation: arrow 32000ms infinite 14000ms;
  -o-animation: arrow 32000ms infinite 14000ms;
  animation: arrow 32000ms infinite 14000ms;
}

.sliderHome > #input-slide-autoplay:checked ~ .slider-arrow-prev > label.slide-2,
.sliderHome > #input-slide-autoplay:checked ~ .slider-arrow-next > label.slide-0 {
  -webkit-animation: arrow 32000ms infinite 22000ms;
  -moz-animation: arrow 32000ms infinite 22000ms;
  -ms-animation: arrow 32000ms infinite 22000ms;
  -o-animation: arrow 32000ms infinite 22000ms;
  animation: arrow 32000ms infinite 22000ms;
}

/* -------------------------------------------------------- autoplay dot */
@-webkit-keyframes dot {
  0%, 24% {
    background-color: #f1f6f8;
  }
  25%, 100% {
    background: #646464;
  }
}
@-moz-keyframes dot {
  0%, 24% {
    background-color: #f1f6f8;
  }
  25%, 100% {
    background: #646464;
  }
}
@-ms-keyframes dot {
  0%, 24% {
    background-color: #f1f6f8;
  }
  25%, 100% {
    background: #646464;
  }
}
@-o-keyframes dot {
  0%, 24% {
    background-color: #f1f6f8;
  }
  25%, 100% {
    background: #646464;
  }
}
@keyframes dot {
  0%, 24% {
    background-color: #f1f6f8;
  }
  25%, 100% {
    background: #646464;
  }
}
.sliderHome > #input-slide-autoplay:checked ~ .slider-dot > label.slide-0 {
  -webkit-animation: dot 32000ms infinite -2000ms;
  -moz-animation: dot 32000ms infinite -2000ms;
  -ms-animation: dot 32000ms infinite -2000ms;
  -o-animation: dot 32000ms infinite -2000ms;
  animation: dot 32000ms infinite -2000ms;
}

.sliderHome > #input-slide-autoplay:checked ~ .slider-dot > label.slide-1 {
  -webkit-animation: dot 32000ms infinite 6000ms;
  -moz-animation: dot 32000ms infinite 6000ms;
  -ms-animation: dot 32000ms infinite 6000ms;
  -o-animation: dot 32000ms infinite 6000ms;
  animation: dot 32000ms infinite 6000ms;
}

.sliderHome > #input-slide-autoplay:checked ~ .slider-dot > label.slide-2 {
  -webkit-animation: dot 32000ms infinite 14000ms;
  -moz-animation: dot 32000ms infinite 14000ms;
  -ms-animation: dot 32000ms infinite 14000ms;
  -o-animation: dot 32000ms infinite 14000ms;
  animation: dot 32000ms infinite 14000ms;
}

.sliderHome > #input-slide-autoplay:checked ~ .slider-dot > label.slide-3 {
  -webkit-animation: dot 32000ms infinite 22000ms;
  -moz-animation: dot 32000ms infinite 22000ms;
  -ms-animation: dot 32000ms infinite 22000ms;
  -o-animation: dot 32000ms infinite 22000ms;
  animation: dot 32000ms infinite 22000ms;
}

/* -------------------------------------------------------- autoplay description */
@-webkit-keyframes description {
  0%, 5% {
    opacity: 0;
    z-index: 2;
    visibility: visible;
  }
  6%, 24% {
    opacity: 1;
    z-index: 2;
    visibility: visible;
  }
  25%, 100% {
    opacity: 0;
    z-index: 0;
    visibility: hidden;
  }
}
@-moz-keyframes description {
  0%, 5% {
    opacity: 0;
    z-index: 2;
    visibility: visible;
  }
  6%, 24% {
    opacity: 1;
    z-index: 2;
    visibility: visible;
  }
  25%, 100% {
    opacity: 0;
    z-index: 0;
    visibility: hidden;
  }
}
@-ms-keyframes description {
  0%, 5% {
    opacity: 0;
    z-index: 2;
    visibility: visible;
  }
  6%, 24% {
    opacity: 1;
    z-index: 2;
    visibility: visible;
  }
  25%, 100% {
    opacity: 0;
    z-index: 0;
    visibility: hidden;
  }
}
@-o-keyframes description {
  0%, 5% {
    opacity: 0;
    z-index: 2;
    visibility: visible;
  }
  6%, 24% {
    opacity: 1;
    z-index: 2;
    visibility: visible;
  }
  25%, 100% {
    opacity: 0;
    z-index: 0;
    visibility: hidden;
  }
}
@keyframes description {
  0%, 5% {
    opacity: 0;
    z-index: 2;
    visibility: visible;
  }
  6%, 24% {
    opacity: 1;
    z-index: 2;
    visibility: visible;
  }
  25%, 100% {
    opacity: 0;
    z-index: 0;
    visibility: hidden;
  }
}
.sliderHome > #input-slide-autoplay:checked ~ .slide-description > .slide-0 {
  -webkit-animation: description 32000ms infinite -2000ms ease;
  -moz-animation: description 32000ms infinite -2000ms ease;
  -ms-animation: description 32000ms infinite -2000ms ease;
  -o-animation: description 32000ms infinite -2000ms ease;
  animation: description 32000ms infinite -2000ms ease;
}

.sliderHome > #input-slide-autoplay:checked ~ .slide-description > .slide-1 {
  -webkit-animation: description 32000ms infinite 6000ms ease;
  -moz-animation: description 32000ms infinite 6000ms ease;
  -ms-animation: description 32000ms infinite 6000ms ease;
  -o-animation: description 32000ms infinite 6000ms ease;
  animation: description 32000ms infinite 6000ms ease;
}

.sliderHome > #input-slide-autoplay:checked ~ .slide-description > .slide-2 {
  -webkit-animation: description 32000ms infinite 14000ms ease;
  -moz-animation: description 32000ms infinite 14000ms ease;
  -ms-animation: description 32000ms infinite 14000ms ease;
  -o-animation: description 32000ms infinite 14000ms ease;
  animation: description 32000ms infinite 14000ms ease;
}

.sliderHome > #input-slide-autoplay:checked ~ .slide-description > .slide-3 {
  -webkit-animation: description 32000ms infinite 22000ms ease;
  -moz-animation: description 32000ms infinite 22000ms ease;
  -ms-animation: description 32000ms infinite 22000ms ease;
  -o-animation: description 32000ms infinite 22000ms ease;
  animation: description 32000ms infinite 22000ms ease;
}

.sliderHome > #input-slide-autoplay:checked ~ .slide-description > label {
  -webkit-transition: none;
  -moz-transition: none;
  -ms-transition: none;
  -o-transition: none;
  transition: none;
}

/* -------------------------------------------------------- end codepen */
/* -------------------------------------------------------- footer */
@media only screen and (max-width: 1300px) {
  .sliderHome {
    height: 60vw;
  }

  .sliderHome > ul > li.slide-0 {
    background-size: 130%;
  }

  .sliderHome > ul > li.slide-1 {
    background-size: 130%;
  }

  .sliderHome > ul > li.slide-2 {
    background-size: 130%;
  }

  .sliderHome > ul > li.slide-3 {
    background-size: 130%;
  }
}
@media only screen and (max-width: 720px) {
  .sliderHome {
    height: 83vw;
  }

  .sliderHome > ul > li.slide-0 {
    background-size: 180%;
  }

  .sliderHome > ul > li.slide-1 {
    background-size: 180%;
  }

  .sliderHome > ul > li.slide-2 {
    background-size: 180%;
  }

  .sliderHome > ul > li.slide-3 {
    background-size: 180%;
  }
}
@media only screen and (max-width: 420px) {
  .sliderHome {
    height: 65vw;
    overflow: hidden;
  }
}
.MuiSpeedDial-directionUp {
  float: left;
  background-color: aqua;
}

.MuiSpeedDial-fab {
  background-color: aqua;
}

.MuiButtonBase-root {
  background-color: black;
  float: left;
}

.container-sliderActividades {
  margin: 10% 0;
  padding: 0 10%;
  height: 100vh;
  display: flex;
  justify-content: center;
  align-items: center;
  overflow: hidden;
  width: 100%;
}

.slider2Actividades {
  width: 1300px;
  height: 1000px;
  border-radius: 10px;
  overflow-y: visible;
  overflow-x: hidden;
  margin: 0;
  padding: 0;
}

.slidesActividades {
  width: 400%;
  height: auto;
  display: flex;
  margin-top: 10%;
}

.slidesActividades input {
  display: none;
}

.slideActividades {
  width: 25%;
  height: 100%;
  transition: 2s;
  padding: 0 0.5%;
}

.imgSlideActividades {
  width: 100%;
  height: 100%;
  border-radius: 25px;
  object-fit: contain;
  background-size: cover;
  background-repeat: no-repeat;
  /* z-index: -1;
  background-size: cover;
  position: relative;
  object-fit: contain;
  background-repeat: no-repeat;*/
}

.slideActividades p {
  z-index: 3;
  font-size: 5rem;
  float: left;
  margin-top: -20%;
  margin-left: 3%;
  position: relative;
  font-weight: 800;
  color: white;
  font-family: Roboto;
}

.slideActividades span {
  font-weight: 600;
  font-size: large;
  font-family: Roboto;
}

.descripcionAct {
  margin: 0;
}

.navigation-manual {
  position: relative;
  width: 100%;
  display: flex;
  justify-content: center;
  margin-top: -14px;
}

.manual-btn {
  border: 2px solid #9c9e9f;
  padding: 5px;
  border-radius: 10px;
  cursor: pointer;
  transition: 1s;
  margin: auto 2%;
  background: #9c9e9f;
}

.manual-btn:hover {
  background: white;
}

#radio1:checked ~ .first {
  margin-left: 0%;
}

#radio2:checked ~ .first {
  margin-left: -25%;
}

#radio3:checked ~ .first {
  margin-left: -50%;
}

#radio4:checked ~ .first {
  margin-left: -75%;
}

/* CSS for automatic navigation*/
.navigation-auto {
  position: relative;
  display: flex;
  width: 100%;
  justify-content: center;
  margin-top: 3%;
}

.navigation-auto div {
  border: 2px solid #9c9e9f;
  padding: 5px;
  border-radius: 10px;
  transition: 5s;
  margin: auto 2%;
  background: #9c9e9f;
}

#radio1:checked ~ .auto-btn1 {
  background: white;
}

#radio2:checked ~ .auto-btn2 {
  background: white;
}

#radio3:checked ~ .auto-btn3 {
  background: white;
}

#radio4:checked ~ .auto-btn4 {
  background: white;
}

#tuExperiencia {
  z-index: 3;
  margin-top: -57.5%;
  margin-right: 5%;
  float: right;
  position: relative;
  width: 12rem;
  height: 2rem;
  background-size: contain;
}

@media only screen and (max-width: 1280px) {
  #tuExperiencia {
    width: 10rem;
    height: 1.66rem;
    transition: 0.3s;
  }

  .slideActividades p {
    font-size: 4rem;
    transition: 0.3s;
  }

  .imgSlideActividades {
    border-radius: 20px;
    transition: 0.3s;
  }

  .container-sliderActividades {
    margin-top: 15%;
    transition: 0.5s;
  }
}
@media only screen and (max-width: 720px) {
  #tuExperiencia {
    width: 8rem;
    height: 1.33rem;
    transition: 0.3s;
  }

  .slideActividades p {
    font-size: 3rem;
    transition: 0.3s;
  }

  .imgSlideActividades {
    border-radius: 15px;
    transition: 0.3s;
  }

  .slideActividades span {
    font-weight: 400;
    font-size: medium;
    transition: 0.3s;
  }

  .container-sliderActividades {
    margin-top: 20%;
    transition: 0.5s;
  }
}
@media only screen and (max-width: 480px) {
  #tuExperiencia {
    width: 6rem;
    height: 1rem;
    transition: 0.3s;
  }

  .slideActividades p {
    font-size: 2rem;
    transition: 0.3s;
  }

  .imgSlideActividades {
    border-radius: 10px;
    transition: 0.3s;
  }

  .container-sliderActividades {
    margin-top: 40%;
    transition: 0.5s;
  }

  .slideActividades span {
    font-weight: 400;
    font-size: small;
    transition: 0.3s;
  }
}
.formulario-mapas {
  margin-top: 110px;
}

.tituloGoogleMap {
  display: none;
}

.titulo-mapas {
  margin-top: 110px;
  background-color: rgb(114, 39, 137);
  height: 50px;
  position: relative;
  margin-bottom: 50px;
  width: 600px;
}
.titulo-mapas span {
  position: absolute;
  top: 10px;
  left: 25px;
  background-color: #fff;
  color: rgb(114, 39, 137);
  font-size: 3rem;
  line-height: 3rem;
  font-weight: 800;
  padding: 10px 18px;
  width: 550px;
}

.map-full-item {
  background-color: #fff;
  display: grid;
  grid-template-areas: "titulo imagen" "body imagen";
  grid-template-columns: auto;
  grid-template-rows: auto;
}
.map-full-item .imagen {
  grid-area: imagen;
  position: relative;
  object-fit: cover;
}
.map-full-item .imagen img {
  border-top-right-radius: 6px;
  border-bottom-right-radius: 6px;
  height: 130px;
  width: 200px;
}
.map-full-item .titulo {
  border-bottom-left-radius: 6px;
  border-top-left-radius: 6px;
  grid-area: titulo;
  padding-left: 10px;
  display: flex;
  flex-direction: column;
  background-color: #bf3276;
  justify-content: center;
}
.map-full-item .titulo h3 {
  margin-top: 5px;
  font-size: 1.2rem;
  font-weight: 500;
  color: #fff;
  text-transform: uppercase;
}
.map-full-item .body {
  grid-area: body;
  padding: 10px;
}
.map-full-item .body p {
  overflow: hidden;
  text-align: justify;
  margin-block-start: 0px;
  margin-block-end: 0px;
  margin-bottom: 0px;
}

@media only screen and (max-width: 770px) {
  .tituloGoogleMap {
    display: inline;
    position: relative;
    font-size: 2em;
    bottom: 40px;
    padding: 2px 40px;
    background-color: rgb(114, 39, 137);
    color: #fff;
    text-transform: uppercase;
    margin-left: 40%;
  }
}
#containerBoxMap {
  position: relative;
  width: 260px;
  height: 190px;
}

.alertBoxMap {
  font-size: 1.4em;
  font-weight: 700;
  letter-spacing: 5px;
  padding-top: 5px;
  color: #FCFCFC;
  padding-bottom: 5px;
  text-transform: uppercase;
}

.alertBoxButtonMap {
  font-size: 1em;
  font-weight: 700;
  letter-spacing: 5px;
  padding-top: 5px;
  color: #FCFCFC;
  padding-bottom: 5px;
  text-transform: uppercase;
}

.green {
  color: #09f800;
}

.blue {
  color: #0da5ff;
}

#success-box {
  position: absolute;
  width: 100%;
  height: 100%;
  background: linear-gradient(to bottom right, #40b93c 40%, #65FF5F 100%);
  border-radius: 20px;
  box-shadow: 5px 5px 20px rgba(203, 205, 211, 0.1);
  perspective: 40px;
}

#info-box {
  position: absolute;
  width: 100%;
  height: 100%;
  background: linear-gradient(to bottom right, #009FFD 40%, #73CBFF 100%);
  border-radius: 20px;
  box-shadow: 5px 5px 20px rgba(203, 205, 211, 0.1);
  perspective: 40px;
}

.radar {
  position: absolute;
  width: 20px;
  height: 20px;
  border-radius: 600px;
  background-color: black;
  left: 50%;
  top: 15%;
  z-index: 2;
  margin-top: -10px;
  margin-left: -10px;
  border-bottom: 2px solid black;
}
.radar:before, .radar:after {
  content: " ";
  position: absolute;
  top: 0;
  right: 0;
  bottom: 0;
  left: 0;
  border-radius: 600px;
  animation: pulse 2s infinite;
}
.radar:after {
  animation: pulseMapas 2s 0.3s infinite;
}

@-webkit-keyframes pulseMapas {
  0% {
    -webkit-box-shadow: 0 0 0 0 rgba(0, 0, 0, 0.5);
  }
  70% {
    -webkit-box-shadow: 0 0 0 100px rgba(0, 0, 0, 0);
  }
  100% {
    -webkit-box-shadow: 0 0 0 0 rgba(0, 0, 0, 0);
  }
}
@keyframes pulseMapas {
  0% {
    -moz-box-shadow: 0 0 0 0 rgba(0, 0, 0, 0.5);
    box-shadow: 0 0 0 0 rgba(0, 0, 0, 0.5);
  }
  70% {
    -moz-box-shadow: 0 0 0 100px rgba(0, 0, 0, 0);
    box-shadow: 0 0 0 100px rgba(0, 0, 0, 0);
  }
  100% {
    -moz-box-shadow: 0 0 0 0 rgba(0, 0, 0, 0);
    box-shadow: 0 0 0 0 rgba(0, 0, 0, 0);
  }
}
.messageBoxMap {
  position: absolute;
  width: 100%;
  text-align: center;
  height: fit-content;
  top: 30%;
}

.button-boxMap {
  position: absolute;
  background: #FCFCFC;
  width: 50%;
  height: 20%;
  border-radius: 20px;
  top: 70%;
  left: 25%;
  outline: 0;
  text-align: center;
  border: none;
  box-shadow: 2px 2px 10px rgba(119, 119, 119, 0.5);
  transition: all 0.5s ease-in-out;
}
.button-boxMap:hover {
  background: #efefef;
  transform: scale(1.05);
  transition: all 0.3s ease-in-out;
}

.redirectMapBox {
  display: block;
  background: #FCFCFC;
  margin-top: 20px;
  border-radius: 20px;
  outline: 0;
  text-align: center;
  border: none;
  box-shadow: 2px 2px 10px rgba(119, 119, 119, 0.5);
  transition: all 0.5s ease-in-out;
}
.redirectMapBox:hover {
  background: #efefef;
  transform: scale(1.05);
  transition: all 0.3s ease-in-out;
}

.redirectMapMessage {
  font-size: 1em;
  font-weight: 700;
  letter-spacing: 5px;
  padding-top: 10px;
  color: rgb(237, 15, 104);
  padding-bottom: 5px;
  text-transform: uppercase;
}

/*
    Componente Recorridos.js
*/
.Recorridos {
  position: relative;
  padding-top: 100px;
}
.Recorridos .titulo-creer {
  display: flex;
  flex-direction: column;
  justify-content: center;
  align-items: center;
  width: 700px;
}
.Recorridos .titulo-creer .reco-t-sub1 {
  font-size: 3em;
  color: rgb(114, 39, 137);
  text-transform: capitalize;
  font-weight: 600;
}
.Recorridos .titulo-creer .reco-t-sub2 {
  font-size: 2em;
  padding: 2px 15px;
  background-color: rgb(114, 39, 137);
  color: #fff;
  text-transform: uppercase;
}
.Recorridos .mancha-sup-izq {
  position: absolute;
  width: 100%;
  height: 100%;
  background-image: url("http://turismo.sanluis.gov.ar/api-turismo/public/imgs/SUP-IZQ.png");
  background-repeat: no-repeat;
}
.Recorridos .mancha-sup-der {
  position: absolute;
  right: 0px;
  width: 300px;
  height: 400px;
  background-image: url("http://turismo.sanluis.gov.ar/api-turismo/public/imgs/SUP-DER.png");
  background-repeat: no-repeat;
}
.Recorridos .mancha-inf-izq {
  bottom: 0;
  position: absolute;
  width: 400px;
  height: 230px;
  margin-bottom: -40px;
  background-image: url("http://turismo.sanluis.gov.ar/api-turismo/public/imgs/INF-IZQ.png");
  background-repeat: no-repeat;
}
.Recorridos .mancha-inf-der {
  position: absolute;
  bottom: 0;
  right: 0px;
  width: 400px;
  height: 230px;
  margin-bottom: -40px;
  background-image: url("http://turismo.sanluis.gov.ar/api-turismo/public/imgs/INF-DER.png");
  background-repeat: no-repeat;
}
.Recorridos .reco-titulo {
  display: flex;
  flex-direction: column;
  justify-content: center;
  align-items: center;
}
.Recorridos .reco-titulo .reco-t-sub1 {
  font-size: 3em;
  color: rgb(114, 39, 137);
  text-transform: capitalize;
  font-weight: 600;
}
.Recorridos .reco-titulo .reco-t-sub2 {
  font-size: 2em;
  padding: 2px 15px;
  background-color: rgb(114, 39, 137);
  color: #fff;
  text-transform: uppercase;
}
.Recorridos .reco-container-altcaminos {
  margin: 40px auto;
  max-width: 1024px;
  display: grid;
  grid-template-columns: repeat(auto-fit, 240px);
  grid-gap: 20px;
  widows: 100%;
  align-content: space-between;
  justify-content: space-around;
}
.Recorridos .reco-container-altcaminos #sierras {
  position: relative;
  height: 260px;
  width: 100%;
  cursor: pointer;
}
.Recorridos .reco-container-altcaminos #sierras .cuadro-titulo p {
  margin-block-start: 0;
  margin-block-end: 0;
  line-height: 1em;
  text-transform: uppercase;
}
.Recorridos .reco-container-altcaminos #sierras:hover {
  background-color: rgba(0, 0, 0, 0.1);
}
.Recorridos .reco-container-altcaminos #sierras .cuadro-color {
  position: absolute;
  top: 0;
  left: 0;
  height: 95%;
  display: block;
  background-color: #cb6120;
  width: 40%;
}
.Recorridos .reco-container-altcaminos #sierras img {
  position: absolute;
  top: 5px;
  left: 10px;
  z-index: 2;
  width: 200px;
  height: 200px;
  object-fit: cover;
}
.Recorridos .reco-container-altcaminos #sierras .cuadro-titulo {
  position: absolute;
  bottom: 0;
  left: 45%;
  z-index: 3;
  color: #cb6120;
  font-size: 1.5em;
  font-weight: 600;
  width: 250px;
}
.Recorridos .reco-container-altcaminos #sierras .cuadro-titulo p {
  margin-bottom: 0px;
}
.Recorridos .reco-cont-down {
  margin: 40px auto;
  max-width: 1024px;
  display: grid;
  grid-template-columns: repeat(auto-fit, 240px);
  grid-gap: 20px;
  widows: 100%;
  align-content: space-between;
  justify-content: space-around;
  padding-bottom: 60px;
}
.Recorridos .reco-cont-down #sierras {
  position: relative;
  height: 260px;
  width: 100%;
  cursor: pointer;
}
.Recorridos .reco-cont-down #sierras .cuadro-titulo p {
  margin-block-start: 0;
  margin-block-end: 0;
  line-height: 1em;
  text-transform: uppercase;
}
.Recorridos .reco-cont-down #sierras:hover {
  background-color: rgba(0, 0, 0, 0.1);
}
.Recorridos .reco-cont-down #sierras .cuadro-color {
  position: absolute;
  top: 0;
  left: 0;
  height: 95%;
  display: block;
  background-color: #cb6120;
  width: 40%;
}
.Recorridos .reco-cont-down #sierras img {
  position: absolute;
  top: 5px;
  left: 10px;
  z-index: 2;
  width: 200px;
  height: 200px;
  object-fit: cover;
}
.Recorridos .reco-cont-down #sierras .cuadro-titulo {
  position: absolute;
  bottom: 0;
  left: 45%;
  z-index: 3;
  color: #cb6120;
  font-size: 1.5em;
  font-weight: 600;
  width: 250px;
}
.Recorridos .reco-cont-down #sierras .cuadro-titulo p {
  margin-bottom: 0px;
}
.Recorridos .reco-container {
  margin: 40px auto;
  max-width: 1024px;
  display: grid;
  grid-template-columns: repeat(auto-fit, 240px);
  grid-gap: 20px;
  widows: 100%;
  align-content: space-between;
  justify-content: space-around;
}
.Recorridos .reco-container #sierras {
  position: relative;
  height: 260px;
  width: 100%;
  cursor: pointer;
}
.Recorridos .reco-container #sierras .cuadro-titulo p {
  margin-block-start: 0;
  margin-block-end: 0;
  line-height: 1em;
  text-transform: uppercase;
}
.Recorridos .reco-container #sierras:hover {
  background-color: rgba(0, 0, 0, 0.1);
}
.Recorridos .reco-container #sierras .cuadro-color {
  position: absolute;
  top: 0;
  left: 0;
  height: 95%;
  display: block;
  background-color: #cb6120;
  width: 40%;
}
.Recorridos .reco-container #sierras img {
  position: absolute;
  top: 5px;
  left: 10px;
  z-index: 2;
  width: 200px;
  height: 200px;
  object-fit: cover;
}
.Recorridos .reco-container #sierras .cuadro-titulo {
  position: absolute;
  bottom: 0;
  left: 45%;
  z-index: 3;
  color: #cb6120;
  font-size: 1.5em;
  font-weight: 600;
}
.Recorridos .reco-container #sierras .cuadro-titulo p {
  margin-bottom: 0px;
}
.Recorridos .reco-container #norte {
  position: relative;
  height: 260px;
  width: 100%;
  cursor: pointer;
}
.Recorridos .reco-container #norte .cuadro-titulo p {
  margin-block-start: 0;
  margin-block-end: 0;
  line-height: 1em;
  text-transform: uppercase;
}
.Recorridos .reco-container #norte:hover {
  background-color: rgba(0, 0, 0, 0.1);
}
.Recorridos .reco-container #norte .cuadro-color {
  position: absolute;
  top: 0;
  left: 0;
  height: 35%;
  display: block;
  background-color: #a2bd31;
  width: 100%;
}
.Recorridos .reco-container #norte img {
  position: absolute;
  top: 1%;
  right: 10px;
  z-index: 2;
  width: 200px;
  height: 200px;
}
.Recorridos .reco-container #norte .cuadro-titulo {
  position: absolute;
  bottom: 0;
  left: 30px;
  z-index: 3;
  color: #a2bd31;
  font-size: 1.5em;
  font-weight: 600;
}
.Recorridos .reco-container #norte .cuadro-titulo p {
  margin-bottom: 0px;
}
.Recorridos .reco-container #costa {
  position: relative;
  height: 260px;
  width: 100%;
  cursor: pointer;
}
.Recorridos .reco-container #costa .cuadro-titulo p {
  margin-block-start: 0;
  margin-block-end: 0;
  line-height: 1em;
  text-transform: uppercase;
}
.Recorridos .reco-container #costa:hover {
  background-color: rgba(0, 0, 0, 0.1);
}
.Recorridos .reco-container #costa .cuadro-color {
  position: absolute;
  top: 100px;
  left: 0;
  height: 35%;
  display: block;
  background-color: #326534;
  width: 100%;
}
.Recorridos .reco-container #costa img {
  position: absolute;
  top: 0;
  left: 10px;
  z-index: 2;
  width: 200px;
  height: 200px;
}
.Recorridos .reco-container #costa .cuadro-titulo {
  position: absolute;
  bottom: 0;
  left: 15px;
  z-index: 3;
  color: #326534;
  font-size: 1.5em;
  font-weight: 600;
}
.Recorridos .reco-container #costa .cuadro-titulo p {
  margin-bottom: 0px;
}
.Recorridos .reco-container #valle {
  position: relative;
  height: 260px;
  width: 100%;
  cursor: pointer;
}
.Recorridos .reco-container #valle .cuadro-titulo p {
  margin-block-start: 0;
  margin-block-end: 0;
  line-height: 1em;
  text-transform: uppercase;
}
.Recorridos .reco-container #valle:hover {
  background-color: rgba(0, 0, 0, 0.1);
}
.Recorridos .reco-container #valle .cuadro-color {
  position: absolute;
  top: 0;
  right: 0;
  height: 80%;
  display: block;
  background-color: #bf3276;
  width: 35%;
}
.Recorridos .reco-container #valle img {
  position: absolute;
  top: 1%;
  left: 0;
  z-index: 2;
  width: 200px;
  height: 200px;
}
.Recorridos .reco-container #valle .cuadro-titulo {
  position: absolute;
  bottom: 0;
  left: 0;
  z-index: 3;
  color: #bf3276;
  font-size: 1.5em;
  font-weight: 600;
}
.Recorridos .reco-container #valle .cuadro-titulo p {
  margin-bottom: 0px;
}
.Recorridos .reco-container #villa {
  position: relative;
  height: 260px;
  width: 100%;
  cursor: pointer;
}
.Recorridos .reco-container #villa .cuadro-titulo p {
  margin-block-start: 0;
  margin-block-end: 0;
  line-height: 1em;
  text-transform: uppercase;
}
.Recorridos .reco-container #villa:hover {
  background-color: rgba(0, 0, 0, 0.1);
}
.Recorridos .reco-container #villa .cuadro-color {
  position: absolute;
  top: 40%;
  right: 0;
  height: 105px;
  display: block;
  background-color: #e5b449;
  width: 100%;
}
.Recorridos .reco-container #villa img {
  position: absolute;
  top: 1%;
  left: 5%;
  z-index: 2;
  width: 200px;
  height: 200px;
}
.Recorridos .reco-container #villa .cuadro-titulo {
  position: absolute;
  bottom: 0;
  left: 5%;
  z-index: 3;
  color: #e5b449;
  font-size: 1.5em;
  font-weight: 600;
}
.Recorridos .reco-container #villa .cuadro-titulo p {
  margin-bottom: 0px;
}
.Recorridos .reco-container #huellas {
  position: relative;
  height: 260px;
  width: 100%;
  cursor: pointer;
}
.Recorridos .reco-container #huellas .cuadro-titulo p {
  margin-block-start: 0;
  margin-block-end: 0;
  line-height: 1em;
  text-transform: uppercase;
}
.Recorridos .reco-container #huellas:hover {
  background-color: rgba(0, 0, 0, 0.1);
}
.Recorridos .reco-container #huellas .cuadro-color {
  position: absolute;
  top: 0;
  right: 0;
  height: 85%;
  display: block;
  background-color: #a01127;
  width: 45%;
}
.Recorridos .reco-container #huellas img {
  position: absolute;
  top: 3%;
  left: 0;
  z-index: 2;
  width: 200px;
  height: 200px;
}
.Recorridos .reco-container #huellas .cuadro-titulo {
  position: absolute;
  bottom: 0;
  left: 0;
  z-index: 3;
  color: #a01127;
  font-size: 1.5em;
  font-weight: 600;
}
.Recorridos .reco-container #huellas .cuadro-titulo p {
  margin-bottom: 0px;
}
.Recorridos .reco-container #llanura {
  position: relative;
  height: 260px;
  width: 100%;
  cursor: pointer;
}
.Recorridos .reco-container #llanura .cuadro-titulo p {
  margin-block-start: 0;
  margin-block-end: 0;
  line-height: 1em;
  text-transform: uppercase;
}
.Recorridos .reco-container #llanura:hover {
  background-color: rgba(0, 0, 0, 0.1);
}
.Recorridos .reco-container #llanura .cuadro-color {
  position: absolute;
  top: 0;
  left: 0;
  height: 35%;
  display: block;
  background-color: #618dc5;
  width: 100%;
}
.Recorridos .reco-container #llanura img {
  position: absolute;
  top: 2%;
  left: 2%;
  z-index: 2;
  width: 200px;
  height: 200px;
}
.Recorridos .reco-container #llanura .cuadro-titulo {
  position: absolute;
  bottom: 0;
  left: 2%;
  z-index: 3;
  color: #618dc5;
  font-size: 1.5em;
  font-weight: 600;
}
.Recorridos .reco-container #llanura .cuadro-titulo p {
  margin-bottom: 0px;
}
.Recorridos .reco-container #termas {
  position: relative;
  height: 260px;
  width: 100%;
  cursor: pointer;
}
.Recorridos .reco-container #termas .cuadro-titulo p {
  margin-block-start: 0;
  margin-block-end: 0;
  line-height: 1em;
  text-transform: uppercase;
}
.Recorridos .reco-container #termas:hover {
  background-color: rgba(0, 0, 0, 0.1);
}
.Recorridos .reco-container #termas .cuadro-color {
  position: absolute;
  top: 0;
  left: 0;
  height: 90%;
  display: block;
  background-color: #5ea099;
  width: 35%;
}
.Recorridos .reco-container #termas img {
  position: absolute;
  top: 3%;
  left: 10%;
  z-index: 2;
  width: 200px;
  height: 200px;
}
.Recorridos .reco-container #termas .cuadro-titulo {
  position: absolute;
  bottom: 0;
  left: 38%;
  z-index: 3;
  color: #5ea099;
  font-size: 1.5em;
  font-weight: 600;
}
.Recorridos .reco-container #termas .cuadro-titulo p {
  margin-bottom: 0px;
}

@media only screen and (max-width: 880px) {
  .Recorridos .mancha-inf-der {
    display: none;
  }
  .Recorridos .mancha-sup-izq {
    display: none;
  }
}
@media only screen and (max-width: 970px) {
  .Recorridos .reco-container-altcaminos #sierras {
    position: relative;
    height: 260px;
    width: 100%;
    cursor: pointer;
  }
  .Recorridos .reco-container-altcaminos #sierras .cuadro-titulo p {
    margin-block-start: 0;
    margin-block-end: 0;
    line-height: 1em;
    text-transform: uppercase;
  }
  .Recorridos .reco-container-altcaminos #sierras:hover {
    background-color: rgba(0, 0, 0, 0.1);
  }
  .Recorridos .reco-container-altcaminos #sierras .cuadro-titulo {
    position: absolute;
    bottom: 0;
    left: 45%;
    z-index: 3;
    color: #cb6120;
    font-size: 1.5em;
    font-weight: 600;
    width: 200px;
  }
  .Recorridos .reco-container-altcaminos #sierras .cuadro-titulo p {
    margin-bottom: 0px;
  }
  .Recorridos .reco-cont-down #sierras {
    position: relative;
    height: 260px;
    width: 100%;
    cursor: pointer;
  }
  .Recorridos .reco-cont-down #sierras .cuadro-titulo p {
    margin-block-start: 0;
    margin-block-end: 0;
    line-height: 1em;
    text-transform: uppercase;
  }
  .Recorridos .reco-cont-down #sierras:hover {
    background-color: rgba(0, 0, 0, 0.1);
  }
  .Recorridos .reco-cont-down #sierras .cuadro-titulo {
    position: absolute;
    bottom: 0;
    left: 45%;
    z-index: 3;
    color: #cb6120;
    font-size: 1.5em;
    font-weight: 600;
    width: 200px;
  }
  .Recorridos .reco-cont-down #sierras .cuadro-titulo p {
    margin-bottom: 0px;
  }
}
@media only screen and (max-width: 771px) {
  .Recorridos .reco-container-altcaminos #sierras {
    position: relative;
    height: 260px;
    width: 100%;
    cursor: pointer;
  }
  .Recorridos .reco-container-altcaminos #sierras .cuadro-titulo p {
    margin-block-start: 0;
    margin-block-end: 0;
    line-height: 1em;
    text-transform: uppercase;
  }
  .Recorridos .reco-container-altcaminos #sierras:hover {
    background-color: rgba(0, 0, 0, 0.1);
  }
  .Recorridos .reco-container-altcaminos #sierras .cuadro-titulo {
    position: absolute;
    bottom: 0;
    left: 45%;
    z-index: 3;
    color: #cb6120;
    font-size: 1.2em;
    font-weight: 600;
    width: 100px;
  }
  .Recorridos .reco-container-altcaminos #sierras .cuadro-titulo p {
    margin-bottom: 0px;
  }
  .Recorridos .reco-cont-down #sierras {
    position: relative;
    height: 260px;
    width: 100%;
    cursor: pointer;
  }
  .Recorridos .reco-cont-down #sierras .cuadro-titulo p {
    margin-block-start: 0;
    margin-block-end: 0;
    line-height: 1em;
    text-transform: uppercase;
  }
  .Recorridos .reco-cont-down #sierras:hover {
    background-color: rgba(0, 0, 0, 0.1);
  }
  .Recorridos .reco-cont-down #sierras .cuadro-titulo {
    position: absolute;
    bottom: 0;
    left: 45%;
    z-index: 3;
    color: #cb6120;
    font-size: 1.2em;
    font-weight: 600;
    width: 100px;
  }
  .Recorridos .reco-cont-down #sierras .cuadro-titulo p {
    margin-bottom: 0px;
  }
}
@media only screen and (max-width: 580px) {
  .Recorridos .titulo-creer {
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
    width: 300px;
  }
  .Recorridos .mancha-inf-izq {
    height: 190px;
    width: 300px;
  }
}
/*
    Componente Descarga App
*/
.registro1 {
  display: none;
}

.archivosApp {
  background-color: rgb(237, 15, 104);
  background: rgb(245, 183, 25);
  background: -moz-linear-gradient(left, rgba(245, 183, 25, 0.95) 0%, rgba(223, 24, 100, 0.8) 100%);
  background: -webkit-linear-gradient(left, rgba(245, 183, 25, 0.95) 0%, rgba(223, 24, 100, 0.8) 100%);
  background: linear-gradient(to right, rgba(245, 183, 25, 0.95) 0%, rgba(223, 24, 100, 0.8) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#F5B619", endColorstr="#DF1864",GradientType=1 );
}
.archivosApp .pruebaApp {
  width: 550px;
  height: 400px;
}
.archivosApp .botonDescarga {
  width: 300px;
  height: 100px;
}
.archivosApp .flechaAbajo {
  width: 100px;
  height: 100px;
  padding-bottom: 50px;
}
.archivosApp .asistente {
  width: 450px;
  height: 750px;
  margin-bottom: 70px;
}
.archivosApp .banner {
  width: 500px;
  height: 800px;
  float: left;
  padding-bottom: 50px;
  padding-left: 150px;
}
.archivosApp .folleto {
  padding-left: 100px;
  width: 850px;
  height: 650px;
  margin-bottom: 20px;
}

.Descarga {
  background-color: rgb(237, 15, 104);
  background: rgb(245, 183, 25);
  background: -moz-linear-gradient(left, rgba(245, 183, 25, 0.95) 0%, rgba(223, 24, 100, 0.8) 100%);
  background: -webkit-linear-gradient(left, rgba(245, 183, 25, 0.95) 0%, rgba(223, 24, 100, 0.8) 100%);
  background: linear-gradient(to right, rgba(245, 183, 25, 0.95) 0%, rgba(223, 24, 100, 0.8) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#F5B619", endColorstr="#DF1864",GradientType=1 );
  height: 150px;
  width: 100%;
  display: flex;
  justify-content: space-around;
  align-items: center;
  margin-top: 100px;
  margin-bottom: 100px;
}
.Descarga img {
  width: 300px;
}
.Descarga .descarga-leyenda {
  padding-left: 6%;
  display: flex;
  align-items: center;
  color: #fff;
  cursor: pointer;
}
.Descarga .descarga-leyenda .descarga-titulos {
  display: flex;
  flex-direction: column;
  text-align: justify;
  word-break: keep-all;
}
.Descarga .descarga-leyenda .descarga-titulos .dt-1 {
  text-transform: uppercase;
  text-shadow: 1px 1px 2px #000;
  letter-spacing: 0.3rem;
  font-size: 3.5rem;
  line-height: 3.5rem;
  margin-bottom: 3px;
  font-weight: 100;
}
.Descarga .descarga-leyenda .descarga-titulos .dt-2 {
  text-transform: uppercase;
  text-shadow: 2px 2px 5px #000;
  letter-spacing: 0.08rem;
  font-size: 3rem;
  line-height: 3rem;
  margin-bottom: 3px;
  font-weight: 800;
}
.Descarga .descarga-leyenda .descarga-titulos .dt-3 {
  text-transform: lowercase;
  text-shadow: 2px 2px 5px #000;
  letter-spacing: 0.5rem;
  font-size: 1.5rem;
  line-height: 1.5rem;
  font-weight: 800;
}
.Descarga .descarga-icono i {
  font-size: 2rem;
  margin-left: 40px;
  text-shadow: 2px 2px 5px #000;
}

@media only screen and (max-width: 890px) {
  .registro1 {
    display: inline;
  }

  .registro2 {
    display: none;
  }

  .archivosApp .pruebaApp {
    width: 450px;
    height: 300px;
  }
  .archivosApp .botonDescarga {
    width: 300px;
    height: 100px;
  }
  .archivosApp .flechaAbajo {
    width: 100px;
    height: 100px;
    padding-bottom: 50px;
  }
  .archivosApp .asistente {
    width: 450px;
    height: 750px;
    margin-bottom: 70px;
  }
  .archivosApp .banner {
    width: 500px;
    height: 800px;
    float: left;
    padding-bottom: 50px;
    padding-left: 150px;
  }
  .archivosApp .folleto {
    padding-left: 0;
    width: 450px;
    height: 350px;
  }

  .Descarga {
    margin-top: 160px;
    width: 100%;
    height: auto;
    flex-direction: column;
    justify-content: center;
    align-items: center;
    padding-bottom: 10px;
  }
  .Descarga img {
    margin-top: -140px;
  }
  .Descarga .descarga-leyenda {
    flex-direction: column;
  }
  .Descarga .descarga-icono i {
    margin: 30px 0px 0px 0px;
  }
  .Descarga .contenedorAnimacion {
    margin: -5% 0 6% 0;
  }
}
@media only screen and (max-width: 500px) {
  .archivosApp .pruebaApp {
    width: 350px;
    height: 250px;
  }
  .archivosApp .botonDescarga {
    width: 300px;
    margin-bottom: 10px;
    margin-top: 20px;
    height: 90px;
  }
  .archivosApp .flechaAbajo {
    width: 100px;
    height: 100px;
    padding-bottom: 50px;
  }
  .archivosApp .asistente {
    width: 300px;
    height: 500px;
    margin-bottom: 70px;
  }
  .archivosApp .banner {
    width: 300px;
    height: 800px;
    float: left;
    padding-bottom: 50px;
    padding-left: 0px;
    margin-left: 50px;
  }
  .archivosApp .folleto {
    padding-left: 0;
    width: 350px;
    height: 400px;
  }

  .Descarga {
    margin-bottom: 40px;
  }
  .Descarga .descarga-leyenda .descarga-titulos {
    text-align: center;
  }
  .Descarga .descarga-leyenda .descarga-titulos .dt-1 {
    text-transform: uppercase;
    text-shadow: 1px 1px 2px #000;
    letter-spacing: auto;
    font-size: 2rem;
    line-height: 2rem;
    margin-bottom: 3px;
    font-weight: 100;
  }
  .Descarga .descarga-leyenda .descarga-titulos .dt-2 {
    text-transform: uppercase;
    text-shadow: 2px 2px 5px #000;
    letter-spacing: 0.08rem;
    font-size: 2.5rem;
    line-height: 2.5rem;
    margin-bottom: 3px;
    font-weight: 800;
  }
  .Descarga .descarga-leyenda .descarga-titulos .dt-3 {
    text-transform: lowercase;
    text-shadow: 2px 2px 5px #000;
    letter-spacing: 0.5rem;
    font-size: 1.5rem;
    line-height: 1.5rem;
    font-weight: 800;
  }
  .Descarga .contenedorAnimacion {
    transform: scale(1.5);
    margin: -8% 0 6% 0;
  }
}
/*-------------------------------EFECTO GOOGLE MAPS-------------------------------------*/
.contenedorAnimacion {
  transform: scale(1.9);
  margin-left: 4%;
}

.container_1 {
  position: relative;
  width: 0;
  height: 80px;
  background-image: linear-gradient(120deg, #fdfbfb 0%, #ebedee 100%);
  overflow: hidden;
  animation: show 2s linear forwards;
}
@keyframes show {
  50%, 100% {
    width: 80px;
  }
  100% {
    border-radius: 8px;
  }
}

.piece {
  position: absolute;
  width: inherit;
  height: 150%;
}
.piece:nth-child(1), .piece:nth-child(2) {
  top: -100%;
  left: -100%;
  transform: rotate(45deg);
  z-index: 1;
}
.piece:nth-child(1) {
  background: #f1df50;
  animation: move_1 0.6s 2s linear forwards;
}
@keyframes move_1 {
  100% {
    top: -55%;
    left: -30%;
  }
}
.piece:nth-child(2) {
  background: #2aa35b;
  animation: move_2 0.6s 3s linear forwards;
}
@keyframes move_2 {
  100% {
    top: -70%;
    left: -35%;
  }
}
.piece:nth-child(3) {
  height: 100%;
  left: -100%;
  bottom: -125%;
  background: #5d7eeb;
  transform: rotate(45deg);
  animation: move_3 0.6s 4s linear forwards;
}
@keyframes move_3 {
  100% {
    left: -15%;
    bottom: -65%;
  }
}
.piece:nth-child(4) {
  top: -100%;
  right: -100%;
  background: #c0bcb7;
  transform: rotate(-45deg);
  animation: move_4 0.6s 4s linear forwards;
}
@keyframes move_4 {
  100% {
    top: -54%;
    right: -54%;
  }
}

.text2 {
  position: absolute;
  top: 8%;
  left: 8%;
  width: 25px;
  height: 25px;
  border-radius: 50%;
  border: 5px solid #fbfbfb;
  border-right: 5px solid transparent;
  opacity: 0;
  z-index: 2;
  animation: text 0.8s 5.4s linear forwards;
}
@keyframes text {
  100% {
    opacity: 1;
  }
}
.text2::before, .text2::after {
  content: "";
  position: absolute;
}
.text2::before {
  width: 11px;
  height: 5px;
  background: #fbfbfb;
  top: 40%;
  right: -25%;
}
.text2::after {
  top: -35%;
  left: -35%;
  width: inherit;
  height: inherit;
  border-radius: inherit;
  border: 5px solid #fbfbfb;
  border-right: 5px solid transparent;
  transform: rotate(-50deg);
  z-index: 1;
}

.container_2 {
  position: absolute;
  width: 80px;
  height: 80px;
}

.map-marker {
  position: absolute;
  top: -300%;
  right: -10%;
  width: 38.5px;
  height: 44px;
  background: #ce4441;
  border-radius: 100%;
  opacity: 0;
  z-index: 2;
  animation: icon 0.6s 4.8s ease-out forwards;
}
@keyframes icon {
  60% {
    top: 1%;
    opacity: 1;
  }
  80% {
    top: -13%;
    opacity: 1;
  }
  100% {
    top: -6%;
    opacity: 1;
  }
}
.map-marker::before, .map-marker::after {
  content: "";
  position: absolute;
}
.map-marker::before {
  left: 5.5%;
  bottom: -40%;
  width: 2px;
  height: 0px;
  border-top: 30px solid #ce4441;
  border-left: 17px solid transparent;
  border-right: 17px solid transparent;
}
.map-marker::after {
  top: 28%;
  left: 28%;
  width: 18px;
  height: 18px;
  background: #791919;
  border-radius: 50%;
}

.thecanvas {
  position: absolute;
  width: 100%;
}

.iconSlider i {
  margin-top: 7px;
  font-size: 30px;
  color: rgb(204, 14, 90);
}
.iconSlider:hover i {
  margin-top: 15px;
  font-size: 30px;
  color: whitesmoke;
}

nav.link-list {
  position: absolute;
  left: 50%;
  transform: translateX(-50%);
  bottom: 20px;
  display: inline-block;
}
nav.link-list li {
  overflow: hidden;
  float: left;
}
nav.link-list a {
  position: relative;
  width: 12px;
  height: 12px;
  margin: 5px;
  display: inline-block;
  border-radius: 50%;
  background-color: #fff;
  transition: background-color 0.5s ease;
}
nav.link-list a.is-active {
  background-color: rgb(204, 14, 90);
}

nav.btns {
  position: absolute;
  top: 45%;
  width: 100%;
}
nav.btns button {
  position: absolute;
  display: inline-block;
  width: 44px;
  height: 44px;
  text-align: center;
  line-height: 44px;
  font-weight: bold;
  font-size: 10px;
  font-family: serif;
  border-radius: 50%;
  background-color: #fff;
  cursor: pointer;
  border: 0;
  transition: all 0.5s ease;
}
nav.btns button:focus {
  outline: 0;
}
nav.btns button:before {
  content: "";
  position: absolute;
  width: 44px;
  height: 44px;
  top: 0;
  left: 0;
  border: 2px solid rgb(204, 14, 90);
  border-radius: 50%;
  opacity: 0;
  transition: all 0.5s ease;
}
nav.btns button span {
  opacity: 0;
  transition: opacity 0.2s ease;
}
nav.btns button:hover {
  background-color: rgb(204, 14, 90);
  width: 64px;
  height: 64px;
  transform: translateY(-10px);
}
nav.btns button:hover:before {
  opacity: 1;
  width: 104px;
  height: 104px;
  top: -22px;
  left: -22px;
}
nav.btns button:hover span {
  opacity: 1;
}
nav.btns button.show-prev {
  left: 15%;
}
nav.btns button.show-next {
  right: 15%;
}

footer {
  position: absolute;
  bottom: 10px;
  right: 10px;
  font-family: sans-serif;
  color: #ccc;
  font-size: 12px;
  line-height: 12px;
}
footer a {
  color: inherit;
}

.loading-txt {
  text-align: center;
  width: 100%;
  font-size: 24px;
  position: absolute;
  top: 50%;
  transform: translateY(-50%);
}
.loading-txt.is-hidden {
  display: none;
}

.parentTirolesa {
  display: grid;
  grid-template-columns: repeat(5, 1fr);
  grid-template-rows: repeat(1, 1fr);
  grid-column-gap: 0px;
  grid-row-gap: 0px;
}

.div1Tirolesa {
  grid-area: 1/1/2/4;
}

.div2Tirolesa {
  grid-area: 1/4/2/6;
}

.div3Tirolesa {
  grid-area: 2/4/2/1;
}

/*
    Componente EventoForm.js
*/
/*
    Componente Alojamientos.js
*/
/*
.alojamientos-container {
    padding-top: 1rem;
    padding-bottom: 1rem;
    //background-color: brown;
    display: grid;
    grid-template-columns: repeat(auto-fill, $card-width);
    //grid-auto-rows: 400px;
    grid-auto-rows: auto;
    justify-content: center;
    grid-gap: 20px;
*/
.event-card {
  width: 275px;
  height: 450px;
  position: relative;
  -webkit-box-shadow: 1px 1px 10px 1px #000000;
  box-shadow: 1px 1px 10px 1px #000000;
}
.event-card:hover .img-box {
  transform: translateY(-100%) rotateX(90deg);
}
.event-card:hover .details {
  transform: translateY(0) rotateX(0deg);
}
.event-card .img-box {
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  transform-origin: bottom;
  transition: 0.5s;
  transform: translateY(0) rotateX(0deg);
}
.event-card .img-box .img-content {
  position: relative;
}
.event-card .img-box .img-content img {
  position: absolute;
  top: 0;
  left: 0;
  width: 275px;
  height: 450px;
  object-fit: scale-down;
}
.event-card .img-box .img-content .nombre {
  position: absolute;
  top: 0px;
  left: 0px;
  width: 100%;
  display: block;
  background: rgb(114, 39, 137);
  background: -moz-linear-gradient(left, rgba(114, 39, 137, 0.95) 0%, rgba(237, 15, 104, 0.8) 100%);
  background: -webkit-linear-gradient(left, rgba(114, 39, 137, 0.95) 0%, rgba(237, 15, 104, 0.8) 100%);
  background: linear-gradient(to right, rgba(114, 39, 137, 0.95) 0%, rgba(237, 15, 104, 0.8) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
  color: white;
  text-transform: uppercase;
  text-align: center;
  padding-top: 1rem;
  padding-bottom: 1rem;
  z-index: 999;
  text-shadow: 1px 1px 1px #000;
}
.event-card .img-box .img-content .fecha {
  position: absolute;
  top: 370px;
  left: 0x;
  width: 100%;
  display: block;
  background: rgb(114, 39, 137);
  background: -moz-linear-gradient(left, rgba(114, 39, 137, 0.95) 0%, rgba(237, 15, 104, 0.8) 100%);
  background: -webkit-linear-gradient(left, rgba(114, 39, 137, 0.95) 0%, rgba(237, 15, 104, 0.8) 100%);
  background: linear-gradient(to right, rgba(114, 39, 137, 0.95) 0%, rgba(237, 15, 104, 0.8) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
  color: white;
  text-transform: uppercase;
  text-align: center;
  padding-top: 1rem;
  padding-bottom: 1rem;
  z-index: 999;
  text-shadow: 1px 1px 1px #000;
}
.event-card .details {
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  background-color: rgb(114, 39, 137);
  transform-origin: top;
  transition: 0.5s;
  box-sizing: border-box;
  transform: translateY(100%) rotateX(-90deg);
}
.event-card .details .content .nombre {
  position: absolute;
  top: 0px;
  left: 0px;
  width: 100%;
  display: block;
  background: rgb(114, 39, 137);
  background: -moz-linear-gradient(left, rgba(114, 39, 137, 0.95) 0%, rgba(237, 15, 104, 0.8) 100%);
  background: -webkit-linear-gradient(left, rgba(114, 39, 137, 0.95) 0%, rgba(237, 15, 104, 0.8) 100%);
  background: linear-gradient(to right, rgba(114, 39, 137, 0.95) 0%, rgba(237, 15, 104, 0.8) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
  color: white;
  text-transform: uppercase;
  text-align: center;
  padding-top: 1rem;
  padding-bottom: 1rem;
  z-index: 999;
  text-shadow: 1px 1px 1px #000;
}
.event-card .details .content .detalles {
  margin-top: 60px;
  padding-left: 3px;
}
.event-card .details .content .detalles li {
  list-style-type: none;
  color: #fff;
  text-align: center;
}
.event-card .details .content .detalles li p {
  overflow: hidden;
  text-overflow: ellipsis;
  height: 250px;
  margin: 30px;
}
.event-card .details .content .detalles li p a {
  text-decoration: none;
  color: #fff;
}
.event-card .details .content .vermas {
  position: absolute;
  bottom: 4px;
  left: 50%;
  transform: translateX(-50%);
  color: #fff;
  font-size: 1.4rem;
  cursor: pointer;
  text-align: center;
}

/*
}
*/
.EventoForm {
  height: 900px;
  width: 100%;
  background-color: rgb(114, 39, 137);
  position: relative;
  background: rgb(245, 183, 25);
  background: -moz-linear-gradient(left, rgba(245, 183, 25, 0.95) 0%, rgba(223, 24, 100, 0.8) 100%);
  background: -webkit-linear-gradient(left, rgba(245, 183, 25, 0.95) 0%, rgba(223, 24, 100, 0.8) 100%);
  background: linear-gradient(to right, rgba(245, 183, 25, 0.95) 0%, rgba(223, 24, 100, 0.8) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#F5B619", endColorstr="#DF1864",GradientType=1 );
  row-gap: 10px;
  column-gap: 0px;
}
.EventoForm .leyenda {
  grid-area: leyenda;
  width: 0px;
  align-self: end;
  justify-self: end;
}
.EventoForm .leyenda h1 {
  color: white;
  width: 580px;
  font-size: 3.5rem;
  letter-spacing: 3px;
  text-align: center;
}
.EventoForm .right-top-bars {
  align-self: center;
  justify-self: center;
  top: 0;
  position: absolute;
  width: 100%;
  height: 100%;
  z-index: 0;
  background-image: url("http://turismo.sanluis.gov.ar/api-turismo/public/imgs/agenarribaizq.png");
  background-repeat: no-repeat;
}
.EventoForm .right-top-derecha {
  position: absolute;
  top: 0;
  right: 0px;
  width: 600px;
  height: 400px;
  z-index: 0;
  background-image: url("http://turismo.sanluis.gov.ar/api-turismo/public/imgs/agenarribader.png");
  background-repeat: no-repeat;
}
.EventoForm .bl-button {
  z-index: 20;
  position: absolute;
  margin-bottom: 10px;
  cursor: pointer;
  text-decoration: none;
  color: rgb(114, 39, 137);
  align-content: center;
  text-align: center;
  width: 100;
  height: 60px;
}
.EventoForm .bl-button span {
  font-size: 1.7rem;
  font-weight: 600;
}
.EventoForm .body-left {
  display: flex;
  justify-content: center;
  z-index: 20;
}
.EventoForm .body-right {
  grid-area: body-right;
  align-self: start;
  justify-self: start;
  color: #fff;
  width: 350px;
}
.EventoForm .right-bottom-bars {
  grid-area: right-bottom-bars;
  align-self: center;
  justify-self: center;
  bottom: 0;
  position: absolute;
  width: 100vw;
  height: 500px;
  background-image: url("http://turismo.sanluis.gov.ar/api-turismo/public/imgs/agendainfizq.png");
  background-repeat: no-repeat;
}
.EventoForm .right-bottom-izq {
  position: absolute;
  bottom: 0;
  right: 0px;
  width: 600px;
  height: 400px;
  background-image: url("http://turismo.sanluis.gov.ar/api-turismo/public/imgs/ageninfider.png");
  background-repeat: no-repeat;
}

.padreTituloAgenda {
  display: flex;
  justify-content: center;
  width: 100%;
}

.tituloAgenda {
  padding-top: 100px;
  color: white;
  z-index: 100;
}
.tituloAgenda .botonAgenda {
  margin-left: -50px;
  position: absolute;
  margin-bottom: 100px;
  cursor: pointer;
  text-decoration: none;
  color: rgb(114, 39, 137);
  align-content: center;
  text-align: center;
  width: 100px;
  height: 50px;
}
.tituloAgenda .botonAgenda span {
  font-size: 1.7rem;
  font-weight: 500;
}

@media only screen and (max-width: 768px) {
  .EventoForm {
    height: 110vh;
    width: 100%;
    row-gap: 10px;
    column-gap: 60px;
  }
  .EventoForm .right-top-derecha {
    display: none;
  }
  .EventoForm .right-bottom-izq {
    display: none;
  }
  .EventoForm .leyenda {
    align-self: start;
    justify-self: start;
  }
  .EventoForm .leyenda h1 {
    color: white;
    width: 400px;
    font-size: 1.8rem;
    letter-spacing: 3px;
    text-align: center;
  }
  .EventoForm .body-left {
    height: 200px;
    align-self: center;
    justify-self: center;
  }
  .EventoForm .body-right {
    align-self: center;
    justify-self: center;
  }
}
@media only screen and (max-width: 510px) {
  .event-card {
    width: 250px;
    height: 250px;
  }
  .event-card .img-box .img-content img {
    width: 250px;
    height: 250px;
  }
  .event-card .img-box .img-content .fecha {
    top: 170px;
  }
  .event-card .details .content .detalles li {
    list-style-type: none;
    color: #fff;
    text-align: center;
  }
  .event-card .details .content .detalles li p {
    height: 100px;
    margin: 10px;
  }

  .EventoForm {
    height: 110vh;
    width: 100%;
    row-gap: 0px;
  }
  .EventoForm .leyenda {
    align-content: center;
    align-self: start;
    justify-self: start;
    padding-left: 0;
  }
  .EventoForm .leyenda h1 {
    color: white;
    padding-left: 30px;
    width: 350px;
    font-size: 1.8rem;
    letter-spacing: 2px;
  }
  .EventoForm .padreTituloAgenda {
    display: flex;
    justify-content: center;
    width: 100%;
  }
  .EventoForm .tituloAgenda {
    padding-top: 50px;
  }
  .EventoForm .right-top-bars {
    display: none;
  }
  .EventoForm .body-left {
    height: 400px;
    width: 350px;
    padding-left: 22px;
    margin-top: -50px;
    align-self: start;
    justify-self: start;
  }
  .EventoForm .body-left .bl-button {
    margin: 10px;
    width: 90%;
    cursor: pointer;
    text-decoration: none;
    color: rgb(114, 39, 137);
  }
  .EventoForm .body-left .bl-button span {
    font-size: 1.7rem;
    font-weight: 600;
  }
  .EventoForm .body-left .bl-button svg {
    margin-top: 30px;
  }
  .EventoForm .body-left .bl-button svg .icon {
    fill: rgb(114, 39, 137);
  }
  .EventoForm .body-left .bl-img {
    width: 250px;
    height: 350px;
  }
}
/* EMPIEZA PRUEBA DE SLIDE */
/*
    Componente PEventos.js
*/
.PEventos {
  padding-top: 60px;
}

.single-card {
  min-height: 250px;
  background: #ddd;
}

.overlay {
  position: absolute;
  width: 100%;
  height: 100%;
  background: #98BE13;
  top: 0;
  left: 0;
  color: #fff;
  display: flex;
  flex-direction: column;
  justify-content: space-between;
  padding: 25px;
  opacity: 0;
  visibility: hidden;
  transition: 0.3s;
}

.single-card:hover .overlay {
  opacity: 1;
  visibility: visible;
}

.overlay h4 {
  font-size: 18px;
  font-weight: 200;
  margin-bottom: 5px;
}

.overlay h3 {
  font-size: 36px;
  font-weight: 600;
  text-shadow: 1px 1px 5px rgba(0, 0, 0, 0.5);
  margin-bottom: 0;
}

.overlay h2 {
  font-size: 30px;
  font-weight: 300;
  margin-bottom: 5px;
}

.overlay a {
  color: #fff;
  font-size: 24px;
  display: block;
  text-align: right;
  text-transform: capitalize;
  font-weight: 500;
}

.card-content h2 {
  font-weight: 700;
  color: #fff;
  text-transform: uppercase;
  font-size: 26px;
  padding: 0 15px;
  text-shadow: 1px 2px 5px rgba(0, 0, 0, 0.5);
}

.card-content h3 {
  font-size: 24px;
  color: #fff;
  text-transform: uppercase;
  font-weight: 300;
  background: #000;
  padding: 5px 15px;
  margin: 0;
}

.single-card {
  display: flex;
  align-items: flex-end;
  padding-bottom: 25px;
  position: relative;
  z-index: 1;
  margin-top: 30px;
}

.card-bg {
  position: absolute;
  height: 100%;
  width: 100%;
  background: #ccc;
  left: 0;
  top: 0;
  z-index: -1;
  background-color: #4B125C;
  background-size: cover;
  background-position: center;
  background-repeat: no-repeat;
}

.card-bg:after {
  content: "";
  height: 100%;
  width: 100%;
  position: absolute;
  left: 0;
  top: 0;
  opacity: 0.7;
  z-index: -2;
  background: -moz-linear-gradient(left, rgba(115, 13, 126, 0.65) 0%, rgba(197, 1, 105, 0.25) 100%);
  /* FF3.6-15 */
  background: -webkit-linear-gradient(left, rgba(115, 13, 126, 0.65) 0%, rgba(197, 1, 105, 0.25) 100%);
  /* Chrome10-25,Safari5.1-6 */
  background: linear-gradient(to right, rgba(115, 13, 126, 0.65) 0%, rgba(197, 1, 105, 0.25) 100%);
  /* W3C, IE10+, FF16+, Chrome26+, Opera12+, Safari7+ */
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#a6730d7e", endColorstr="#40c50169",GradientType=1 );
  /* IE6-9 */
}

.cbg-1 {
  background-image: url("https://source.unsplash.com/random/640x480");
}

.cbg-2 {
  background-image: url("https://source.unsplash.com/random/640x480");
}

.cbg-3 {
  background-image: url("https://source.unsplash.com/random/640x480");
}

.cbg-4 {
  background-image: url("https://source.unsplash.com/random/640x480");
}

.cbg-5 {
  background-image: url("https://source.unsplash.com/random/640x480");
}

.cbg-6 {
  background-image: url("https://source.unsplash.com/random/640x480");
}

.cbg-7 {
  background-image: url("https://source.unsplash.com/random/640x480");
}

h3.bgc_1 {
  background: #E76114;
}

h3.bgc_2 {
  background: #458EC9;
}

h3.bgc_3 {
  background: #00652E;
}

h3.bgc_4 {
  background: #F6B63E;
}

/*
    Componente PEvento.js
*/
#desHTML {
  font-size: 1.2em;
}

.evento-titulo {
  text-transform: uppercase;
  font-weight: 800;
  font-size: 36px;
  color: #fff;
}

.evento-descripcion {
  color: #fff;
  font-weight: 300;
  font-size: 1.3rem;
}

.evento-data li {
  font-size: 1.3em;
  list-style-type: none;
  color: #fff;
  margin-bottom: 5px;
}
.evento-data li i {
  color: rgb(114, 39, 137);
}

/*
    Componente PNovedad.js
*/
.PNovedad {
  padding-top: 110px;
}
.PNovedad .n-titulo {
  background-color: rgb(114, 39, 137);
  height: 50px;
  position: relative;
  margin-bottom: 50px;
}
.PNovedad .n-titulo span {
  position: absolute;
  top: 15px;
  left: 10px;
  background-color: #fff;
  color: rgb(114, 39, 137);
  font-size: 2rem;
  line-height: 2rem;
  font-weight: 400;
  padding: 10px 18px;
  text-transform: uppercase;
}

.novedad-item {
  display: grid;
  grid-template-areas: "imagen titulo" "imagen body";
  grid-template-columns: 300px auto;
  grid-template-rows: 75px auto;
  /*
  .pie {
      grid-area: pie;
      display: flex;
      justify-content: flex-start;
      align-items: flex-end;
      padding-left: 10px;
      .btn-novedades {
          background-color: $color-uno;
          padding: 0 8px;
          color: #fff;
      }
  }
  */
}
.novedad-item .imagen {
  grid-area: imagen;
  position: relative;
  object-fit: cover;
}
.novedad-item .imagen span {
  margin: 5px;
  position: absolute;
  top: 0;
  left: 0;
  width: 80%;
  background-color: #bf3276;
  padding: 4px;
  text-align: center;
  text-transform: uppercase;
  color: #fff;
}
.novedad-item .titulo {
  grid-area: titulo;
  padding-left: 10px;
  display: flex;
  flex-direction: column;
  background-color: #bf3276;
  justify-content: center;
}
.novedad-item .titulo h3 {
  margin-bottom: 0;
  font-size: 1.75rem;
  font-weight: 500;
  line-height: 1.2;
  color: #fff;
  text-transform: uppercase;
}
.novedad-item .body {
  grid-area: body;
  padding: 10px;
}
.novedad-item .body p {
  overflow: hidden;
  text-align: justify;
  margin-block-start: 0px;
  margin-block-end: 0px;
  margin-bottom: 0px;
}
.novedad-item .body .SocialMediaShareButton {
  width: 32px;
}
.novedad-item .body .btn-novedades {
  background-color: rgb(114, 39, 137);
  padding: 0 8px;
  color: #fff;
  /*
  -webkit-border-radius: 8px;
  border-radius: 8px;
  */
}

@media only screen and (max-width: 370px) {
  .novedad-item .titulo h3 {
    font-size: 1.2rem;
    font-weight: 500;
    line-height: 1;
  }
}
@media only screen and (max-width: 700px) {
  .Novedad {
    padding-top: 180px;
  }
}
@media only screen and (max-width: 990px) {
  .novedad-item {
    grid-template-areas: "titulo" "imagen" "body" "pie";
    grid-template-columns: 1fr;
    grid-template-rows: repeat(4, auto);
  }
  .novedad-item .imagen {
    justify-self: center;
  }
}
/*
    Componente Novedades.js
*/
.Novedades {
  margin-top: 20px;
}
.Novedades .novedades-leyenda {
  cursor: pointer;
  display: flex;
  justify-content: center;
  align-items: center;
}
.Novedades .novedades-leyenda span {
  margin: 10px 0 1px 0;
  font-size: 2em;
  padding: 2px 15px;
  background-color: rgb(114, 39, 137);
  color: #fff;
  text-transform: uppercase;
}
@media screen and (max-width: 396px) {
  .Novedades {
    margin-top: 60px;
  }
}

.blog-slider {
  width: 95%;
  position: relative;
  max-width: 100vw;
  margin: 60px;
  background: #fff;
  box-shadow: 0 14px 28px rgba(0, 0, 0, 0.25), 0 10px 10px rgba(0, 0, 0, 0.22);
  padding: 25px;
  border-radius: 25px;
  height: 420px;
  transition: all 0.3s;
}
@media screen and (max-width: 992px) {
  .blog-slider {
    max-width: 680px;
    height: 450px auto;
  }
}
@media screen and (max-width: 768px) {
  .blog-slider {
    min-height: 750px auto;
    height: 750px;
    margin: 60px 0 20px 0;
  }
}
@media screen and (max-height: 500px) and (min-width: 992px) {
  .blog-slider {
    height: 350px;
  }
}
.blog-slider__item {
  display: flex;
  align-items: center;
  padding-left: 100px;
}
@media screen and (max-width: 768px) {
  .blog-slider__item {
    flex-direction: column;
    padding: 200px 0 0 0;
  }
}
.blog-slider__item.swiper-slide-active .blog-slider__img img {
  opacity: 1;
  transition-delay: 0.3s;
}
.blog-slider__item.swiper-slide-active .blog-slider__content > * {
  opacity: 1;
  transform: none;
}
.blog-slider__item.swiper-slide-active .blog-slider__content > *:nth-child(1) {
  transition-delay: 0.3s;
}
.blog-slider__item.swiper-slide-active .blog-slider__content > *:nth-child(2) {
  transition-delay: 0.4s;
}
.blog-slider__item.swiper-slide-active .blog-slider__content > *:nth-child(3) {
  transition-delay: 0.5s;
}
.blog-slider__item.swiper-slide-active .blog-slider__content > *:nth-child(4) {
  transition-delay: 0.6s;
}
.blog-slider__item.swiper-slide-active .blog-slider__content > *:nth-child(5) {
  transition-delay: 0.7s;
}
.blog-slider__item.swiper-slide-active .blog-slider__content > *:nth-child(6) {
  transition-delay: 0.8s;
}
.blog-slider__item.swiper-slide-active .blog-slider__content > *:nth-child(7) {
  transition-delay: 0.9s;
}
.blog-slider__item.swiper-slide-active .blog-slider__content > *:nth-child(8) {
  transition-delay: 1s;
}
.blog-slider__item.swiper-slide-active .blog-slider__content > *:nth-child(9) {
  transition-delay: 1.1s;
}
.blog-slider__item.swiper-slide-active .blog-slider__content > *:nth-child(10) {
  transition-delay: 1.2s;
}
.blog-slider__item.swiper-slide-active .blog-slider__content > *:nth-child(11) {
  transition-delay: 1.3s;
}
.blog-slider__item.swiper-slide-active .blog-slider__content > *:nth-child(12) {
  transition-delay: 1.4s;
}
.blog-slider__item.swiper-slide-active .blog-slider__content > *:nth-child(13) {
  transition-delay: 1.5s;
}
.blog-slider__item.swiper-slide-active .blog-slider__content > *:nth-child(14) {
  transition-delay: 1.6s;
}
.blog-slider__item.swiper-slide-active .blog-slider__content > *:nth-child(15) {
  transition-delay: 1.7s;
}
.blog-slider__img {
  width: 400px;
  flex-shrink: 0;
  height: 420px;
  background: rgb(114, 39, 137);
  background: -moz-linear-gradient(left, rgb(114, 39, 137) 0%, rgba(237, 15, 104, 0.8) 100%);
  background: -webkit-linear-gradient(left, rgb(114, 39, 137) 0%, rgba(237, 15, 104, 0.8) 100%);
  background: linear-gradient(to right, rgb(114, 39, 137) 0%, rgba(237, 15, 104, 0.8) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
  box-shadow: 0 14px 28px rgba(0, 0, 0, 0.25), 0 10px 10px rgba(0, 0, 0, 0.22);
  border-radius: 20px;
  transform: translateX(-80px);
  margin-left: -20px;
  overflow: hidden;
}
.blog-slider__img:after {
  content: "";
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  background-image: linear-gradient(147deg, #fe8a39 0%, #fd3838 74%);
  border-radius: 20px;
  opacity: 0;
  visibility: hidden;
}
.blog-slider__img img {
  width: 100%;
  height: 100%;
  object-fit: cover;
  display: block;
  opacity: 0;
  border-radius: 20px;
  transition: all 0.3s;
}
@media screen and (max-width: 992px) {
  .blog-slider__img {
    width: 45%;
    height: 62%;
  }
}
@media screen and (max-width: 768px) {
  .blog-slider__img {
    transform: translateY(-50%);
    width: 55%;
    height: 54%;
  }
}
@media screen and (max-width: 576px) {
  .blog-slider__img {
    width: 95%;
  }
}
@media screen and (max-height: 500px) and (min-width: 992px) {
  .blog-slider__img {
    height: 270px;
  }
}
.blog-slider__content {
  padding-right: 25px;
}
@media screen and (max-width: 992px) {
  .blog-slider__content {
    width: 100%;
  }
}
@media screen and (max-width: 768px) {
  .blog-slider__content {
    margin-top: -80px;
    text-align: center;
    padding: 0 30px;
  }
}
@media screen and (max-width: 576px) {
  .blog-slider__content {
    padding: 0;
  }
}
.blog-slider__content > * {
  opacity: 0;
  transform: translateY(25px);
  transition: all 0.4s;
}
.blog-slider__code {
  color: #7b7992;
  margin-bottom: 15px;
  display: block;
  font-weight: 500;
}
.blog-slider__title {
  font-size: 24px;
  font-weight: 700;
  color: #0d0925;
  margin-bottom: 15px;
}
.blog-slider__text {
  color: #4e4a67;
  margin-bottom: 15px;
  line-height: 1.5em;
}
.blog-slider__button {
  background: rgb(114, 39, 137);
  background: -moz-linear-gradient(left, rgb(114, 39, 137) 0%, rgba(237, 15, 104, 0.8) 100%);
  background: -webkit-linear-gradient(left, rgb(114, 39, 137) 0%, rgba(237, 15, 104, 0.8) 100%);
  background: linear-gradient(to right, rgb(114, 39, 137) 0%, rgba(237, 15, 104, 0.8) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
  display: inline-flex;
  padding: 10px 20px;
  border-radius: 10px;
  color: #fff;
  box-shadow: 0px 14px 80px rgba(252, 56, 56, 0.4);
  text-decoration: none;
  font-weight: 500;
  justify-content: center;
  text-align: center;
  letter-spacing: 1px;
}
@media screen and (max-width: 576px) {
  .blog-slider__button {
    width: 100%;
  }
}
.blog-slider .swiper-container-horizontal > .swiper-pagination-bullets,
.blog-slider .swiper-pagination-custom,
.blog-slider .swiper-pagination-fraction {
  bottom: 10px;
  left: 0;
  width: 100%;
}
.blog-slider__pagination {
  position: absolute;
  z-index: 21;
  right: 20px;
  width: 11px !important;
  text-align: center;
  left: auto !important;
  top: 50%;
  bottom: auto !important;
  transform: translateY(-50%);
  /*@media screen and (max-width: 768px) {
    transform: translateX(-50%);
    left: 50%!important;
    top: 205px;
    width: 100%!important;
    display: flex;
    justify-content: center;
    align-items: center;
  }*/
}
.blog-slider__pagination.swiper-pagination-bullets .swiper-pagination-bullet {
  margin: 8px 0;
  /*@media screen and (max-width: 768px) {
    margin: 0 5px;
  }*/
}
.blog-slider__pagination .swiper-pagination-bullet {
  width: 11px;
  height: 11px;
  display: block;
  border-radius: 10px;
  background: #062744;
  opacity: 0.2;
  transition: all 0.3s;
}
.blog-slider__pagination .swiper-pagination-bullet-active {
  background: rgb(114, 39, 137);
  background: -moz-linear-gradient(left, rgb(114, 39, 137) 0%, rgb(237, 15, 104) 100%);
  background: -webkit-linear-gradient(left, rgb(114, 39, 137) 0%, rgb(237, 15, 104) 100%);
  background: linear-gradient(to right, rgb(114, 39, 137) 0%, rgb(237, 15, 104) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
  border-radius: 10px;
  opacity: 1;
  height: 30px;
  box-shadow: 0px 0px 20px rgba(252, 56, 56, 0.3);
  /*@media screen and (max-width: 768px) {
    height: 11px;
    width: 30px;
  }*/
}

/*
    Componente Novedadesfull.js
*/
.Novedadesfull {
  padding-top: 110px;
}
.Novedadesfull .nf-titulo {
  background-color: rgb(114, 39, 137);
  height: 50px;
  position: relative;
  margin-bottom: 50px;
  width: 285px;
}
.Novedadesfull .nf-titulo span {
  position: absolute;
  top: 10px;
  left: 10px;
  background-color: #fff;
  color: rgb(114, 39, 137);
  font-size: 3rem;
  line-height: 3rem;
  font-weight: 800;
  padding: 0px 8px;
}

.novedad-full-item {
  display: grid;
  grid-template-areas: "imagen titulo" "imagen body";
  grid-template-columns: 300px auto;
  grid-template-rows: 75px auto;
  /*
  .pie {
      grid-area: pie;
      display: flex;
      justify-content: flex-start;
      align-items: flex-end;
      padding-left: 10px;
      .btn-novedades {
          background-color: $color-uno;
          padding: 0 8px;
          color: #fff;
      }
  }
  */
}
.novedad-full-item .imagen {
  grid-area: imagen;
  position: relative;
  object-fit: cover;
}
.novedad-full-item .imagen span {
  margin: 5px;
  position: absolute;
  top: 0;
  left: 0;
  width: 80%;
  background-color: #bf3276;
  padding: 4px;
  text-align: center;
  text-transform: uppercase;
  color: #fff;
}
.novedad-full-item .titulo {
  grid-area: titulo;
  padding-left: 10px;
  display: flex;
  flex-direction: column;
  background-color: #bf3276;
  justify-content: center;
}
.novedad-full-item .titulo h3 {
  margin-bottom: 0;
  font-size: 1.75rem;
  font-weight: 500;
  line-height: 1.2;
  color: #fff;
  text-transform: uppercase;
}
.novedad-full-item .body {
  grid-area: body;
  padding: 10px;
}
.novedad-full-item .body p {
  overflow: hidden;
  text-align: justify;
  margin-block-start: 0px;
  margin-block-end: 0px;
  margin-bottom: 0px;
}
.novedad-full-item .body .btn-novedades {
  background-color: rgb(114, 39, 137);
  padding: 0 8px;
  color: #fff;
  /*
  -webkit-border-radius: 8px;
  border-radius: 8px;
  */
}

@media only screen and (max-width: 370px) {
  .novedad-full-item .titulo h3 {
    font-size: 1.2rem;
    font-weight: 500;
    line-height: 1;
  }
}
@media only screen and (max-width: 700px) {
  .Novedadesfull {
    padding-top: 180px;
  }
}
@media only screen and (max-width: 990px) {
  /*
  .Novedadesfull {
      .nf-body {
          .nf-novedad {
              flex-direction: column;
              .nf-novedad-left {
                  position: fixed;
              }
          }

      }
  }
  */
  .novedad-full-item {
    grid-template-areas: "titulo" "imagen" "body" "pie";
    grid-template-columns: 1fr;
    grid-template-rows: repeat(4, auto);
  }
  .novedad-full-item .imagen {
    justify-self: center;
  }
}
/*
    Componente Novedadesfull.js
*/
.Arbolesfull {
  padding-top: 110px;
}
.Arbolesfull .nf-titulo {
  background-color: rgb(114, 39, 137);
  height: 50px;
  position: relative;
  margin-bottom: 50px;
  width: 285px;
}
.Arbolesfull .nf-titulo span {
  position: absolute;
  top: 10px;
  left: 10px;
  background-color: #fff;
  color: rgb(114, 39, 137);
  font-size: 3rem;
  line-height: 3rem;
  font-weight: 800;
  padding: 0px 8px;
}

.arbol-full-item {
  display: grid;
  grid-template-areas: "imagen titulo" "imagen body";
  grid-template-columns: 300px auto;
  grid-template-rows: 75px auto;
  /*
  .pie {
      grid-area: pie;
      display: flex;
      justify-content: flex-start;
      align-items: flex-end;
      padding-left: 10px;
      .btn-novedades {
          background-color: $color-uno;
          padding: 0 8px;
          color: #fff;
      }
  }
  */
}
.arbol-full-item .imagen {
  grid-area: imagen;
  position: relative;
  object-fit: cover;
}
.arbol-full-item .imagen span {
  margin: 5px;
  position: absolute;
  top: 0;
  left: 0;
  width: 80%;
  background-color: #bf3276;
  padding: 4px;
  text-align: center;
  text-transform: capitalize;
  color: #fff;
}
.arbol-full-item .titulo {
  grid-area: titulo;
  padding-left: 10px;
  display: flex;
  flex-direction: column;
  background-color: #bf3276;
  justify-content: center;
}
.arbol-full-item .titulo h3 {
  margin-bottom: 0;
  font-size: 1.75rem;
  font-weight: 500;
  line-height: 1.2;
  color: #fff;
  text-transform: capitalize;
}
.arbol-full-item #nombre-cientifico {
  font-style: italic;
  text-transform: capitalize;
}
.arbol-full-item .body {
  grid-area: body;
  padding: 10px;
}
.arbol-full-item .body p {
  overflow: hidden;
  text-align: justify;
  margin-block-start: 0px;
  margin-block-end: 0px;
  margin-bottom: 0px;
}
.arbol-full-item .body .btn-arboles {
  background-color: rgb(114, 39, 137);
  padding: 0 8px;
  color: #fff;
  /*
  -webkit-border-radius: 8px;
  border-radius: 8px;
  */
}

@media only screen and (max-width: 370px) {
  .arbol-full-item .titulo h3 {
    font-size: 1.2rem;
    font-weight: 500;
    line-height: 1;
  }
}
@media only screen and (max-width: 700px) {
  .Arbolesfull {
    padding-top: 180px;
  }
}
@media only screen and (max-width: 990px) {
  /*
  .Novedadesfull {
      .nf-body {
          .nf-novedad {
              flex-direction: column;
              .nf-novedad-left {
                  position: fixed;
              }
          }

      }
  }
  */
  .arbol-full-item {
    grid-template-areas: "titulo" "imagen" "body" "pie";
    grid-template-columns: 1fr;
    grid-template-rows: repeat(4, auto);
  }
  .arbol-full-item .imagen {
    justify-self: center;
  }
}
/*
    Componente PNovedad.js
*/
.PArbol {
  padding-top: 110px;
}
.PArbol .n-titulo {
  background-color: rgb(114, 39, 137);
  height: 50px;
  position: relative;
  margin-bottom: 50px;
}
.PArbol .n-titulo span {
  position: absolute;
  top: 15px;
  left: 10px;
  background-color: #fff;
  color: rgb(114, 39, 137);
  font-size: 2rem;
  line-height: 2rem;
  font-weight: 400;
  padding: 10px 18px;
  text-transform: capitalize;
}

.arbol-item {
  display: grid;
  grid-template-areas: "imagen titulo" "imagen body";
  grid-template-columns: 300px auto;
  grid-template-rows: 75px auto;
}
.arbol-item .imagen {
  grid-area: imagen;
  position: relative;
  object-fit: cover;
}
.arbol-item .imagen span {
  margin: 5px;
  position: absolute;
  top: 0;
  left: 0;
  width: 80%;
  background-color: #bf3276;
  padding: 4px;
  text-align: center;
  text-transform: uppercase;
  color: #fff;
}
.arbol-item .titulo {
  grid-area: titulo;
  padding-left: 10px;
  display: flex;
  flex-direction: column;
  background-color: #bf3276;
  justify-content: center;
}
.arbol-item .titulo h3 {
  margin-bottom: 0;
  font-size: 1.75rem;
  font-weight: 500;
  line-height: 1.2;
  color: #fff;
  text-transform: capitalize;
}
.arbol-item .body {
  grid-area: body;
  padding: 10px;
}
.arbol-item .body p {
  overflow: hidden;
  text-align: justify;
  margin-block-start: 0px;
  margin-block-end: 0px;
  margin-bottom: 0px;
}
.arbol-item .body .SocialMediaShareButton {
  width: 32px;
}
.arbol-item .body .btn-novedades {
  background-color: rgb(114, 39, 137);
  padding: 0 8px;
  color: #fff;
}

@media only screen and (max-width: 370px) {
  .novedad-item .titulo h3 {
    font-size: 1.2rem;
    font-weight: 500;
    line-height: 1;
  }
}
@media only screen and (max-width: 700px) {
  .Novedad {
    padding-top: 180px;
  }
}
@media only screen and (max-width: 990px) {
  .novedad-item {
    grid-template-areas: "titulo" "imagen" "body" "pie";
    grid-template-columns: 1fr;
    grid-template-rows: repeat(4, auto);
  }
  .novedad-item .imagen {
    justify-self: center;
  }
}
.header-gallery {
  background: linear-gradient(to right, #722789 0%, rgba(237, 15, 104, 0.8) 100%);
  margin-bottom: 1rem;
}

.gallery-search {
  background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADAAAAAwCAYAAABXAvmHAAAABmJLR0QA/wD/AP+gvaeTAAAB7UlEQVRoge2YQUtUURiG3+N/CIrcTEJtGxcSlIgQRCsFQ2HoR/gDhNr6b0paZkRB5iZ0pdIiUCQKEURErORpce/gEHPPzP3OnHskzrN/v/s+58y9czhSJpPJpMRZg4CTNClpTtK0pFuSxiWNSTqW9FXSZ0lrzrmN8KojAnDAIrDH8OwCHWAsdfkJYLNG8X/5BNxJVX4WOAoo3+UEmE1R/tcIync5Bx43Vb4F/Bxh+S7HwETs8o6w3/wgPlB8zaIJLEYs36UT0rHSvlyZXUl3Qx4wBFvOubY17PsuTyp+eUm6D0xZwz6BeetQA0+sQZ/AI+tQA9PWoE/gtnWogZY16BO4aR1q4IY1mPZwdcWlNegT+G4dauDEGvQJHFqHGtizBn0CH61DDWxagz6B19ahBt5Yg4OOEjuS7lmHD8m2pLZzDku4cgfKgSvWVjVYtZYfCMVxeiPiSfQ9gcdp7/9AuTIdSUchD/HwKtrq9wLMABcRduA3sBRdoJR4CPyIIPEHeN6URIviasTKO2CZYuV7aXQnHLAA7NQo/oXiYsuVM5aSSvTItIGXwHopdAqcAd+At8AL4EFF9npIhAA86yPR3DsxCrLEdeF/kah6sZu8IQmjQuIgda9a9JHYT92pNsA8cADsA09T98lkMpn+/AXa2kep5N/5DQAAAABJRU5ErkJggg==) no-repeat 5%;
  padding-left: 35px;
  background-size: 20px;
  height: 40px;
  border-radius: 18px;
  font-size: 16px;
  background-color: rgba(255, 255, 255, 0.6);
  font-weight: bold;
  font-family: inherit;
  margin: 1rem;
}

.gallery-title {
  font-size: 2rem;
  color: rgba(255, 255, 255, 0.7);
  float: right;
  position: relative;
  font-weight: 600;
  font-family: "Roboto";
  font-style: italic;
  margin: 1rem;
}

/* Falta agregar responsive media querys */
/*
    Componente PZona.js
*/
.Zona {
  padding-top: 110px;
}

.carousel-inner .carousel-item h5 {
  text-align: center;
  color: white;
  text-shadow: 1px 1px 1px #000000;
  text-transform: capitalize;
}
.carousel-inner .carousel-item h5.pd-top {
  padding-top: 190px;
}

.ZonaDetalle-titulo {
  display: block;
  width: 100%;
  height: 50px;
  position: relative;
  top: 10px;
  margin-bottom: 40px;
}
.ZonaDetalle-titulo h3 {
  position: absolute;
  top: 20px;
  left: 20px;
  background-color: #fff;
  text-transform: uppercase;
  padding: 8px;
  font-weight: bold;
}

.ZonaDetalle-Body {
  display: grid;
  grid-template-areas: "mapasl texto mapa imagenes";
  grid-template-columns: 75px 2fr 1fr 75px;
  grid-template-rows: auto;
  grid-gap: 10px;
  padding-left: 20px;
  padding-right: 20px;
}
.ZonaDetalle-Body #mapasl {
  grid-area: mapasl;
}
.ZonaDetalle-Body #texto {
  grid-area: texto;
}
.ZonaDetalle-Body #texto div h4, .ZonaDetalle-Body #texto div h5 {
  text-transform: uppercase;
}
.ZonaDetalle-Body #texto div .text-links a {
  font-size: 1.3rem;
}
.ZonaDetalle-Body #mapa {
  grid-area: mapa;
}
.ZonaDetalle-Body #imagenes {
  grid-area: imagenes;
  display: flex;
  flex-direction: column;
  justify-content: center;
}
.ZonaDetalle-Body #imagenes img {
  border: 1px solid;
  width: 75px;
  height: 75px;
  object-fit: cover;
  cursor: pointer;
}

@media only screen and (max-width: 770px) {
  .ZonaDetalle-Body {
    grid-template-areas: "mapasl mapa" "texto texto" "imagenes imagenes";
    grid-template-columns: 75px 1fr;
    grid-template-rows: auto;
  }

  #imagenes {
    flex-direction: row !important;
    flex-wrap: wrap;
  }
  #imagenes img {
    width: 75px;
    height: 75px;
    margin-bottom: 10px;
  }
}
/*
    Componente PLocalidad.js
*/
.ZonaLocalidad-titulo {
  display: block;
  width: 100%;
  top: 10px;
  height: 50px;
  position: relative;
  margin-bottom: 60px;
}
.ZonaLocalidad-titulo h3 {
  position: absolute;
  top: 20px;
  left: 20px;
  background-color: #fff;
  text-transform: uppercase;
  padding: 8px;
  font-weight: bold;
  font-size: 3rem;
}

.ZonaLocalidad-Body {
  display: grid;
  grid-template-areas: "video texto" "atractivos texto" "mapa imperdibles";
  grid-template-columns: repeat(2, 1fr);
  grid-template-rows: auto;
  grid-gap: 30px;
  padding-left: 20px;
  padding-right: 20px;
}
.ZonaLocalidad-Body #video {
  grid-area: video;
}
.ZonaLocalidad-Body #texto {
  grid-area: texto;
  align-self: flex-start;
  justify-self: center;
}
.ZonaLocalidad-Body #texto p {
  font-style: italic;
  font-size: 1.3rem;
}
.ZonaLocalidad-Body #atractivos {
  grid-area: atractivos;
}
.ZonaLocalidad-Body #atractivos .all-link {
  cursor: pointer;
  color: #fff;
  display: grid;
  grid-template-areas: "al-nombre al-boton" "al-texto al-boton";
  grid-template-columns: repeat(auto-fit, minmax(100px, 1fr));
  grid-template-rows: auto;
  padding-left: 8px;
  -webkit-border-radius: 8px;
  border-radius: 8px;
  width: fit-content;
}
.ZonaLocalidad-Body #atractivos .all-link .al-nombre {
  grid-area: al-nombre;
  font-size: 1.4rem;
}
.ZonaLocalidad-Body #atractivos .all-link .al-texto {
  grid-area: al-texto;
  font-size: 1.4rem;
}
.ZonaLocalidad-Body #atractivos .all-link .al-boton {
  grid-area: al-boton;
  align-self: center;
  font-size: 2rem;
  padding-left: 12px;
}
.ZonaLocalidad-Body #mapa {
  grid-area: mapa;
}
.ZonaLocalidad-Body #imperdibles {
  grid-area: imperdibles;
  position: relative;
}
.ZonaLocalidad-Body #imperdibles .imp-titulo {
  position: absolute;
  margin-top: -20px;
  padding: 0 20px 0 5px;
  margin-left: 20px;
  background-color: #fff;
}
.ZonaLocalidad-Body #imperdibles .imp-titulo h3 {
  text-transform: uppercase;
  color: #fff;
  font-weight: bold;
}
.ZonaLocalidad-Body #imperdibles .imp-body-wrap {
  margin: 40px 20px;
}
.ZonaLocalidad-Body #imperdibles .imp-body-wrap a {
  text-decoration: none;
  color: #fff;
}
.ZonaLocalidad-Body #imperdibles .imp-body-wrap a .imp-body {
  padding: 8px;
  cursor: pointer;
}
.ZonaLocalidad-Body #imperdibles .imp-body-wrap a .imp-body h5 {
  text-transform: uppercase;
}
.ZonaLocalidad-Body #imperdibles .imp-body-wrap a .imp-body p {
  max-height: 145px;
  overflow: hidden;
}
.ZonaLocalidad-Body #imperdibles .imp-body-wrap a .imp-body:hover {
  background-color: rgba(0, 0, 0, 0.3);
}

@media only screen and (max-width: 770px) {
  .ZonaLocalidad-Body {
    grid-template-areas: "video" "texto" "atractivos" "mapa" "imperdibles";
    grid-template-columns: 1fr;
    grid-template-rows: auto;
    /*
    grid-gap: 30px;
    padding-left: 20px;
    padding-right: 20px;
    */
  }
}
/*
    Componente PAtractivo.js
*/
.Atractivo-data {
  display: grid;
  grid-template-areas: "atractivo-texto atractivo-fotos" "atractivo-ubicacion atractivo-info";
  grid-template-columns: repeat(2, 1fr);
  grid-template-rows: auto;
  grid-gap: 20px;
}
.Atractivo-data .atractivo-texto {
  grid-area: atractivo-texto;
}
.Atractivo-data .atractivo-fotos {
  grid-area: atractivo-fotos;
  display: grid;
  flex-wrap: wrap;
  justify-content: center;
  align-items: center;
  background-color: rgb(114, 39, 137);
  padding: 20px 20px;
}
.Atractivo-data .atractivo-fotos img {
  width: 200px;
  height: 150px;
  object-fit: cover;
  margin: 8px;
  border: 1px solid #fff;
}
.Atractivo-data .atractivo-ubicacion {
  grid-area: atractivo-ubicacion;
  display: flex;
  flex-direction: column;
  justify-content: flex-start;
  align-items: flex-start;
}
.Atractivo-data .atractivo-ubicacion span {
  text-transform: uppercase;
  margin-bottom: 8px;
}
.Atractivo-data .atractivo-ubicacion span i {
  margin-right: 8px;
  color: rgb(114, 39, 137);
}
.Atractivo-data .atractivo-info {
  grid-area: atractivo-info;
  display: flex;
  flex-direction: column;
  justify-content: flex-start;
  align-items: flex-start;
}
.Atractivo-data .atractivo-info span {
  text-transform: uppercase;
  margin-bottom: 8px;
}
.Atractivo-data .atractivo-info span i {
  margin-right: 8px;
  color: rgb(114, 39, 137);
}
.Atractivo-data .atractivo-info ul li {
  text-transform: uppercase;
}

@media only screen and (max-width: 790px) {
  .ZonaLocalidad-titulo h3 {
    font-size: 2rem;
  }

  .Atractivo-data {
    grid-template-areas: "atractivo-fotos" "atractivo-texto" "atractivo-ubicacion" "atractivo-info";
    grid-template-columns: 1fr;
    padding: 8px 2px;
  }
  .Atractivo-data .atractivo-fotos {
    padding: 8px;
  }
  .Atractivo-data .atractivo-fotos img {
    width: 100%;
    height: auto;
  }
}
/*
    Componente PAtractivo.js
*/
.Atractivo-main-halloween {
  background-image: url("http://turismo.sanluis.gov.ar/api-turismo/public/recursos/halloween/fondo.jpg");
  background-repeat: no-repeat;
  background-size: cover;
}
.Atractivo-main-halloween .row {
  margin-right: 0;
}
.Atractivo-main-halloween .Titulo-Halloween {
  position: relative;
  margin: 50px 0 50px 0;
  text-align: left;
  left: 10%;
  width: fit-content;
  font-size: 7rem;
  line-height: 80px;
  font-family: "Jolly Lodger";
  color: rgb(28, 228, 45);
}
.Atractivo-main-halloween .Container-Logo-Halloween {
  margin-top: 30px;
  width: 100%;
  text-align: left;
  padding-left: 10%;
}
.Atractivo-main-halloween .Container-Logo-Halloween img {
  margin-top: 10%;
  margin-bottom: 10%;
  width: 300px;
  height: 100px;
}
.Atractivo-main-halloween a {
  color: white;
}
.Atractivo-main-halloween .ZonaLocalidad-titulo-Halloween {
  display: block;
  width: 100%;
  top: 50px;
  height: 50px;
  position: relative;
  margin-bottom: 90px;
}
.Atractivo-main-halloween .ZonaLocalidad-titulo-Halloween h3 {
  position: absolute;
  top: 20px;
  left: 20px;
  background-color: #fff;
  text-transform: uppercase;
  padding: 8px;
  font-weight: bold;
  font-size: 3rem;
}

.Atractivo-data-halloween {
  display: grid;
  grid-template-areas: "atractivo-texto atractivo-fotos" "atractivo-ubicacion atractivo-info";
  grid-template-columns: repeat(2, 1fr);
  grid-template-rows: auto;
  grid-gap: 20px;
}
.Atractivo-data-halloween .atractivo-texto {
  grid-area: atractivo-texto;
  color: blanchedalmond;
}
.Atractivo-data-halloween .atractivo-fotos {
  grid-area: atractivo-fotos;
  display: grid;
  flex-wrap: wrap;
  justify-content: center;
  align-items: center;
  padding: 20px 20px;
}
.Atractivo-data-halloween .atractivo-fotos img {
  width: 400px;
  height: 250px;
  object-fit: cover;
  margin: 0 8px 0 8px;
  border: 1px solid #fff;
}
.Atractivo-data-halloween .atractivo-ubicacion {
  grid-area: atractivo-ubicacion;
  display: flex;
  flex-direction: column;
  justify-content: flex-start;
  align-items: flex-start;
  color: blanchedalmond;
}
.Atractivo-data-halloween .atractivo-ubicacion span {
  text-transform: uppercase;
  margin-bottom: 8px;
}
.Atractivo-data-halloween .atractivo-ubicacion span i {
  margin-right: 8px;
  color: blanchedalmond;
}
.Atractivo-data-halloween .atractivo-info {
  grid-area: atractivo-info;
  display: flex;
  flex-direction: column;
  justify-content: flex-start;
  align-items: flex-start;
  color: blanchedalmond;
  padding-left: 20px;
}
.Atractivo-data-halloween .atractivo-info span {
  text-transform: uppercase;
  margin-bottom: 8px;
}
.Atractivo-data-halloween .atractivo-info span i {
  margin-right: 8px;
  color: blanchedalmond;
}
.Atractivo-data-halloween .atractivo-info ul li {
  text-transform: uppercase;
}

@media only screen and (max-width: 790px) {
  .ZonaLocalidad-titulo-Halloween h3 {
    font-size: 1rem;
  }

  .Atractivo-data-halloween {
    grid-template-areas: "atractivo-fotos" "atractivo-texto" "atractivo-ubicacion" "atractivo-info";
    grid-template-columns: 1fr;
    padding: 8px 2px;
  }
  .Atractivo-data-halloween .atractivo-fotos {
    padding: 8px;
  }
  .Atractivo-data-halloween .atractivo-fotos img {
    width: 100%;
    height: auto;
  }
}
@media screen and (max-width: 768px) {
  .Atractivo-main-halloween .Titulo-Halloween {
    text-align: center;
    margin-left: 15%;
    font-size: 5rem;
  }
  .Atractivo-main-halloween .Container-Logo-Halloween {
    width: 100%;
    left: 0;
    text-align: center;
  }
  .Atractivo-main-halloween .Container-Logo-Halloween img {
    margin-top: 10%;
    margin-bottom: 10%;
    width: 200px;
    height: 80px;
  }
}
/*
    Componente Novedadesfull.js
*/
.LoadingListadoAtractivo {
  padding-top: 110px;
}

.ListadoAtractivofull {
  padding-top: 110px;
}
.ListadoAtractivofull .nf-titulo {
  background-color: rgb(114, 39, 137);
  height: 50px;
  position: relative;
  margin-bottom: 50px;
  width: 610px;
}
.ListadoAtractivofull .nf-titulo span {
  position: absolute;
  top: 10px;
  left: 25px;
  background-color: #fff;
  color: rgb(114, 39, 137);
  font-size: 3rem;
  line-height: 3rem;
  font-weight: 800;
  padding: 10px 18px;
  width: 550px;
}

.atractivo-full-item {
  display: grid;
  grid-template-areas: "imagen titulo" "imagen body";
  grid-template-columns: 400px auto;
  grid-template-rows: 75px auto;
  /*
    .pie {
        grid-area: pie;
        display: flex;
        justify-content: flex-start;
        align-items: flex-end;
        padding-left: 10px;
        .btn-novedades {
            background-color: $color-uno;
            padding: 0 8px;
            color: #fff;
        }
    }
    */
}
.atractivo-full-item .imagen {
  grid-area: imagen;
  position: relative;
  object-fit: cover;
}
.atractivo-full-item .imagen img {
  height: 250px;
  width: 400px;
}
.atractivo-full-item .imagen span {
  margin: 5px;
  position: absolute;
  top: 0;
  left: 0;
  width: 80%;
  background-color: #bf3276;
  padding: 4px;
  text-align: center;
  text-transform: uppercase;
  color: #fff;
}
.atractivo-full-item .titulo {
  grid-area: titulo;
  padding-left: 10px;
  display: flex;
  flex-direction: column;
  background-color: #bf3276;
  justify-content: center;
}
.atractivo-full-item .titulo h3 {
  margin-top: 5px;
  font-size: 1.75rem;
  font-weight: 500;
  color: #fff;
  text-transform: uppercase;
}
.atractivo-full-item .body {
  grid-area: body;
  padding: 10px;
}
.atractivo-full-item .body p {
  overflow: hidden;
  text-align: justify;
  margin-block-start: 0px;
  margin-block-end: 0px;
  margin-bottom: 0px;
}
.atractivo-full-item .body .btn-novedades {
  background-color: rgb(114, 39, 137);
  padding: 0 8px;
  color: #fff;
  /*
        -webkit-border-radius: 8px;
        border-radius: 8px;
        */
}

@media only screen and (max-width: 990px) {
  /*
    .Novedadesfull {
        .nf-body {
            .nf-novedad {
                flex-direction: column;
                .nf-novedad-left {
                    position: fixed;
                }
            }

        }
    }
    */
  .atractivo-full-item .imagen img {
    height: 250px;
    width: 700px;
    object-fit: cover;
  }

  .atractivo-full-item {
    grid-template-areas: "titulo" "imagen" "body" "pie";
    grid-template-columns: 1fr;
    grid-template-rows: repeat(4, auto);
  }
  .atractivo-full-item .imagen {
    justify-self: center;
  }
}
@media only screen and (max-width: 770px) {
  .ListadoAtractivofull .nf-titulo {
    height: 40px;
    position: relative;
    margin-bottom: 50px;
    width: 510px;
  }
  .ListadoAtractivofull .nf-titulo span {
    position: absolute;
    left: 25px;
    top: 10px;
    background-color: #fff;
    color: rgb(114, 39, 137);
    font-size: 2.5rem;
    line-height: 3rem;
    font-weight: 700;
    padding: 10px 18px;
    width: 460px;
  }

  .atractivo-full-item .imagen img {
    height: 250px;
    width: 500px;
  }
}
@media only screen and (max-width: 530px) {
  .ListadoAtractivofull .nf-titulo {
    height: 40px;
    position: relative;
    margin-bottom: 50px;
    width: 390px;
  }
  .ListadoAtractivofull .nf-titulo span {
    top: 10px;
    left: 25px;
    background-color: #fff;
    color: rgb(114, 39, 137);
    font-size: 2rem;
    line-height: 2.5rem;
    font-weight: 700;
    padding: 5px 4px;
    width: 340px;
  }

  .atractivo-full-item .imagen img {
    width: 380px;
  }

  .atractivo-full-item .titulo h3 {
    font-size: 1.2rem;
    font-weight: 500;
    line-height: 1;
  }
}
/*
    Componente Alojamientos.js
*/
/*
.alojamientos-container {
    padding-top: 1rem;
    padding-bottom: 1rem;
    //background-color: brown;
    display: grid;
    grid-template-columns: repeat(auto-fill, $card-width);
    //grid-auto-rows: 400px;
    grid-auto-rows: auto;
    justify-content: center;
    grid-gap: 20px;
*/
.alo-card {
  width: 270px;
  height: 370px;
  position: relative;
  -webkit-box-shadow: 1px 1px 10px 1px #000000;
  box-shadow: 1px 1px 10px 1px #000000;
}
.alo-card:hover .img-box {
  transform: translateY(-100%) rotateX(90deg);
}
.alo-card:hover .details {
  transform: translateY(0) rotateX(0deg);
}
.alo-card .img-box {
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  transform-origin: bottom;
  transition: 0.5s;
  transform: translateY(0) rotateX(0deg);
}
.alo-card .img-box .img-content {
  position: relative;
}
.alo-card .img-box .img-content img {
  position: absolute;
  top: 0;
  left: 0;
  width: 270px;
  height: 370px;
  object-fit: cover;
}
.alo-card .img-box .img-content .nombre {
  position: absolute;
  top: 0px;
  left: 0px;
  width: 100%;
  display: block;
  background: rgb(114, 39, 137);
  background: -moz-linear-gradient(left, rgba(114, 39, 137, 0.95) 0%, rgba(237, 15, 104, 0.8) 100%);
  background: -webkit-linear-gradient(left, rgba(114, 39, 137, 0.95) 0%, rgba(237, 15, 104, 0.8) 100%);
  background: linear-gradient(to right, rgba(114, 39, 137, 0.95) 0%, rgba(237, 15, 104, 0.8) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
  color: white;
  text-transform: uppercase;
  text-align: center;
  padding-top: 1rem;
  padding-bottom: 1rem;
  z-index: 999;
  text-shadow: 1px 1px 1px #000;
}
.alo-card .details {
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  background-color: rgb(219, 14, 96);
  transform-origin: top;
  transition: 0.5s;
  box-sizing: border-box;
  transform: translateY(100%) rotateX(-90deg);
}
.alo-card .details .content .nombre {
  position: absolute;
  top: 0px;
  left: 0px;
  width: 100%;
  display: block;
  background: rgb(114, 39, 137);
  background: -moz-linear-gradient(left, rgba(114, 39, 137, 0.95) 0%, rgba(237, 15, 104, 0.8) 100%);
  background: -webkit-linear-gradient(left, rgba(114, 39, 137, 0.95) 0%, rgba(237, 15, 104, 0.8) 100%);
  background: linear-gradient(to right, rgba(114, 39, 137, 0.95) 0%, rgba(237, 15, 104, 0.8) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
  color: white;
  text-transform: uppercase;
  text-align: center;
  padding-top: 1rem;
  padding-bottom: 1rem;
  z-index: 999;
  text-shadow: 1px 1px 1px #000;
}
.alo-card .details .content .detalles {
  margin-top: 60px;
  padding-left: 3px;
}
.alo-card .details .content .detalles li {
  list-style-type: none;
  color: #fff;
  text-align: left;
  margin-top: 6px;
}
.alo-card .details .content .detalles li i {
  margin-left: 6px;
}
.alo-card .details .content .detalles li span {
  color: #fff;
}
.alo-card .details .content .detalles li a {
  text-decoration: none;
  color: #fff;
}
.alo-card .details .content .vermas {
  position: absolute;
  bottom: 4px;
  left: 50%;
  color: #fff;
  transform: translateX(-50%);
  font-size: 1.4rem;
  cursor: pointer;
  text-align: center;
}
.alo-card .details .content .vermas i {
  color: #fff;
}

.fa-spin-fast {
  -webkit-animation: fa-spin-fast 0.2s infinite linear;
  animation: fa-spin-fast 0.2s infinite linear;
}

@-webkit-keyframes fa-spin-fast {
  0% {
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -webkit-transform: rotate(359deg);
    transform: rotate(359deg);
  }
}
@keyframes fa-spin-fast {
  0% {
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -webkit-transform: rotate(359deg);
    transform: rotate(359deg);
  }
}
.material-card {
  position: relative;
  height: 370px;
  width: 270px;
  margin-right: 5px;
}
.material-card h2 {
  background-color: rgb(219, 14, 96);
  position: absolute;
  bottom: 5px;
  left: 0;
  width: 100%;
  padding: 10px 16px;
  color: #fff;
  font-size: 1.4em;
  margin: 0;
  line-height: 1.6em;
  z-index: 10;
  -webkit-transition: all 0.3s;
  -moz-transition: all 0.3s;
  -ms-transition: all 0.3s;
  -o-transition: all 0.3s;
  transition: all 0.3s;
}
.material-card h2 span {
  display: block;
  white-space: nowrap;
  text-overflow: ellipsis;
  overflow: hidden;
}
.material-card h2 strong {
  display: block;
  white-space: nowrap;
  text-overflow: ellipsis;
  overflow: hidden;
}
.material-card h2 strong i {
  margin-right: 5px;
}
.material-card h2:before, .material-card h2:after {
  content: " ";
  position: absolute;
  left: 0;
  top: -16px;
  width: 0;
  border-left: 16px solid transparent;
  border-bottom: 16px solid rgb(160, 11, 70);
  -webkit-transition: all 0.3s;
  -moz-transition: all 0.3s;
  -ms-transition: all 0.3s;
  -o-transition: all 0.3s;
  transition: all 0.3s;
}
.material-card h2:after {
  top: auto;
  bottom: 0;
  border-bottom: 16px solid transparent;
}
.material-card.mc-active h2 {
  height: 94px;
  top: 0;
  padding: 4px 16px 10px 90px;
}
.material-card.mc-active h2:before, .material-card.mc-active h2:after {
  content: " ";
  position: absolute;
  left: 0;
  top: 0px;
  width: 0;
  border-left: 16px solid transparent;
  border-bottom: 16px solid transparent;
  -webkit-transition: all 0.3s;
  -moz-transition: all 0.3s;
  -ms-transition: all 0.3s;
  -o-transition: all 0.3s;
  transition: all 0.3s;
}
.material-card.mc-active h2:after {
  top: 100%;
  bottom: 0;
  border-top: 16px solid rgb(160, 11, 70);
}
.material-card .mc-content {
  background-color: rgb(255, 182, 214);
  position: absolute;
  right: 0;
  top: 0;
  bottom: 16px;
  left: 16px;
  -webkit-transition: all 0.3s;
  -moz-transition: all 0.3s;
  -ms-transition: all 0.3s;
  -o-transition: all 0.3s;
  transition: all 0.3s;
}
.material-card .mc-btn-action {
  position: absolute;
  right: 16px;
  top: 15px;
  -webkit-border-radius: 50%;
  -moz-border-radius: 50%;
  border-radius: 50%;
  border: 5px solid;
  width: 54px;
  height: 54px;
  line-height: 44px;
  text-align: center;
  border-color: #fff;
  background-color: rgb(219, 14, 96);
  cursor: pointer;
  z-index: 20;
  -webkit-transition: all 0.3s;
  -moz-transition: all 0.3s;
  -ms-transition: all 0.3s;
  -o-transition: all 0.3s;
  transition: all 0.3s;
}
.material-card .mc-btn-action i {
  color: #fff;
}
.material-card.mc-active .mc-btn-action {
  top: 70px;
}
.material-card .mc-description {
  display: none;
  position: absolute;
  top: 100%;
  right: 20px;
  left: 20px;
  overflow: hidden;
  text-overflow: ellipsis;
  opacity: 0;
  -webkit-transition: all 1.2s;
  -moz-transition: all 1.2s;
  -ms-transition: all 1.2s;
  -o-transition: all 1.2s;
  transition: all 1.2s;
}
.material-card .mc-footer {
  display: none;
  height: 0;
  overflow: hidden;
  -webkit-transition: all 0.3s;
  -moz-transition: all 0.3s;
  -ms-transition: all 0.3s;
  -o-transition: all 0.3s;
  transition: all 0.3s;
}
.material-card .mc-footer h4 {
  position: absolute;
  top: 200px;
  left: 30px;
  padding: 0;
  margin: 0;
  font-size: 16px;
  font-weight: 700;
  -webkit-transition: all 1.4s;
  -moz-transition: all 1.4s;
  -ms-transition: all 1.4s;
  -o-transition: all 1.4s;
  transition: all 1.4s;
}
.material-card .img-container {
  overflow: hidden;
  position: absolute;
  width: 100%;
  height: 100%;
  z-index: 3;
}
.material-card .img-container img {
  top: 0;
  left: 0;
  width: 270px;
  height: 370px;
  object-fit: cover;
}
.material-card.mc-active .img-container {
  -webkit-border-radius: 50%;
  -moz-border-radius: 50%;
  border-radius: 50%;
  left: 0;
  top: 12px;
  width: 60px;
  height: 60px;
  z-index: 20;
}
.material-card.mc-active .img-container img {
  top: 0;
  left: 0;
  width: 60px;
  height: 60px;
  object-fit: cover;
}
.material-card.mc-active .mc-content {
  padding-top: 5.6em;
}
.material-card.mc-active .mc-description {
  display: inline;
  top: 30px;
  padding-top: 5.6em;
  opacity: 1;
}
.material-card.mc-active .mc-description li {
  list-style-type: none;
  text-align: left;
  margin-top: 6px;
}
.material-card.mc-active .mc-description li a {
  text-decoration: none;
  color: #000;
}
.material-card.mc-active .mc-footer {
  display: inline;
  position: absolute;
  transform: translateX(-50%);
  font-size: 1.4rem;
  cursor: pointer;
  text-align: center;
  top: 80%;
  left: 55%;
  height: 82px;
}
.material-card.mc-active .mc-footer i {
  color: #000;
}

/*
    Componente PAlojamiento.js y PFiltroAlojamiento.js
*/
.PFiltroAlojamiento {
  padding-top: 140px;
}

.Alojamiento {
  padding-top: 140px;
}
.Alojamiento .ZonaLocalidad-titulo {
  background-color: #722789;
}
.Alojamiento .ZonaLocalidad-titulo h3 {
  color: #722789;
}
.Alojamiento .ZonaLocalidad-titulo .contImagenDosep {
  position: absolute;
  top: 17px;
  right: 6%;
  padding: 5px 10px 5px 10px;
  background-color: #fff;
  border-radius: 50%;
}
.Alojamiento .ZonaLocalidad-titulo .contImagenDosep img {
  width: 75px;
  height: 75px;
}

.Alojamiento-data {
  display: grid;
  grid-template-areas: "alojamiento-fotos alojamiento-fotos" "alojamiento-texto alojamiento-texto" "alojamiento-ubicacion alojamiento-info";
  grid-template-columns: repeat(2, 1fr);
  grid-template-rows: auto;
  grid-gap: 20px;
}
.Alojamiento-data .alojamiento-texto {
  grid-area: alojamiento-texto;
  font-style: italic;
  font-weight: 400;
  font-size: 1.2rem;
}
.Alojamiento-data .alojamiento-fotos {
  grid-area: alojamiento-fotos;
  display: flex;
  flex-wrap: wrap;
  justify-content: center;
  align-items: center;
  background-color: rgb(114, 39, 137);
  padding: 20px 20px;
}
.Alojamiento-data .alojamiento-fotos img {
  width: 200px;
  height: 150px;
  object-fit: cover;
  margin: 8px;
  border: 1px solid #fff;
}
.Alojamiento-data .alojamiento-ubicacion {
  grid-area: alojamiento-ubicacion;
  display: flex;
  flex-direction: column;
  justify-content: flex-start;
  align-items: flex-start;
}
.Alojamiento-data .alojamiento-ubicacion span {
  text-transform: uppercase;
  margin-bottom: 8px;
}
.Alojamiento-data .alojamiento-ubicacion span i {
  margin-right: 8px;
  color: rgb(114, 39, 137);
}
.Alojamiento-data .alojamiento-info {
  grid-area: alojamiento-info;
  display: flex;
  flex-direction: column;
  justify-content: flex-start;
  align-items: flex-start;
}
.Alojamiento-data .alojamiento-info span {
  text-transform: uppercase;
  margin-bottom: 8px;
}
.Alojamiento-data .alojamiento-info span i {
  margin-right: 8px;
  color: rgb(114, 39, 137);
}
.Alojamiento-data .alojamiento-info ul li {
  text-transform: uppercase;
}

@media only screen and (max-width: 1000px) {
  .Alojamiento .ZonaLocalidad-titulo .contImagenDosep {
    top: 100px;
    right: 45%;
  }
}
@media only screen and (max-width: 790px) {
  .Alojamiento .ZonaLocalidad-titulo h3 {
    font-size: 2rem;
  }

  .Alojamiento-data {
    grid-template-areas: "alojamiento-fotos" "alojamiento-texto" "alojamiento-ubicacion" "alojamiento-info";
    grid-template-columns: 1fr;
    padding: 8px 2px;
  }
  .Alojamiento-data .alojamiento-fotos {
    padding: 8px;
  }
  .Alojamiento-data .alojamiento-fotos img {
    width: 100%;
    height: auto;
  }
}
/*
    Componente PContacto.js
*/
.grillaContacto-grid-container {
  display: grid;
  grid-template-columns: 1fr 1fr;
  grid-template-rows: 1fr 1fr;
  grid-template-areas: ". ." ". .";
}

.datos-grid-container {
  display: grid;
  grid-template-columns: 1fr 1fr;
  grid-template-rows: 1fr 1fr;
  grid-template-areas: "icono titulo" "icono dato";
  color: #722789;
}

.contacLlamada {
  color: #722789;
  padding-top: 10px;
}
.contacLlamada i {
  font-size: 50px;
  padding-top: 10px;
  position: absolute;
}
.contacLlamada h4 {
  padding-left: 70px;
}
.contacLlamada h5 a {
  color: #5C7080;
  line-height: 1.9rem;
  font-weight: 600;
}

.contacRedes {
  color: #722789;
  padding-left: 150px;
  padding-top: 10px;
}
.contacRedes i {
  font-size: 40px;
  position: absolute;
}
.contacRedes h4 {
  padding-left: 70px;
}
.contacRedes h5 a {
  color: #5C7080;
  line-height: 1.9rem;
  font-weight: 600;
  padding-left: 50px;
  padding-top: 50px;
}
.contacRedes .iconRedes i {
  font-size: 30px;
}

.posicionContacto {
  padding-left: 150px;
}

@media only screen and (max-width: 880px) {
  .grillaContacto-grid-container {
    display: grid;
    grid-template-columns: 1fr;
    grid-template-rows: 1fr 1fr 1fr 1fr;
    grid-template-areas: "." "." "." ".";
  }

  .posicionContacto {
    padding-left: 0px;
  }
}
.containerCensistas {
  display: -webkit-box;
  display: -ms-flexbox;
  display: flex;
  justify-content: center;
  margin: 0 10px 0 10px;
  align-items: center;
  height: 350px;
}
.containerCensistas .boxCensistas {
  position: relative;
  width: 250px;
  height: 350px;
  border-radius: 10px;
  background-color: white;
  box-shadow: 0px 0px 10px rgba(0, 0, 0, 0.2);
}
.containerCensistas .boxCensistas .topCensistas {
  position: relative;
  display: flex;
  flex-direction: column;
  justify-content: center;
  align-items: center;
  height: 50%;
  border-top-left-radius: 10px;
  border-top-right-radius: 10px;
}
.containerCensistas .boxCensistas .topCensistas .profileCensistas, .containerCensistas .boxCensistas .topCensistas .titleCensistas, .containerCensistas .boxCensistas .topCensistas .jobCensistas {
  margin: 5px;
}
.containerCensistas .boxCensistas .topCensistas .profileCensistas, .containerCensistas .boxCensistas .topCensistas .imageCensistas {
  width: 80px;
  height: 80px;
  border: 4px solid white;
  box-shadow: 0px 3px 5px rgba(0, 0, 0, 0.2);
  border-radius: 45%;
  z-index: 2;
}
.containerCensistas .boxCensistas .topCensistas .titleCensistas {
  font-size: 18px;
  font-weight: 700;
}
.containerCensistas .boxCensistas .topCensistas .jobCensistas {
  font-size: 14px;
  font-weight: 400;
}
.containerCensistas .boxCensistas .bottomCensistas {
  position: relative;
  display: flex;
  flex-direction: column;
  justify-content: center;
  align-content: center;
  height: 50%;
  background-color: #F5F5F5;
  border-bottom-left-radius: 10px;
  border-bottom-right-radius: 10px;
}
.containerCensistas .boxCensistas .bottomCensistas .linksCensistas {
  text-align: center;
}
.containerCensistas .boxCensistas .bottomCensistas .linksCensistas .listaCensistas {
  list-style-type: none;
  padding: 0;
  /* Remove padding */
  margin: 0;
  /* Remove margins */
}
.containerCensistas .boxCensistas .bottomCensistas .linksCensistas .listaCensistas li {
  padding: 5px;
}
.containerCensistas .boxCensistas .bottomCensistas .linksCensistas .listaCensistas a {
  color: #626262;
  font-size: 15px;
  text-decoration: none;
}
.containerCensistas .boxCensistas .bottomCensistas .linksCensistas .listaCensistas a:hover {
  text-decoration: underline;
}

/* COMIENZA ESTILO DE TABS SLIDER*/
/* colors */
/* tab setting */
/* breakpoints */
/* selectors relative to radio inputs */
@keyframes ripples {
  0% {
    box-shadow: 0 0 0 0 rgba(255, 255, 255, 0.1), 0 0 0 20px rgba(255, 255, 255, 0.1), 0 0 0 40px rgba(255, 255, 255, 0.1), 0 0 0 60px rgba(255, 255, 255, 0.1);
  }
  100% {
    box-shadow: 0 0 0 20px rgba(255, 255, 255, 0.1), 0 0 0 40px rgba(255, 255, 255, 0.1), 0 0 0 60px rgba(255, 255, 255, 0.1), 0 0 0 80px rgba(255, 255, 255, 0);
  }
}
.tabs {
  font-family: "Raleway";
  left: 50%;
  transform: translateX(-50%);
  position: relative;
  background: white;
  padding: 50px;
  padding-bottom: 40px;
  width: 70%;
  height: 250px auto;
  box-shadow: 0 14px 28px rgba(0, 0, 0, 0.25), 0 10px 10px rgba(0, 0, 0, 0.22);
  border-radius: 5px;
  min-width: 180px;
}
.tabs input[name=tab-control] {
  display: none;
}
.tabs .content section h2,
.tabs ul li label {
  font-family: "Montserrat";
  font-weight: bold;
  font-size: 18px;
  color: rgb(237, 15, 104);
}
.tabs .listatabslider {
  list-style-type: none;
  padding-left: 0;
  display: flex;
  flex-direction: row;
  margin-bottom: 10px;
  justify-content: space-between;
  align-items: flex-end;
  flex-wrap: wrap;
}
.tabs .listatabslider li {
  box-sizing: border-box;
  flex: 1;
  width: 33.3333333333%;
  padding: 0 10px;
  text-align: center;
}
.tabs .listatabslider li label {
  transition: all 0.3s ease-in-out;
  color: #827a7d;
  padding: 5px auto;
  overflow: hidden;
  text-overflow: ellipsis;
  display: block;
  cursor: pointer;
  transition: all 0.2s ease-in-out;
  white-space: nowrap;
  -webkit-touch-callout: none;
  user-select: none;
}
.tabs .listatabslider li label br {
  display: none;
}
.tabs .listatabslider li label svg {
  fill: #827a7d;
  height: 1.2em;
  vertical-align: bottom;
  margin-right: 0.2em;
  transition: all 0.2s ease-in-out;
}
.tabs .listatabslider li label:hover, .tabs .listatabslider li label:focus, .tabs .listatabslider li label:active {
  outline: 0;
  color: #a7a1a4;
}
.tabs .listatabslider li label:hover svg, .tabs .listatabslider li label:focus svg, .tabs .listatabslider li label:active svg {
  fill: #a7a1a4;
}
.tabs .slider {
  position: relative;
  width: 33.3333333333%;
  transition: all 0.33s cubic-bezier(0.38, 0.8, 0.32, 1.07);
}
.tabs .slider .indicator {
  position: relative;
  width: 50px;
  max-width: 100%;
  margin: 0 auto;
  height: 4px;
  background: rgb(237, 15, 104);
  border-radius: 1px;
}
.tabs .content {
  margin-top: 30px;
}
.tabs .content section {
  display: none;
  animation-name: content;
  animation-direction: normal;
  animation-duration: 0.3s;
  animation-timing-function: ease-in-out;
  animation-iteration-count: 1;
  line-height: 1.4;
}
.tabs .content section .btnavion {
  position: relative;
  left: 70%;
  bottom: 5%;
  outline: 0;
  width: 215px;
  display: inline-flex;
  align-items: center;
  background: rgb(237, 15, 104);
  min-width: 160px;
  height: 50px;
  margin: 10px 0 0 0;
  border: 0;
  border-radius: 40px;
  box-shadow: 0 4px 12px rgba(0, 0, 0, 0.1);
  box-sizing: border-box;
  padding: 16px 20px;
  color: #ffffff;
  font-size: 12px;
  font-weight: 600;
  letter-spacing: 1.2px;
  text-transform: uppercase;
  overflow: hidden;
  cursor: pointer;
}
@media only screen and (max-width: 960px) {
  .tabs .content section .btnavion {
    left: 60%;
  }
}
@media only screen and (max-width: 755px) {
  .tabs .content section .btnavion {
    left: 50%;
  }
}
@media only screen and (max-width: 625px) {
  .tabs .content section .btnavion {
    left: 40%;
  }
}
@media only screen and (max-width: 549px) {
  .tabs .content section .btnavion {
    left: 0;
    right: 5%;
  }
}
@media only screen and (max-width: 383px) {
  .tabs .content section .btnavion {
    width: 190px;
  }
}
.tabs .content section .btnavion:focus .dropdown, .tabs .content section .btnavion:active .dropdown {
  transform: translate(0, 20px);
  opacity: 1;
  visibility: visible;
}
.tabs .content section .btnavion .material-icons {
  margin-left: 15px;
  font-size: 25px;
  border-radius: 100%;
  animation: ripples 0.6s linear infinite;
}
.tabs .content section .container-btnsavion {
  text-align: center;
  align-content: center;
}
.tabs .content section .container-btnsavion .btnavion-conoce {
  position: relative;
  bottom: 5%;
  outline: 0;
  width: 190px;
  display: inline-flex;
  align-items: center;
  background: rgb(237, 15, 104);
  height: 50px;
  border: 0;
  border-radius: 40px;
  box-shadow: 0 4px 12px rgba(0, 0, 0, 0.1);
  box-sizing: border-box;
  padding: 16px 20px;
  margin: 10px 0 0 6px;
  color: #ffffff;
  font-size: 10.7px;
  font-weight: 600;
  letter-spacing: 1.1px;
  text-transform: uppercase;
  cursor: pointer;
}
.tabs .content section .container-btnsavion .btnavion-conoce:focus .dropdown, .tabs .content section .container-btnsavion .btnavion-conoce:active .dropdown {
  transform: translate(0, 20px);
  opacity: 1;
  visibility: visible;
}
.tabs .content section .container-btnsavion .btnavion-conoce .material-icons {
  margin-left: 15px;
  font-size: 25px;
  border-radius: 100%;
  animation: ripples 0.6s linear infinite;
}
.tabs .content section h2 {
  color: rgb(237, 15, 104);
  display: none;
}
.tabs .content section h2::after {
  content: "";
  position: relative;
  display: block;
  width: 30px;
  height: 3px;
  background: rgb(237, 15, 104);
  margin-top: 5px;
  left: 1px;
}
.tabs input[name=tab-control]:nth-of-type(1):checked ~ ul > li:nth-child(1) > label {
  cursor: default;
  color: rgb(237, 15, 104);
}
.tabs input[name=tab-control]:nth-of-type(1):checked ~ ul > li:nth-child(1) > label svg {
  fill: rgb(237, 15, 104);
}
@media (max-width: 450px) {
  .tabs input[name=tab-control]:nth-of-type(1):checked ~ ul > li:nth-child(1) > label {
    background: rgba(0, 0, 0, 0.08);
  }
}
.tabs input[name=tab-control]:nth-of-type(1):checked ~ .slider {
  transform: translateX(0%);
}
.tabs input[name=tab-control]:nth-of-type(1):checked ~ .content > section:nth-child(1) {
  display: block;
}
.tabs input[name=tab-control]:nth-of-type(2):checked ~ ul > li:nth-child(2) > label {
  cursor: default;
  color: rgb(237, 15, 104);
}
.tabs input[name=tab-control]:nth-of-type(2):checked ~ ul > li:nth-child(2) > label svg {
  fill: rgb(237, 15, 104);
}
@media (max-width: 450px) {
  .tabs input[name=tab-control]:nth-of-type(2):checked ~ ul > li:nth-child(2) > label {
    background: rgba(0, 0, 0, 0.08);
  }
}
.tabs input[name=tab-control]:nth-of-type(2):checked ~ .slider {
  transform: translateX(100%);
}
.tabs input[name=tab-control]:nth-of-type(2):checked ~ .content > section:nth-child(2) {
  display: block;
}
.tabs input[name=tab-control]:nth-of-type(3):checked ~ ul > li:nth-child(3) > label {
  cursor: default;
  color: rgb(237, 15, 104);
}
.tabs input[name=tab-control]:nth-of-type(3):checked ~ ul > li:nth-child(3) > label svg {
  fill: rgb(237, 15, 104);
}
@media (max-width: 450px) {
  .tabs input[name=tab-control]:nth-of-type(3):checked ~ ul > li:nth-child(3) > label {
    background: rgba(0, 0, 0, 0.08);
  }
}
.tabs input[name=tab-control]:nth-of-type(3):checked ~ .slider {
  transform: translateX(200%);
}
.tabs input[name=tab-control]:nth-of-type(3):checked ~ .content > section:nth-child(3) {
  display: block;
}
@keyframes content {
  from {
    opacity: 0;
    transform: translateY(5%);
  }
  to {
    opacity: 1;
    transform: translateY(0%);
  }
}
@media (max-width: 750px) {
  .tabs .listatabslider li label {
    white-space: initial;
  }
  .tabs .listatabslider li label br {
    display: initial;
  }
  .tabs .listatabslider li label svg {
    height: 1.5em;
  }
}
@media (max-width: 450px) {
  .tabs .listatabslider li label {
    padding: 5px;
    border-radius: 5px;
  }
  .tabs .listatabslider li label span {
    display: none;
  }
  .tabs .slider {
    display: none;
  }
  .tabs .content {
    margin-top: 20px;
  }
  .tabs .content section h2 {
    display: block;
  }
}

/* Body */
.avion {
  box-shadow: 0 0 10rem 0 #000000 inset;
}

.avion {
  width: 100%;
  height: 100%;
}

.avion {
  box-sizing: border-box;
  display: flex;
  align-items: center;
  justify-content: center;
  padding-bottom: 3rem;
  background-color: #1d1f20;
  color: #1d1f20;
  font-family: "Josefin Sans", sans-serif;
  font-size: 10px;
  font-weight: 100;
  box-shadow: 0 0 10rem 0 #000000 inset;
}

footer {
  position: fixed;
  bottom: 0;
  left: 0;
  width: 100vw;
  height: 3rem;
  background-color: #1d1f20;
  text-align: center;
  font-family: "Indie Flower", cursive;
  font-size: 1.2rem;
  letter-spacing: 0.1rem;
}
footer span {
  font-family: "Josefin Sans", sans-serif;
  font-size: 1rem;
  font-weight: 100;
}

a {
  text-decoration: none;
  color: rgb(237, 15, 104);
}
a:hover {
  text-decoration: underline;
}

.svg-calLoader {
  position: absolute;
  width: 230px;
  height: 230px;
  transform-origin: 115px 115px;
  animation: 1.4s linear infinite loader-spin;
}

.cal-loader__plane {
  fill: rgb(237, 15, 104);
}

.cal-loader__path {
  stroke: #1d1f20;
  animation: 1.4s ease-in-out infinite loader-path;
}

@keyframes loader-spin {
  to {
    transform: rotate(360deg);
  }
}
@keyframes loader-path {
  0% {
    stroke-dasharray: 0, 580, 0, 0, 0, 0, 0, 0, 0;
  }
  50% {
    stroke-dasharray: 0, 450, 10, 30, 10, 30, 10, 30, 10;
  }
  100% {
    stroke-dasharray: 0, 580, 0, 0, 0, 0, 0, 0, 0;
  }
}
.row::before,
.row::after {
  display: table;
  content: " ";
  clear: both;
}

.one,
.one-third,
.two-thirds,
.one-fourth,
.half {
  width: 100%;
}

/* 
* Any styling that should be applied to screen widths larger
* than a mobile device: tablet, laptop, desktop, etc. 
*/
@media only screen and (min-width: 800px) {
  .one {
    width: 100%;
  }

  .half {
    width: 50%;
  }

  .one-third {
    width: 33.3333333333%;
  }

  .one-fourth {
    width: 25%;
  }

  .two-thirds {
    width: 66.6666666667%;
  }

  .column {
    float: left;
  }
}
/* Styling */
.column {
  padding: 10px;
}

/*
    Componente Home.js
*/
.pantallaGrande {
  display: inline;
}

.pantallaChica2 {
  display: none;
}

.motoVideo {
  display: none;
}

.motoVideo1 {
  display: inline;
}

.grid-container {
  display: grid;
  grid-template-columns: 1fr 1fr;
  grid-template-rows: 1fr;
  grid-template-areas: ". .";
}

.instagram {
  align-self: center;
  justify-self: center;
  width: 800px;
  padding: 0px 0px 0px 50px;
  height: 700px;
  border: 0;
  overflow: hidden;
}

.facebook {
  height: 700px;
  border: none;
  overflow: hidden;
  width: 500px;
}

/* CSS PRODUCTOS PARA LA APP*/
#folleto {
  width: 70%;
}

#banner {
  width: 30%;
}

#asistente {
  width: 70%;
}

@media only screen and (max-width: 1330px) {
  .instagram {
    width: 700px;
    padding: 0px 50px 0px 0px;
  }

  .folleto {
    width: 90%;
  }
}
@media only screen and (max-width: 1210px) {
  .grid-container {
    display: grid;
    grid-template-columns: 1fr;
    grid-template-rows: 1fr 1fr;
    grid-template-areas: "." ".";
  }

  .instagram {
    align-self: center;
    justify-self: center;
    width: 500px;
    padding: 0px 0px 0px 50px;
    height: 600px;
    border: 0;
    overflow: hidden;
  }

  .facebook {
    height: 700px;
    border: none;
    overflow: hidden;
    width: 500px;
  }

  .folleto {
    width: 100%;
    padding: 10px;
    height: 350px;
  }
}
@media only screen and (max-width: 510px) {
  .pantallaGrande .newsHome {
    display: none;
  }

  .pantallaChica2 {
    display: inline;
  }

  .motoVideo {
    display: inline;
  }

  .motoVideo1 {
    display: none;
  }

  .grid-container {
    display: grid;
    grid-template-columns: 1fr;
    grid-template-rows: 1fr 1fr;
    grid-template-areas: "." ".";
  }

  .instagram {
    align-self: center;
    justify-self: center;
    width: 350px;
    padding: 50px 0px 0px 0px;
    height: 400px;
    border: 0;
    overflow: hidden;
  }

  .facebook {
    height: 600px;
    border: none;
    overflow: hidden;
    width: 350px;
  }
}
.contenedorContador {
  height: 100vh;
}
.contenedorContador .contador {
  padding-top: 15px;
  background: #c42fe0;
  background: -moz-linear-gradient(-45deg, #c42fe0 22%, #5ea9fa 100%);
  background: -webkit-linear-gradient(-45deg, #c42fe0 22%, #5ea9fa 100%);
  background: linear-gradient(135deg, #c42fe0 22%, #5ea9fa 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#c42fe0", endColorstr="#5ea9fa",GradientType=1 );
  width: 400px;
  height: 150px;
  position: absolute;
  bottom: 15%;
  left: 38%;
  border-radius: 15px;
  font-size: 1.2em;
  text-transform: uppercase;
  font-weight: 400;
}
.contenedorContador .contador .titulo {
  color: white;
  font-weight: 500;
  font-size: 1.3em;
}
.contenedorContador .contador .tiempo {
  font-weight: 400;
  font-size: 1.6em;
}
.contenedorContador .contador .tiempo .horas {
  margin-top: 5px;
  padding-top: 5px;
  height: 55px;
  width: 40px;
  background-color: #ecdbfb;
  color: rgb(114, 39, 137);
  position: center;
  float: left;
  border-radius: 8px;
  margin-left: 13%;
}
.contenedorContador .contador .tiempo .horas2 {
  margin-top: 5px;
  padding-top: 5px;
  height: 55px;
  width: 40px;
  background-color: #ecdbfb;
  color: rgb(114, 39, 137);
  position: center;
  margin-left: 3px;
  float: left;
  border-radius: 8px;
}
.contenedorContador .contador .tiempo .separador {
  margin-top: 5px;
  padding-top: 0px;
  height: 5px;
  width: 10px;
  color: white;
  position: center;
  margin-left: 5px;
  float: left;
  border-radius: 8px;
}
.contenedorContador .contador .tiempo .minutos {
  margin-top: 5px;
  padding-top: 5px;
  height: 55px;
  width: 40px;
  background-color: #ecdbfb;
  color: rgb(114, 39, 137);
  position: center;
  margin-left: 5px;
  float: left;
  border-radius: 8px;
}
.contenedorContador .contador .tiempo .minutos2 {
  margin-top: 5px;
  padding-top: 5px;
  height: 55px;
  width: 40px;
  background-color: #ecdbfb;
  color: rgb(114, 39, 137);
  position: center;
  margin-left: 5px;
  float: left;
  border-radius: 8px;
}
.contenedorContador .contador .tiempo .segundos {
  margin-top: 5px;
  padding-top: 5px;
  height: 55px;
  width: 40px;
  background-color: #ecdbfb;
  color: rgb(114, 39, 137);
  position: center;
  margin-left: 5px;
  float: left;
  border-radius: 8px;
}
.contenedorContador .contador .tiempo .segundos2 {
  margin-top: 5px;
  padding-top: 5px;
  height: 55px;
  width: 40px;
  background-color: #ecdbfb;
  color: rgb(114, 39, 137);
  position: center;
  margin-left: 5px;
  float: left;
  border-radius: 8px;
}
.contenedorContador .contador .textoTiempo {
  margin-top: 5px;
  font-weight: 400;
  font-size: 0.9em;
  color: white;
}
.contenedorContador .contador .textoTiempo .horas {
  margin-top: -35px;
  position: center;
  float: left;
  border-radius: 8px;
  margin-left: 70px;
}
.contenedorContador .contador .textoTiempo .minutos {
  margin-top: -35px;
  position: center;
  float: left;
  border-radius: 8px;
  margin-left: 170px;
}
.contenedorContador .contador .textoTiempo .segundos {
  margin-top: -35px;
  position: center;
  float: left;
  border-radius: 8px;
  margin-left: 260px;
}
.contenedorContador .contador .textoTiempo span {
  margin-top: -30px;
  margin-left: -150px;
  width: 300px;
  position: absolute;
}

@media only screen and (max-width: 770px) {
  .contenedorContador .contador {
    left: 15%;
  }
}
@media only screen and (max-width: 500px) {
  .contenedorContador .contador {
    left: 15%;
    width: 300px;
    height: 150px;
  }
  .contenedorContador .contador .titulo {
    color: white;
    font-weight: 500;
    font-size: 1.1em;
  }
  .contenedorContador .contador .tiempo {
    font-weight: 400;
    font-size: 1.6em;
  }
  .contenedorContador .contador .tiempo .horas {
    margin-top: 5px;
    padding-top: 0px;
    height: 50px;
    width: 40px;
    margin-left: 1%;
  }
  .contenedorContador .contador .tiempo .horas2 {
    margin-top: 5px;
    padding-top: 0px;
    height: 50px;
    width: 40px;
  }
  .contenedorContador .contador .tiempo .separador {
    margin-top: 0px;
    padding-top: 0px;
    height: 5px;
    width: 10px;
  }
  .contenedorContador .contador .tiempo .minutos {
    margin-top: 5px;
    padding-top: 0px;
    height: 50px;
    width: 40px;
  }
  .contenedorContador .contador .tiempo .minutos2 {
    margin-top: 5px;
    padding-top: 0px;
    height: 50px;
    width: 40px;
  }
  .contenedorContador .contador .tiempo .segundos {
    margin-top: 5px;
    padding-top: 0px;
    height: 50px;
    width: 40px;
  }
  .contenedorContador .contador .tiempo .segundos2 {
    margin-top: 5px;
    padding-top: 0px;
    height: 50px;
    width: 40px;
  }
  .contenedorContador .contador .textoTiempo {
    margin-top: 5px;
    font-weight: 400;
    font-size: 0.9em;
    color: white;
  }
  .contenedorContador .contador .textoTiempo .horas {
    margin-top: -35px;
    position: center;
    float: left;
    border-radius: 8px;
    margin-left: 20px;
  }
  .contenedorContador .contador .textoTiempo .minutos {
    margin-top: -35px;
    position: center;
    float: left;
    border-radius: 8px;
    margin-left: 120px;
  }
  .contenedorContador .contador .textoTiempo .segundos {
    margin-top: -35px;
    position: center;
    float: left;
    border-radius: 8px;
    margin-left: 210px;
  }
  .contenedorContador .contador .textoTiempo span {
    margin-top: -30px;
    margin-left: -150px;
    width: 300px;
    position: absolute;
  }
}
/* -------------------------------------------------------- reset */
/* -------------------------------------------------------- codepen
.containerSlider {
  width: 100%;
  margin: 0 auto;
  font-family: "Raleway", sans-serif;
  color: #fff;
  font-size: 1.75vw;
}
.containerSlider * {
  width: 30%;
  margin: 0 auto;
  padding: 0;
  text-align: center;
}
.containerSlider h1 {
  font-size: 6vw;
  text-transform: uppercase;
  font-weight: normal;
} 
.containerSlider .containerSlidera {
  color: inherit;
  text-decoration: none;
  outline: 0;
}
.containerSlider ul,
li {
  list-style: none;
}
.containerSlider label {
  cursor: pointer;
}
.containerSlider input {
  display: none;
}
/* -------------------------------------------------------- codepen */
/* -------------------------------------------------------- slider 
.sliderHome {
  height: 25vw;
  overflow: hidden;
}
/* -------------------------------------------------------- slide 
.sliderHome > ul {
  height: 100%;
  z-index: 100;
}
.sliderHome > ul > li {
  height: 100%;
  position: absolute;
  left: 0;
  top: 0;

  opacity: 0;
  z-index: 1;
  -webkit-transition: all 2000ms ease;
  -moz-transition: all 2000ms ease;
  -ms-transition: all 2000ms ease;
  -o-transition: all 2000ms ease;
  transition: all 2000ms ease;
}
.sliderHome > #input-slide-0:checked ~ ul > li.slide-0,
.sliderHome > #input-slide-1:checked ~ ul > li.slide-1,
.sliderHome > #input-slide-2:checked ~ ul > li.slide-2,
.sliderHome > #input-slide-3:checked ~ ul > li.slide-3 {
  opacity: 1;
  z-index: 2;
}
.sliderHome > ul > li.slide-0 {
  background-color: #00dbf9;
}
.sliderHome > ul > li.slide-1 {
  background-color: #47d7ed;
}
.sliderHome > ul > li.slide-2 {
  background-color: #0093e9;
}
.sliderHome > ul > li.slide-3 {
  background-color: #0073b6;
}
/* -------------------------------------------------------- arrow 
.sliderHome > .slider-arrow-prev,
.sliderHome > .slider-arrow-next {
  position: absolute;
  top: 50%;
  left: 0;
  z-index: 300;
}
.sliderHome > .slider-arrow-prev > label,
.sliderHome > .slider-arrow-next > label {
  position: absolute;
  width: 5vw;
  height: 5vw;
  margin-top: -2.5vw;
  opacity: 0;
  background-size: 100% auto;
  background-position: center;

  z-index: -1;
  -webkit-transition: all 0.5s ease;
  -moz-transition: all 0.5s ease;
  -ms-transition: all 0.5s ease;
  -o-transition: all 0.5s ease;
  transition: all 0.5s ease;
}
.sliderHome > #input-slide-0:checked ~ .slider-arrow-prev > label.slide-3,
.sliderHome > #input-slide-0:checked ~ .slider-arrow-next > label.slide-1,
.sliderHome > #input-slide-1:checked ~ .slider-arrow-prev > label.slide-0,
.sliderHome > #input-slide-1:checked ~ .slider-arrow-next > label.slide-2,
.sliderHome > #input-slide-2:checked ~ .slider-arrow-prev > label.slide-1,
.sliderHome > #input-slide-2:checked ~ .slider-arrow-next > label.slide-3,
.sliderHome > #input-slide-3:checked ~ .slider-arrow-prev > label.slide-2,
.sliderHome > #input-slide-3:checked ~ .slider-arrow-next > label.slide-0 {
  z-index: 1;
}
.sliderHome:hover > .slider-arrow-prev > label,
.sliderHome:hover > .slider-arrow-next > label {
  opacity: 1;
}
.sliderHome > .slider-arrow-prev > label {
  left: 5vw;
  background-image: url(http://panikaro.interiowo.pl/img/arrow-left.png);
}
.sliderHome > .slider-arrow-next > label {
  right: 5vw;
  background-image: url(http://panikaro.interiowo.pl/img/arrow-right.png);
}
/* -------------------------------------------------------- dot 
.sliderHome > .slider-dot {
  position: relative;
  margin-top: -4vw;
  text-align: center;
  z-index: 300;
  font-size: 0;
}
.sliderHome > .slider-dot > label {
  position: relative;
  display: inline-block;
  margin: 1vw 0.5vw;
  width: 1vw;
  height: 1vw;
  border-radius: 50%;

  background-color: #fff;
}
.sliderHome > #input-slide-0:checked ~ .slider-dot > label.slide-0,
.sliderHome > #input-slide-1:checked ~ .slider-dot > label.slide-1,
.sliderHome > #input-slide-2:checked ~ .slider-dot > label.slide-2,
.sliderHome > #input-slide-3:checked ~ .slider-dot > label.slide-3 {
  background-color: #fd7fe3;
}
.sliderHome > .slider-dot > label:hover {
  background-color: #7e6de0 !important;
}
/* -------------------------------------------------------- description *
.sliderHome > .slide-description {
  position: absolute;
  width: 50%;
  top: calc(50% - 3vw);
  left: 25%;
  z-index: 200;
}
.sliderHome > .slide-description > label {
  position: absolute;
  width: 100%;
  top: 0;
  left: 0;
  cursor: default;

  z-index: 0;
  opacity: 0;
  visibility: hidden;
  -webkit-transition: all 0.75s ease;
  -moz-transition: all 0.75s ease;
  -ms-transition: all 0.75s ease;
  -o-transition: all 0.75s ease;
  transition: all 0.75s ease;
}
.sliderHome > #input-slide-0:checked ~ .slide-description > .slide-0,
.sliderHome > #input-slide-1:checked ~ .slide-description > .slide-1,
.sliderHome > #input-slide-2:checked ~ .slide-description > .slide-2,
.sliderHome > #input-slide-3:checked ~ .slide-description > .slide-3 {
  z-index: 2;
  opacity: 1;
  visibility: visible;
}
.sliderHome > .slide-description > label > .text-slide {
  margin: 0 auto;
  line-height: 6vw;
  text-align: center;
}
.sliderHome > .slide-description > .slide-0 {
  font-family: "Raleway", sans-serif;
}
.sliderHome > .slide-description > .slide-1 {
  font-family: "Poiret One", cursive;
}
.sliderHome > .slide-description > .slide-2 {
  font-family: "Monoton", cursive;
}
.sliderHome > .slide-description > .slide-3 {
  font-family: "Audiowide", cursive;
}
/* -------------------------------------------------------- autoplay */
/*
	if you don't want to autoplay 
  just check input "slide-0" 
  instead of input "play" in html code
  and remove the code below
*/
/* -------------------------------------------------------- autoplay slide *
@-webkit-keyframes slide {
  0%,
  100% {
    opacity: 0;
  }
  6%,
  25% {
    opacity: 1;
    z-index: 2;
  }
  30%,
  50% {
    opacity: 0;
    z-index: 2;
  }
}
@-moz-keyframes slide {
  0%,
  100% {
    opacity: 0;
  }
  6%,
  24% {
    opacity: 1;
    z-index: 2;
  }
  30%,
  50% {
    opacity: 0;
    z-index: 2;
  }
}
@-ms-keyframes slide {
  0%,
  100% {
    opacity: 0;
  }
  6%,
  25% {
    opacity: 1;
    z-index: 2;
  }
  30%,
  50% {
    opacity: 0;
    z-index: 2;
  }
}
@-o-keyframes slide {
  0%,
  100% {
    opacity: 0;
  }
  6%,
  25% {
    opacity: 1;
    z-index: 2;
  }
  30%,
  50% {
    opacity: 0;
    z-index: 2;
  }
}
@keyframes slide {
  0%,
  100% {
    opacity: 0;
  }
  6%,
  25% {
    opacity: 1;
    z-index: 2;
  }
  30%,
  50% {
    opacity: 0;
    z-index: 2;
  }
}
.sliderHome > #input-slide-autoplay:checked ~ ul > li.slide-0 {
  -webkit-animation: slide 32000ms infinite -2000ms linear;
  -moz-animation: slide 32000ms infinite -2000ms linear;
  -ms-animation: slide 32000ms infinite -2000ms linear;
  -o-animation: slide 32000ms infinite -2000ms linear;
  animation: slide 32000ms infinite -2000ms linear;
}
.sliderHome > #input-slide-autoplay:checked ~ ul > li.slide-1 {
  -webkit-animation: slide 32000ms infinite 6000ms linear;
  -moz-animation: slide 32000ms infinite 6000ms linear;
  -ms-animation: slide 32000ms infinite 6000ms linear;
  -o-animation: slide 32000ms infinite 6000ms linear;
  animation: slide 32000ms infinite 6000ms linear;
}
.sliderHome > #input-slide-autoplay:checked ~ ul > li.slide-2 {
  -webkit-animation: slide 32000ms infinite 14000ms linear;
  -moz-animation: slide 32000ms infinite 14000ms linear;
  -ms-animation: slide 32000ms infinite 14000ms linear;
  -o-animation: slide 32000ms infinite 14000ms linear;
  animation: slide 32000ms infinite 14000ms linear;
}
.sliderHome > #input-slide-autoplay:checked ~ ul > li.slide-3 {
  -webkit-animation: slide 32000ms infinite 22000ms linear;
  -moz-animation: slide 32000ms infinite 22000ms linear;
  -ms-animation: slide 32000ms infinite 22000ms linear;
  -o-animation: slide 32000ms infinite 22000ms linear;
  animation: slide 32000ms infinite 22000ms linear;
}
.sliderHome > #input-slide-autoplay:checked ~ ul > li {
  -webkit-transition: none;
  -moz-transition: none;
  -ms-transition: none;
  -o-transition: none;
  transition: none;
}
/* -------------------------------------------------------- autoplay arrow *
@-webkit-keyframes arrow {
  0%,
  24% {
    z-index: 1;
  }
  25%,
  100% {
    z-index: -1;
  }
}
@-moz-keyframes arrow {
  0%,
  24% {
    z-index: 1;
  }
  25%,
  100% {
    z-index: -1;
  }
}
@-ms-keyframes arrow {
  0%,
  24% {
    z-index: 1;
  }
  25%,
  100% {
    z-index: -1;
  }
}
@-o-keyframes arrow {
  0%,
  24% {
    z-index: 1;
  }
  25%,
  100% {
    z-index: -1;
  }
}
@keyframes arrow {
  0%,
  24% {
    z-index: 1;
  }
  25%,
  100% {
    z-index: -1;
  }
}
.sliderHome
  > #input-slide-autoplay:checked
  ~ .slider-arrow-prev
  > label.slide-3,
.sliderHome
  > #input-slide-autoplay:checked
  ~ .slider-arrow-next
  > label.slide-1 {
  -webkit-animation: arrow 32000ms infinite -2000ms;
  -moz-animation: arrow 32000ms infinite -2000ms;
  -ms-animation: arrow 32000ms infinite -2000ms;
  -o-animation: arrow 32000ms infinite -2000ms;
  animation: arrow 32000ms infinite -2000ms;
}
.sliderHome
  > #input-slide-autoplay:checked
  ~ .slider-arrow-prev
  > label.slide-0,
.sliderHome
  > #input-slide-autoplay:checked
  ~ .slider-arrow-next
  > label.slide-2 {
  -webkit-animation: arrow 32000ms infinite 6000ms;
  -moz-animation: arrow 32000ms infinite 6000ms;
  -ms-animation: arrow 32000ms infinite 6000ms;
  -o-animation: arrow 32000ms infinite 6000ms;
  animation: arrow 32000ms infinite 6000ms;
}
.sliderHome
  > #input-slide-autoplay:checked
  ~ .slider-arrow-prev
  > label.slide-1,
.sliderHome
  > #input-slide-autoplay:checked
  ~ .slider-arrow-next
  > label.slide-3 {
  -webkit-animation: arrow 32000ms infinite 14000ms;
  -moz-animation: arrow 32000ms infinite 14000ms;
  -ms-animation: arrow 32000ms infinite 14000ms;
  -o-animation: arrow 32000ms infinite 14000ms;
  animation: arrow 32000ms infinite 14000ms;
}
.sliderHome
  > #input-slide-autoplay:checked
  ~ .slider-arrow-prev
  > label.slide-2,
.sliderHome
  > #input-slide-autoplay:checked
  ~ .slider-arrow-next
  > label.slide-0 {
  -webkit-animation: arrow 32000ms infinite 22000ms;
  -moz-animation: arrow 32000ms infinite 22000ms;
  -ms-animation: arrow 32000ms infinite 22000ms;
  -o-animation: arrow 32000ms infinite 22000ms;
  animation: arrow 32000ms infinite 22000ms;
}
/* -------------------------------------------------------- autoplay dot *
@-webkit-keyframes dot {
  0%,
  24% {
    background-color: #fd7fe3;
  }
  25%,
  100% {
    background: #fff;
  }
}
@-moz-keyframes dot {
  0%,
  24% {
    background-color: #fd7fe3;
  }
  25%,
  100% {
    background: #fff;
  }
}
@-ms-keyframes dot {
  0%,
  24% {
    background-color: #fd7fe3;
  }
  25%,
  100% {
    background: #fff;
  }
}
@-o-keyframes dot {
  0%,
  24% {
    background-color: #fd7fe3;
  }
  25%,
  100% {
    background: #fff;
  }
}
@keyframes dot {
  0%,
  24% {
    background-color: #fd7fe3;
  }
  25%,
  100% {
    background: #fff;
  }
}
.sliderHome > #input-slide-autoplay:checked ~ .slider-dot > label.slide-0 {
  -webkit-animation: dot 32000ms infinite -2000ms;
  -moz-animation: dot 32000ms infinite -2000ms;
  -ms-animation: dot 32000ms infinite -2000ms;
  -o-animation: dot 32000ms infinite -2000ms;
  animation: dot 32000ms infinite -2000ms;
}
.sliderHome > #input-slide-autoplay:checked ~ .slider-dot > label.slide-1 {
  -webkit-animation: dot 32000ms infinite 6000ms;
  -moz-animation: dot 32000ms infinite 6000ms;
  -ms-animation: dot 32000ms infinite 6000ms;
  -o-animation: dot 32000ms infinite 6000ms;
  animation: dot 32000ms infinite 6000ms;
}
.sliderHome > #input-slide-autoplay:checked ~ .slider-dot > label.slide-2 {
  -webkit-animation: dot 32000ms infinite 14000ms;
  -moz-animation: dot 32000ms infinite 14000ms;
  -ms-animation: dot 32000ms infinite 14000ms;
  -o-animation: dot 32000ms infinite 14000ms;
  animation: dot 32000ms infinite 14000ms;
}
.sliderHome > #input-slide-autoplay:checked ~ .slider-dot > label.slide-3 {
  -webkit-animation: dot 32000ms infinite 22000ms;
  -moz-animation: dot 32000ms infinite 22000ms;
  -ms-animation: dot 32000ms infinite 22000ms;
  -o-animation: dot 32000ms infinite 22000ms;
  animation: dot 32000ms infinite 22000ms;
}
/* -------------------------------------------------------- autoplay description *
@-webkit-keyframes description {
  0%,
  5% {
    opacity: 0;
    z-index: 2;
    visibility: visible;
  }
  6%,
  24% {
    opacity: 1;
    z-index: 2;
    visibility: visible;
  }
  25%,
  100% {
    opacity: 0;
    z-index: 0;
    visibility: hidden;
  }
}
@-moz-keyframes description {
  0%,
  5% {
    opacity: 0;
    z-index: 2;
    visibility: visible;
  }
  6%,
  24% {
    opacity: 1;
    z-index: 2;
    visibility: visible;
  }
  25%,
  100% {
    opacity: 0;
    z-index: 0;
    visibility: hidden;
  }
}
@-ms-keyframes description {
  0%,
  5% {
    opacity: 0;
    z-index: 2;
    visibility: visible;
  }
  6%,
  24% {
    opacity: 1;
    z-index: 2;
    visibility: visible;
  }
  25%,
  100% {
    opacity: 0;
    z-index: 0;
    visibility: hidden;
  }
}
@-o-keyframes description {
  0%,
  5% {
    opacity: 0;
    z-index: 2;
    visibility: visible;
  }
  6%,
  24% {
    opacity: 1;
    z-index: 2;
    visibility: visible;
  }
  25%,
  100% {
    opacity: 0;
    z-index: 0;
    visibility: hidden;
  }
}
@keyframes description {
  0%,
  5% {
    opacity: 0;
    z-index: 2;
    visibility: visible;
  }
  6%,
  24% {
    opacity: 1;
    z-index: 2;
    visibility: visible;
  }
  25%,
  100% {
    opacity: 0;
    z-index: 0;
    visibility: hidden;
  }
}
.sliderHome > #input-slide-autoplay:checked ~ .slide-description > .slide-0 {
  -webkit-animation: description 32000ms infinite -2000ms ease;
  -moz-animation: description 32000ms infinite -2000ms ease;
  -ms-animation: description 32000ms infinite -2000ms ease;
  -o-animation: description 32000ms infinite -2000ms ease;
  animation: description 32000ms infinite -2000ms ease;
}
.sliderHome > #input-slide-autoplay:checked ~ .slide-description > .slide-1 {
  -webkit-animation: description 32000ms infinite 6000ms ease;
  -moz-animation: description 32000ms infinite 6000ms ease;
  -ms-animation: description 32000ms infinite 6000ms ease;
  -o-animation: description 32000ms infinite 6000ms ease;
  animation: description 32000ms infinite 6000ms ease;
}
.sliderHome > #input-slide-autoplay:checked ~ .slide-description > .slide-2 {
  -webkit-animation: description 32000ms infinite 14000ms ease;
  -moz-animation: description 32000ms infinite 14000ms ease;
  -ms-animation: description 32000ms infinite 14000ms ease;
  -o-animation: description 32000ms infinite 14000ms ease;
  animation: description 32000ms infinite 14000ms ease;
}
.sliderHome > #input-slide-autoplay:checked ~ .slide-description > .slide-3 {
  -webkit-animation: description 32000ms infinite 22000ms ease;
  -moz-animation: description 32000ms infinite 22000ms ease;
  -ms-animation: description 32000ms infinite 22000ms ease;
  -o-animation: description 32000ms infinite 22000ms ease;
  animation: description 32000ms infinite 22000ms ease;
}
.sliderHome > #input-slide-autoplay:checked ~ .slide-description > label {
  -webkit-transition: none;
  -moz-transition: none;
  -ms-transition: none;
  -o-transition: none;
  transition: none;
}
/* -------------------------------------------------------- end codepen */
.menu-item {
  padding: 0 40px;
  margin: 5px 10px;
  user-select: none;
  cursor: pointer;
  border: none;
}

.menu-item-wrapper.active {
  border: 1px blue solid;
}

.menu-item.active {
  border: 1px green solid;
}

.scroll-menu-arrow {
  padding: 20px;
  cursor: pointer;
}

/* -------------------------------------------------------- inicio producto */
.Productosection {
  box-sizing: border-box;
  background-color: red;
}

.divProducto {
  width: 400px;
  overflow: hidden;
  background-color: blue;
}

.Productocontainer {
  background-color: black;
  margin: 10% 0;
  padding: 0 10%;
  height: 100vh;
  display: flex;
  justify-content: center;
  align-items: center;
  overflow: -moz-hidden-unscrollable;
  min-height: 300px;
  width: 100%;
}

.Producto {
  background-color: violet;
  border: violet solid 5px;
  border-radius: 13px 13px 13px 13px;
  -webkit-border-radius: 13px 13px 13px 13px;
  -moz-border-radius: 13px 13px 13px 13px;
  flex: 1;
  transition: 1s;
  overflow: hidden;
  min-height: 300px;
}

.Producto img {
  height: 800px;
  width: 910px;
}

.Productoarticle,
.Productop {
  margin: 10px;
}

.Productodragscroll {
  cursor: grab;
  cursor: -o-grab;
  cursor: -moz-grab;
  cursor: -webkit-grab;
}

.Producto:hover {
  flex: 4;
}

.grid-container {
  background: #ffffff;
  font-family: "Rubik", sans-serif;
}

@supports (display: grid) {
  .grid-container {
    display: grid;
    grid-template-columns: 1fr 1fr 1fr;
    grid-template-rows: auto 1fr auto;
    grid-template-areas: "header header header" "title title footer" "main main main";
  }
  @media screen and (max-width: 500px) {
    .grid-container {
      grid-template-columns: 1fr;
      grid-template-rows: 0.3fr 1fr auto 1fr;
      grid-template-areas: "header" "title" "main" "footer";
    }
  }

  .grid-item {
    color: #fff;
    background: skyblue;
    padding: 3.5em 1em;
    font-size: 1em;
    font-weight: 700;
  }

  .main {
    color: white;
    background-color: white;
    grid-area: main;
    padding: 0;
    overflow-x: hidden;
    overflow-y: hidden;
  }

  .items {
    position: relative;
    width: 100%;
    height: 73vh;
    overflow-x: hidden;
    overflow-y: hidden;
    white-space: nowrap;
    transition: all 0.2s;
    transform: scale(0.98);
    will-change: transform;
    user-select: none;
    cursor: pointer;
  }

  .items.active {
    background: rgba(255, 255, 255, 0.3);
    cursor: grabbing;
    cursor: -webkit-grabbing;
    transform: scale(1);
  }

  .item {
    display: inline-block;
    background: skyblue;
    min-height: 600px;
    min-width: 290px;
    max-width: 290px;
    margin: 0.5em;
    border-radius: 0.5em;
    transition: 1s;
  }
  @media screen and (max-width: 500px) {
    .item {
      min-height: 200px;
      min-width: 200px;
    }
  }

  .item:hover {
    min-width: 800px;
    transition: 0.8s;
  }
  .item:hover .productoP {
    color: white;
  }
  .item:hover .parrafoProducto {
    transition: 0.8s;
  }
}
.parrafoProducto {
  white-space: pre-line;
  margin-top: 150px;
  margin-left: 20px;
  height: 320px;
  width: 750px;
}

.parrafoProducto .productoP {
  font-size: 18pt;
  color: transparent;
  font-weight: 100;
  padding-top: 250px;
  margin-left: 100px;
}

.productoP {
  position: relative;
}

.section-title {
  position: absolute;
  height: 100%;
  color: white;
}
.section-title h2 {
  font-size: 80px;
  font-family: "roboto";
  font-weight: 800;
  margin-left: -180px;
  margin-top: 290px;
  transform: rotate(-90deg);
  white-space: nowrap;
}

.productoSubtitulo {
  position: absolute;
  bottom: 0px;
  color: black;
}

.productoSubtitulo > h5:first-child {
  font-weight: bold;
}

.salinas {
  margin-left: 100px;
  margin-top: 100px;
}

.sierras {
  margin-left: 30px;
  margin-top: 40px;
}

.parques {
  margin-left: 80px;
  margin-top: 90px;
}

.aventura {
  margin-left: 70px;
  margin-top: 70px;
}

.item1 {
  background-image: url("http://www.turismo.sanluis.gov.ar/api-turismo/public/recursos/scrollProductos/gastronomia.jpg");
  background-position: 85% 15%;
  background-size: cover;
}

.item2 {
  background-image: url("http://www.turismo.sanluis.gov.ar/api-turismo/public/recursos/scrollProductos/salinas.jpg");
  background-position: 55% 5%;
  background-size: cover;
}

.item3 {
  background-image: url("http://www.turismo.sanluis.gov.ar/api-turismo/public/recursos/scrollProductos/sierras.jpg");
  background-position: 35% 15%;
  background-size: cover;
}

.item4 {
  background-image: url("http://www.turismo.sanluis.gov.ar/api-turismo/public/recursos/scrollProductos/minas.jpg");
  background-position: 45% 15%;
  background-size: cover;
}

.item5 {
  background-image: url("http://www.turismo.sanluis.gov.ar/api-turismo/public/recursos/scrollProductos/parques.jpg");
  background-position: 35% 15%;
  background-size: cover;
}

.item6 {
  background-image: url("http://www.turismo.sanluis.gov.ar/api-turismo/public/recursos/scrollProductos/aventura.jpg");
  background-position: 35% 15%;
  background-size: cover;
}

.tituloScrollActividades {
  margin-top: 50px;
}
.tituloScrollActividades h5 {
  color: #28292a;
  text-transform: initial;
}

/* -------------------------------------------------------- end producto 

$box-count: 4;

body {
  background-color: #111;
  width: 100%;
}

body * {
  box-sizing: border-box;
}

.boxes {
  display: flex;

  .box {
    background-color: #fff;
    flex: 1 1 25%;
    display: flex;
    justify-content: center;
    align-items: center;
    height: 100vh;
    font: 1em/1 "Poppins", sans-serif;
    font-weight: 400;
    transition: all 0.6s ease-out;
    position: relative;

    &__title {
      font-size: 3vw;
      color: white;
      margin-bottom: 0.5em;
      transition: all 0.3s ease-out 0.1s;
    }
    &__content {
      position: absolute;
      top: 0;
      left: 0;
      right: 0;
      bottom: 0;
      background-color: rgba(1, 1, 1, 0.5);
      // backdrop-filter: blur(6px);
      display: flex;
      flex-flow: column nowrap;
      justify-content: center;
      justify-items: center;
      align-content: center;
      align-items: center;
      opacity: 0;
      transition: all 0.3s ease-in;
      text-align: center;
      padding: 2vw;
    }
    &__summary {
      font-size: 1.2vw;
      line-height: 1.4;
      color: white;
      margin: 0 auto;
      max-width: 22vw;
      transition: all 0.3s ease-out 0.1s;
    }

    // 		Background color for boxes
    &:nth-child(1) {
      background-color: #2b50aa;
      background: url(https://images.unsplash.com/photo-1485871981521-5b1fd3805eee?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1170&q=80)
        center/cover no-repeat;
    }
    &:nth-child(2) {
      background-color: #ff9fe5;
      background: url(https://images.unsplash.com/photo-1590655473571-742fd3b29b78?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1074&q=80)
        center/cover no-repeat;
    }
    &:nth-child(3) {
      background-color: #ffd4d4;
      background: url(https://images.unsplash.com/photo-1465850238811-80ce79442c7a?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1332&q=80)
        center/cover no-repeat;
    }
    &:nth-child(4) {
      background-color: #ff858d;
      background: url(https://images.unsplash.com/photo-1585614938326-d57d07333bc0?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1170&q=80)
        center/cover no-repeat;
    }

    // 		Hover effect

    &:hover {
      flex: 1 1 75%;
      .box__title {
        letter-spacing: 0;
      }
      .box__content {
        opacity: 1;
      }
    }
  }
}
*/
.newsletter {
  display: -webkit-flex;
  display: -ms-flex;
  align-items: center;
  justify-content: center;
  width: 295px;
  z-index: 99;
  position: fixed;
  /* Fixed/sticky position */
  -webkit-transform: translate3d(0, 0, 0);
  -o-transform: translate3d(0, 0, 0);
  transform: translate3d(0, 0, 0);
  bottom: 15px;
  /* Place the button at the bottom of the page */
  left: 10px;
  background-color: white;
  border-radius: 9px;
  padding: 5px 20px;
  box-shadow: 0 14px 28px rgba(0, 0, 0, 0.25), 0 10px 10px rgba(0, 0, 0, 0.22);
}
.newsletter .newsletterFullBody {
  margin: 0px auto;
  width: 100%;
}
.newsletter .newsletterFullBody .newsHeader {
  padding-top: 5px;
}
.newsletter .newsletterFullBody .newsHeader .buttonX {
  position: absolute;
  right: 5px;
  top: 4px;
}
.newsletter .newsletterFullBody .newsHeader .newsTitle {
  color: rgb(114, 39, 137);
  font-size: 1em;
}
.newsletter .newsletterFullBody .newsEmail {
  border-radius: 15px;
  border: solid lightgray;
  width: 100%;
  height: 40px;
}
.newsletter .newsletterFullBody .newsEmail:focus {
  outline-color: darkgray;
}
.newsletter .newsletterFullBody .newsMsg {
  width: 90%;
  height: 40px;
  border: none;
  border-radius: 20px;
  outline: none;
  text-align: center;
}
.newsletter .newsletterFullBody .newsMsg:disabled {
  background: rgb(114, 39, 137);
  background: -moz-linear-gradient(left, rgba(114, 39, 137, 0.6) 0%, rgba(237, 15, 104, 0.7) 100%);
  background: -webkit-linear-gradient(left, rgba(114, 39, 137, 0.6) 0%, rgba(237, 15, 104, 0.7) 100%);
  background: linear-gradient(to right, rgba(114, 39, 137, 0.6) 0%, rgba(237, 15, 104, 0.7) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
  background-color: rgb(237, 15, 104);
  color: white;
}
.newsletter .newsletterFullBody .newsFooterButton {
  width: 100%;
  height: 40px;
  border-radius: 15px;
  margin-bottom: 10px;
  border: none;
  background-color: rgb(114, 39, 137);
  color: white;
}
.newsletter .newsletterFullBody .newsFooterButton:hover {
  outline: none;
  background-color: rgb(127, 62, 146);
}

.PDesuscribir {
  padding-top: 160px;
  padding-bottom: 100px;
  text-align: center;
}
.PDesuscribir .DesEmail {
  border-radius: 5px;
  border: solid lightgray;
  width: 60%;
  margin-top: 40px;
  height: 40px;
}
.PDesuscribir .DesEmail:focus {
  outline-color: darkgray;
}
.PDesuscribir .DesConfirm {
  width: 60%;
  height: 40px;
  border-radius: 5px;
  margin-top: 40px;
  border: none;
  background-color: rgb(114, 39, 137);
  color: white;
}
.PDesuscribir .DesConfirm:hover {
  outline: none;
  background-color: rgb(127, 62, 146);
}
.PDesuscribir .DesMsg {
  color: rgb(237, 15, 104);
}

/*
    Componente Footer.js
*/
.wrapper {
  width: 100%;
  height: 200px;
  padding: 50px 0 50px;
  align-items: center;
  align-content: center;
  display: flex;
  background: rgb(114, 39, 137);
  background: -moz-linear-gradient(left, rgb(114, 39, 137) 0%, rgb(237, 15, 104) 100%);
  background: -webkit-linear-gradient(left, rgb(114, 39, 137) 0%, rgb(237, 15, 104) 100%);
  background: linear-gradient(to right, rgb(114, 39, 137) 0%, rgb(237, 15, 104) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr="#722789", endColorstr="#ed0f68",GradientType=1 );
}
@media screen and (max-width: 768px) {
  .wrapper {
    height: auto;
    min-height: 100px;
    align-items: none;
    align-content: none;
  }
}

.profile-card {
  width: 100%;
  height: 150;
  margin: 0 60px 0px 100px;
  padding: 20px 20px 20px 0px;
  box-shadow: 0px 8px 60px -10px rgba(13, 28, 39, 0.6);
  background: #fff;
  border-radius: 12px;
  position: relative;
  display: grid;
  grid-template-areas: "profile-card__ctn profile-card-social profile-card__institucional";
  grid-template-columns: repeat(3, 1fr);
  grid-template-rows: 1fr;
  justify-items: center;
  align-items: center;
}
@media screen and (max-width: 1083px) {
  .profile-card {
    grid-template-areas: "profile-card__ctn profile-card__institucional";
    grid-template-columns: repeat(2, 1fr);
  }
}
@media screen and (max-width: 768px) {
  .profile-card {
    width: 100%;
    min-height: 460px;
    margin: auto;
    box-shadow: 0px 8px 60px -10px rgba(13, 28, 39, 0.6);
    background: #fff;
    border-radius: 12px;
    max-width: 700px;
    position: relative;
    display: inline;
    grid-template-areas: none;
    grid-template-columns: none;
    grid-template-rows: none;
  }
}
.profile-card__img {
  width: 150px;
  height: 150px;
  transform: translateY(-50%);
  border-radius: 50%;
  margin: 150px 0 0 -100%;
  overflow: hidden;
  position: absolute;
  z-index: 4;
}
@media screen and (max-width: 768px) {
  .profile-card__img {
    margin: 0 auto 0 auto;
    position: relative;
  }
}
@media screen and (max-width: 576px) {
  .profile-card__img {
    width: 120px;
    height: 120px;
  }
}
.profile-card__img img {
  display: block;
  width: 100%;
  height: 100%;
  object-fit: cover;
  border-radius: 50%;
}
.profile-card__cnt {
  grid-area: profile-card__ctn;
  margin-left: 80px;
  text-align: center;
  align-content: center;
  transition: all 0.3s;
}
@media screen and (max-width: 768px) {
  .profile-card__cnt {
    grid-area: none;
    margin-top: -35px;
    margin-left: 0;
    padding: 0 20px;
    padding-bottom: 40px;
  }
}
.profile-card__name {
  font-weight: 700;
  font-size: 24px;
  color: rgb(114, 39, 137);
  margin-bottom: 15px;
}
.profile-card__txt {
  font-size: 18px;
  font-weight: 500;
  color: #324e63;
  margin-bottom: 15px;
}
.profile-card__txt strong {
  font-weight: 700;
}
.profile-card-loc {
  display: flex;
  justify-content: center;
  align-items: center;
  font-size: 18px;
  font-weight: 600;
}
.profile-card-loc__icon {
  display: inline-flex;
  font-size: 27px;
  margin-right: 10px;
}
.profile-card-social {
  grid-area: profile-card-social;
  display: flex;
  align-items: center;
  position: relative;
}
@media screen and (max-width: 1083px) {
  .profile-card-social {
    display: none;
  }
}
@media screen and (max-width: 768px) {
  .profile-card-social {
    display: flex;
    grid-area: none;
    margin-top: 5px;
    margin-bottom: 10px;
    justify-content: center;
    align-items: center;
    flex-wrap: wrap;
  }
}
.profile-card-social__item {
  display: flex;
  width: 40px;
  height: 40px;
  margin: 5px;
  border-radius: 50%;
  align-items: center;
  justify-content: center;
  color: #fff;
  position: relative;
  font-size: 21px;
  transition: all 0.3s;
}
@media screen and (max-width: 768px) {
  .profile-card-social__item {
    width: 50px;
    height: 50px;
    margin: 10px;
    display: inline-flex;
    box-shadow: 0px 7px 30px rgba(43, 98, 169, 0.5);
    flex-shrink: 0;
  }
}
@media screen and (min-width: 768px) {
  .profile-card-social__item:hover {
    transform: scale(1.2);
  }
}
@media screen and (max-width: 370px) {
  .profile-card-social__item {
    width: 45px;
    height: 45px;
  }
}
.profile-card-social__item.facebookF {
  background: linear-gradient(45deg, #3b5998, #0078d7);
  box-shadow: 0px 4px 30px rgba(43, 98, 169, 0.5);
}
.profile-card-social__item.twitterF {
  background: linear-gradient(45deg, #1da1f2, #0e71c8);
  box-shadow: 0px 4px 30px rgba(19, 127, 212, 0.7);
}
.profile-card-social__item.instagramF {
  background: linear-gradient(45deg, #405de6, #5851db, #833ab4, #c13584, #e1306c, #fd1d1d);
  box-shadow: 0px 4px 30px rgba(120, 64, 190, 0.6);
}
.profile-card-social__item.whatsappF {
  background: linear-gradient(45deg, #00bb2d, #029424);
  box-shadow: 0px 4px 30px #00bb2d;
}
.profile-card-social__item.youtubeF {
  background: linear-gradient(45deg, #c4302b, #ad2a26);
  box-shadow: 0px 4px 30px #c4302b;
}
.profile-card-social .icon-font {
  display: inline-flex;
}
.profile-card__institucional {
  grid-area: profile-card__institucional;
}
@media screen and (max-width: 768px) {
  .profile-card__institucional {
    grid-area: none;
    margin: 0px 10px 0px 10px;
  }
}

/*
.Footer {
    padding: 20px 40px;
    width: 100%;
    background-color:rgba(114,39,137, 1);
    @include degrado2(0.95, 0.8);
    display: grid;
    grid-template-areas: "logom ministerio social institucional";
    grid-template-columns: repeat(4, 1fr);
    grid-template-rows: 1fr;
    justify-items: center;
    align-items: center;
    .logom { //Si le pones logo no funciona no se porqué ??? !Ver
        grid-area: logom;
        img {
            max-width: 200px;
        }
    }
    .ministerio {
        grid-area: ministerio;  
        text-align: center;
        h3{color:#fff;}
        p {
            color:#fff;
            @include resetP();
            a {
                text-decoration: none;
                color: #fff;
            }
        }
    }
    .social {
        grid-area: social;
        text-align: center;
        h3{color:#fff;}
        i{color:#fff;}
        p {
            @include resetP();
            a {
                text-decoration: none;
                color: #fff;
            }
        }
    }
    .institucional {
        grid-area: institucional;
    }
}

@media only screen and (max-width: 920px) {
    .Footer {
        grid-template-areas: "logom" "ministerio" "social" "institucional";
        grid-template-columns: 1fr;
        grid-template-rows: auto;
        grid-row-gap: 20px !important;
    }
}
*/
ul {
  margin: 0px;
  padding: 0px;
}

.footer-section {
  background: #151414;
  position: relative;
}

.footer-cta {
  border-bottom: 1px solid #373636;
}

.single-cta i {
  color: #ff5e14;
  font-size: 30px;
  float: left;
  margin-top: 8px;
}

.cta-text {
  padding-left: 15px;
  display: inline-block;
}

.cta-text h4 {
  color: #fff;
  font-size: 20px;
  font-weight: 600;
  margin-bottom: 2px;
}

.cta-text span {
  color: #757575;
  font-size: 15px;
}

.footer-content {
  position: relative;
  z-index: 2;
}

.footer-pattern img {
  position: absolute;
  top: 0;
  left: 0;
  height: 330px;
  background-size: cover;
  background-position: 100% 100%;
}

.footer-logo {
  margin-bottom: 30px;
}

.footer-logo img {
  max-width: 200px;
}

.footer-text p {
  margin-bottom: 14px;
  font-size: 14px;
  color: #7e7e7e;
  line-height: 28px;
}

.footer-social-icon span {
  color: #fff;
  display: block;
  font-size: 20px;
  font-weight: 700;
  margin-bottom: 20px;
}

.footer-social-icon a {
  color: #fff;
  font-size: 16px;
  margin-right: 15px;
}

.footer-social-icon i {
  height: 40px;
  width: 40px;
  text-align: center;
  line-height: 38px;
  border-radius: 50%;
}

.facebook-bg {
  background: #3b5998;
}

.twitter-bg {
  background: #55acee;
}

.google-bg {
  background: #dd4b39;
}

.footer-widget-heading h3 {
  color: #fff;
  font-size: 20px;
  font-weight: 600;
  margin-bottom: 40px;
  position: relative;
}

.footer-widget-heading h3::before {
  content: "";
  position: absolute;
  left: 0;
  bottom: -15px;
  height: 2px;
  width: 50px;
  background: #ff5e14;
}

.footer-widget ul li {
  display: inline-block;
  float: left;
  width: 50%;
  margin-bottom: 12px;
}

.footer-widget ul li a:hover {
  color: #ff5e14;
}

.footer-widget ul li a {
  color: #878787;
  text-transform: capitalize;
}

.subscribe-form {
  position: relative;
  overflow: hidden;
}

.subscribe-form input {
  width: 100%;
  padding: 14px 28px;
  background: #2e2e2e;
  border: 1px solid #2e2e2e;
  color: #fff;
}

.subscribe-form button {
  position: absolute;
  right: 0;
  background: #ff5e14;
  padding: 13px 20px;
  border: 1px solid #ff5e14;
  top: 0;
}

.subscribe-form button i {
  color: #fff;
  font-size: 22px;
  transform: rotate(-6deg);
}

.copyright-area {
  background: #202020;
  padding: 25px 0;
}

.copyright-text p {
  margin: 0;
  font-size: 14px;
  color: #878787;
}

.copyright-text p a {
  color: #ff5e14;
}

.footer-menu li {
  display: inline-block;
  margin-left: 20px;
}

.footer-menu li:hover a {
  color: #ff5e14;
}

.footer-menu li a {
  font-size: 14px;
  color: #878787;
}

a:hover {
  color: inherit;
  text-decoration: none;
}

@media only screen and (max-width: 880px) {
  .menu {
    padding: 0 1rem;
  }
  .menu ul li a {
    margin-right: 10px;
  }
  .menu .logo img {
    width: 180px;
  }

  .menu-leyenda {
    position: absolute;
    bottom: 5rem;
    left: 12rem;
  }
  .menu-leyenda h1 {
    font-size: 3em;
  }
  .menu-leyenda span {
    font-size: 3em;
  }
}
.div-zona {
  max-width: 360px;
  display: flex;
  justify-content: space-between;
  align-items: center;
  padding: 8px;
}
.div-zona .div-zona-img {
  width: 128px;
  height: 128px;
}
.archivosApp h4 {
  margin: 15px;
}
.archivosApp img {
  width: 80%;
  height: 12%;
}

@media only screen and (max-width: 880px) {
  .archivosApp h4 {
    margin: 15px;
  }
  .archivosApp img {
    width: 100%;
  }
}

/*# sourceMappingURL=App.c.map */
