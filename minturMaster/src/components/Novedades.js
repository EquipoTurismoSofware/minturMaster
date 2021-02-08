import React, { Component } from "react";
import { Consumer } from "../context";
import { Link } from "react-router-dom";
import axios from "axios";
import Swiper from "swiper";

const swiper = new Swiper(".blog-slider", {
  spaceBetween: 30,
  effect: "fade",
  loop: true,
  wheel: {
    invert: false,
  },
  // autoHeight: true,
  pagination: {
    el: ".blog-slider__pagination",
    clickable: true,
  },
});
class Novedades extends Component {
  constructor(props) {
    super(props);
    this.state = {
      loading: true,
      data: [],
      index: 0,
      timerID: false,
    };
    this.stop = this.stop.bind(this);
    this.carouselTimer = this.carouselTimer.bind(this);
  }

  carouselTimer() {
    let indice = parseInt(this.state.index, 10);
    indice++;
    if (indice > this.state.data.length - 1) {
      indice = 0;
    }
    this.setState(
      {
        index: indice,
      },
      () => {
        let oldData = Object.assign([], this.state.data);
        oldData = oldData.map((d) => {
          return { ...d, display: "none" };
        });
        let newDataItem = oldData[indice];
        newDataItem["display"] = "block";
        oldData[indice] = newDataItem;
        this.setState({
          data: oldData,
        });
      }
    );
  }

  stop() {
    clearInterval(this.state.timerID);
  }

  componentDidMount() {
    //A los datos del Fetch hay que agregar la propiedad display: "none"

    const swiper = new Swiper(".blog-slider", {
      spaceBetween: 30,
      effect: "fade",
      direction: "vertical",
      loop: true,
      mousewheel: {
        invert: false,
      },
       autoHeight: true,
      pagination: {
        el: ".blog-slider__pagination",
        clickable: true,
      },
    });

    var token = this.context.token;
    var self = this;
    axios({
      method: "get",
      headers: {
        Authorization: token,
      },
      url: `${process.env.REACT_APP_API}/novedades/12`,
      responseType: "json",
    })
      .then((response) => {
        let data = response.data.data.registros.map((novedad) => {
          novedad.display = "none";
          return novedad;
        });
        self.setState(
          {
            data: data,
            loading: false,
          },
          () => {
            if (parseInt(response.data.data.count, 10) > 0) {
              let timer = setInterval(self.carouselTimer, self.props.time);
              self.setState(
                {
                  timerID: timer,
                },
                () => {
                  self.carouselTimer();
                }
              );
            }
          }
        );
      })
      .catch((error) => {
        console.log(error);
      });
  }

  componentWillUnmount() {
    clearInterval(this.state.timerID);
  }

  render() {
    const items = this.state.data.map((item) => {
      let descripcion = item.descripcion.substr(0, 150) + "...";
      let fecha = item.fecha.split("-");
      //<div key={`ci-${item.id}`} className="animated fadeInRight delay-2s" style={{display: item.display, width: "100%"}}></div>
      return (
        <div
          key={`ci-${item.id}`}
          className=""
          style={{ display: item.display, width: "100%" }}
        >
          <div className="blog-slider__item swiper-slide">
            <div className="blog-slider__img">
              <img
               
                style={{ height: "300px" }}
                src={`${process.env.REACT_APP_API_RECURSOS}/recursos/novedades/${item.foto_uno}`}
                alt="Foto"
              />
            </div>

            <div class="blog-slider__content">
            <div className="col-sm-9">
              <Link
                to={`/novedad/${item.id}`}
                className="link"
                style={{ color: "black" }}
              >
               
                       <span className="blog-slider__code">{`${fecha[2]}/${fecha[1]}/${fecha[0]}`}</span>
                     <div className="blog-slider__title">
                        <h2>{item.titulo}</h2>
                      </div>
                      <div><h4>{item.subtitulo}</h4></div>

                    
                      <div class="blog-slider__text">
                        {descripcion}
                      </div>
                      <a href={`/novedad/${item.id}`} class="blog-slider__button">
                          Leer más
                      </a>
             {/*}   <div className="d-flex justify-content-end">
                  <i className="fas fa-book-open" />
                </div> */}

                

              </Link>
            </div>
          </div>
          </div>
          {
            // Nuevos-Items
          }
        </div>
      );
    });

    return (
      <div className="container mb-3">
        <div className="row">
          <div className="col">
            <div className="Novedades">
              <Link to="/novedades" className="novedades-leyenda">
              {//  <div className="background-bar" />
              }
                <div className="texto">
                  <ul>
                    <li>NoVeDaDes                    
                     {// <i className="fas fa-arrow-right" />
                  }   
                    </li>
                  </ul>
                </div>
              </Link>
              
              <div className="blog-slider">
                <div class="blog-slider__wrp swiper-wrapper">
                  <div class="blog-slider__item swiper-slide">{items}</div>
                </div>
                <div className="blog-slider__pagination">
                  <div className="swiper-pagination-bullet-active"></div>
                  <div className="swiper-pagination-bullet"></div>
                  <div className="swiper-pagination-bullet"></div>
                </div>
        
              </div>
            </div>
          </div>
        </div>

        {/*    <div className="blog-slider">
          <div class="blog-slider__wrp swiper-wrapper">{items}</div>
        </div>
    */}
      </div>
    );
  }
}

Novedades.contextType = Consumer;

export default Novedades;
