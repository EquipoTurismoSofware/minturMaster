import React, { Component } from "react";
import Recorridos from "../components/Recorridos";
//import EventoForm from "../components/EventoForm";
import Descarga from "../components/Descarga";
import Novedades from "../components/Novedades";
import { Link } from "react-router-dom";
import ReactWOW from "react-wow";
import Slider from "../components/Slider"
import PantallaModal from "../components/subcomponentes/Modal";
import Newsletter from "../components/subcomponentes/Newsletter";
import Loading from "../utils/Loading";

class Home extends Component {
  constructor(props) {
    super(props);
    this.state = {
      loading: true,
      contador: "",
      visible: true,
    };

    //Cuanta regresiva Eclipse
    /*this.state = { time: {} };

    this.timer = 0;

    this.startTimer = this.startTimer.bind(this);

    this.countDown = this.countDown.bind(this);*/
  }
  /*
  secondsToTime() {
    let now = new Date();
    let y2k = new Date("Jul 02 2019 16:27:59");
    let days = (y2k - now) / 1000 / 60 / 60 / 24;
    let daysRound = Math.floor(days);
    let hours = (y2k - now) / 1000 / 60 / 60 - 24 * daysRound;
    let hoursRound = Math.floor(hours);
    let minutes =
      (y2k - now) / 1000 / 60 - 24 * 60 * daysRound - 60 * hoursRound;
    let minutesRound = Math.floor(minutes);
    let seconds =
      (y2k - now) / 1000 -
      24 * 60 * 60 * daysRound -
      60 * 60 * hoursRound -
      60 * minutesRound;
    let secondsRound = Math.round(seconds);
    let sec = secondsRound == 1 ? " seg" : " seg";
    let min = minutesRound == 1 ? " min " : " min ";
    let hr = hoursRound == 1 ? " hora" : " horas ";
    let dy = daysRound == 1 ? " día" : " días ";

    {
    let hours = Math.floor(secs / (60 * 60));

    let divisor_for_minutes = secs % (60 * 60);

    let minutes = Math.floor(divisor_for_minutes / 60);

    let divisor_for_seconds = divisor_for_minutes % 60;

    let seconds = Math.ceil(divisor_for_seconds);
    
    }
    if (hoursRound.toString().length == 1) {
      hoursRound = "0" + hoursRound;
    }
    if (minutesRound.toString().length == 1) {
      minutesRound = "0" + minutesRound;
    }
    if (secondsRound.toString().length == 1) {
      secondsRound = "0" + secondsRound;
    }

    let obj = {
      d: "0" + daysRound,

      h1: hoursRound.toString().substring(0, 1),
      h2: hoursRound.toString().substring(1, 2),
      m1: minutesRound.toString().substring(0, 1),
      m2: minutesRound.toString().substring(1, 2),
      s1: secondsRound.toString().substring(0, 1),
      s2: secondsRound.toString().substring(1, 2),
    };

    return obj;
  }
  */
  closeModal() {
    this.setState({
      visible: false,
    });
  }

  componentDidMount() {
    this.setState({
      visible: true,
    });

    document.body.scrollTop = 0; // Safari
    document.documentElement.scrollTop = 0; // Chrome, Firefox, IE y Opera
    this.setState({ loading: false });
    /*let timeLeftVar = this.secondsToTime();

    this.setState({ time: timeLeftVar });
    this.startTimer();*/
  }
  /*startTimer() {
    if (this.timer == 0) {
      this.timer = setInterval(this.countDown, 1000);
    }
  }

  countDown() {
    // Remove one second, set state so a re-render happens.

    let seconds = this.state.seconds - 1;

    this.setState({
      time: this.secondsToTime(),

      seconds: seconds,
    });

    // Check if we're at zero.

    if (seconds == 0) {
      clearInterval(this.timer);
    }
  }
*/
  render() {
    return (
      <div className="Home">
        {this.state.loading ? (
          <div className="PFiltroAlojamiento mb-5">
            <div>
              <Loading margins="96px" />
            </div>
          </div>
        ) : (
          <React.Fragment>
            
            <div className="menu-y-slider">
            <Slider></Slider>
            </div>
            <Recorridos />
            {/* 
            <ReactWOW animation="fadeIn" data-wow-delay="10s">
              <EventoForm />
            </ReactWOW>*/}
            <br />
            <br />
            <br />
            <Novedades time="10000" />

            <Descarga />
            <div className="Recorridos">
              <div className="reco-titulo">
                <span className="reco-t-sub2">Nuestras Redes</span>
              </div>
            </div>
            <br />
            <div className="grid-container">
              <div>
                <center>
                  <Link to="/" className="link-menu">
                    <img
                      className="img-fluid"
                      src={`https://i.ibb.co/fGXVJvH/LOGO-INS.png`}
                      alt="Primavera San Luis"
                      style={{ width: "300px" }}
                    />
                  </Link>
                  <br />
                  <br />

                  {/* <script src="https://cdn.lightwidget.com/widgets/lightwidget.js" />
                  <iframe
                    src="//lightwidget.com/widgets/b1d0a9aa676b5c91b1d4db290b168f9a.html"
                    scrolling="no"
                    allowtransparency="true"
                    className="instagram lightwidget-widget "
                  />*/}
                  <script src="https://cdn.lightwidget.com/widgets/lightwidget.js" />
                  <iframe
                    title="lightwidgetInstagram"
                    src="//lightwidget.com/widgets/b6f0a3e74f58596f8c1d72d412fc2b0f.html"
                    scrolling="no"
                    allowtransparency="true"
                    className="instagram lightwidget-widget"
                  />
                </center>
              </div>
              <div>
                <center>
                  <div style={{ width: "100%" }}>
                    <Link to="/" className="link-menu">
                      <img
                        className="img-fluid"
                        src={`https://i.ibb.co/pdtB79Z/LOGO-FACE.png`}
                        alt="Primavera San Luis"
                        style={{ width: "300px" }}
                      />
                    </Link>
                  </div>
                  <br />
                  <iframe
                    title="facebook"
                    src="https://www.facebook.com/plugins/page.php?href=https%3A%2F%2Fwww.facebook.com%2Fturismodesanluis%2F&tabs=timeline&width=1000&height=800&small_header=false&adapt_container_width=true&hide_cover=false&show_facepile=false&appId=1914035878882625"
                    className="facebook"
                    scrolling="no"
                    frameBorder="0"
                    allowtransparency="true"
                    allow="encrypted-media"
                  />
                </center>
              </div>
            </div>
            <br />
          </React.Fragment>
        )}
      </div>
    );
  }
}

export default Home;
