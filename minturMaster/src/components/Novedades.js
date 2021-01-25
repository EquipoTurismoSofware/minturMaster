import React, { Component } from "react";
import { Consumer } from "../context";
import { Link } from "react-router-dom";
import axios from "axios";
import { Swiper, SwiperSlide } from "swiper/react";

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

    /* var swiper = new Swiper(".blog-slider", {
      spaceBetween: 30,
      effect: "fade",
      loop: true,
      mousewheel: {
        invert: false,
      },
      // autoHeight: true,
      pagination: {
        el: ".blog-slider__pagination",
        clickable: true,
      },
    });*/
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
          <div className="row">
            <div className="col-sm-3">
              <img
                className="img-fluid"
                style={{ height: "200px" }}
                src={`${process.env.REACT_APP_API_RECURSOS}/recursos/novedades/${item.foto_uno}`}
                alt="Foto"
              />
            </div>
            <div className="col-sm-9">
              <Link
                to={`/novedad/${item.id}`}
                className="link"
                style={{ color: "white" }}
              >
                <div className="d-flex justify-content-between">
                  <h1>{item.titulo}</h1>
                  <span className="pt-3">{`${fecha[2]}/${fecha[1]}/${fecha[0]}`}</span>
                </div>

                <div>
                  <h4>{item.subtitulo}</h4>
                </div>
                <div>
                  <p>{descripcion}</p>
                </div>
                <div className="d-flex justify-content-end">
                  <i className="fas fa-book-open" />
                </div>
              </Link>
            </div>
          </div>
        </div>
      );
    });
    return (
      <div className="container mb-3">
        <div className="row">
          <div className="col">
            <div className="Novedades">
              <Link to="/novedades" className="novedades-leyenda">
                <div className="background-bar" />
                <div className="texto">
                  <ul>
                    <li>No</li>
                    <li>Ve</li>
                    <li>Da</li>
                    <li>Des</li>
                    <li>
                      <i className="fas fa-arrow-right" />
                    </li>
                  </ul>
                </div>
              </Link>
              <div className="novedades-body">{items}</div>
            </div>
          </div>
        </div>
        {/*<button type="btn btn-primary" onClick={this.stop}>Stop</button> 
        <div className="blog-slider">
          <div class="blog-slider__wrp swiper-wrapper">
            <div class="blog-slider__item swiper-slide">
              <div class="blog-slider__img">
                <img
                  src="https://i.ibb.co/ft02QmL/SAN-LUIS-TURISMO-FULL-COLOR-TRANSP.png"
                  alt=""
                />
              </div>
              <div class="blog-slider__content">
                <span class="blog-slider__code">26 December 2019</span>
                <div class="blog-slider__title">Lorem Ipsum Dolor</div>
                <div class="blog-slider__text">
                  Lorem ipsum dolor sit amet consectetur, adipisicing elit.
                  Recusandae voluptate repellendus magni illo ea animi?{" "}
                </div>
                <a href="#" class="blog-slider__button">
                  READ MORE
                </a>
              </div>
            </div>
            <div class="blog-slider__item swiper-slide">
              <div class="blog-slider__img">
                <img
                  src="https://res.cloudinary.com/muhammederdem/image/upload/v1535759871/jason-leung-798979-unsplash.jpg"
                  alt=""
                />
              </div>
              <div className="blog-slider__content">
                <span className="blog-slider__code">26 December 2019</span>
                <div className="blog-slider__title">Lorem Ipsum Dolor2</div>
                <div className="blog-slider__text">
                  Lorem ipsum dolor sit amet consectetur, adipisicing elit.
                  Recusandae voluptate repellendus magni illo ea animi?
                </div>
                <a href="#" className="blog-slider__button">
                  READ MORE
                </a>
              </div>
            </div>

            <div className="blog-slider__item swiper-slide">
              <div className="blog-slider__img">
                <img
                  src="http://sanluismidestino.com/wp-content/uploads/2020/11/cropped-ENCABEZADO-2-N.png"
                  alt=""
                />
              </div>
              <div className="blog-slider__content">
                <span className="blog-slider__code">26 December 2019</span>
                <div className="blog-slider__title">Lorem Ipsum Dolor</div>
                <div className="blog-slider__text">
                  Lorem ipsum dolor sit amet consectetur, adipisicing elit.
                  Recusandae voluptate repellendus magni illo ea animi?
                </div>
                <a href="#" class="blog-slider__button">
                  READ MORE
                </a>
              </div>
            </div>
          </div>
          <div className="blog-slider__pagination"></div>
        </div>
        <Swiper
          spaceBetween={50}
          slidesPerView={3}
          onSlideChange={() => console.log("slide change")}
          onSwiper={(swiper) => console.log(swiper)}
        >
          <SwiperSlide>Slide 1</SwiperSlide>
          <SwiperSlide>Slide 2</SwiperSlide>
          <SwiperSlide>Slide 3</SwiperSlide>
          <SwiperSlide>Slide 4</SwiperSlide>
          ...
        </Swiper>*/}
      </div>
    );
  }
}

Novedades.contextType = Consumer;

export default Novedades;
