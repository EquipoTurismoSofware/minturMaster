import React from "react";
import { Component } from "react";
import Loading from "../../utils/Loading";
import GustoASanLuis from "../../utils/images/gusto-a-san-luis.png";
import YouTube from 'react-youtube';

class GustosSanLuisCapacitaciones extends Component {
  constructor(props) {
    super(props);
    this.state = {
      loading: false,
      videoId: 'lp0cJFeV21c'
    };
  }

  _onReady(event) {
    // access to player in all event handlers via event.target
    event.target.pauseVideo();
  }

  componentDidMount() {}

  render() {
    const loading = this.state.loading;
    const {videoId} = this.state;
    const opts = {
      height: '390',
      width: '640',
      playerVars: {
        autoplay: 1,
      },
    };

    return (
      <>
        {loading ? (
          <div className="PFiltroAlojamiento mb-5">
            <Loading margins="96px" />
          </div>
        ) : (
          <>
            <div className="gustos-san-luis">
              <div className="img-title col-md-12">
                <img className="col-md-4 offset-md-4" src={GustoASanLuis} />
              </div>
            </div>

            <div class="accordion" id="accordionExample">
              <div class="card">
                <div class="card-header" id="headingOne">
                  <h2 class="mb-0">
                    <button
                      class="btn btn-link btn-block text-left collapsed btn-override"
                      type="button"
                      data-toggle="collapse"
                      data-target="#collapseOne"
                      aria-expanded="true"
                      aria-controls="collapseOne"
                    >
                      <p className="seccion-title">· MODULO 1 </p>
                    </button>
                  </h2>
                </div>

                <div
                  id="collapseOne"
                  class="collapse"
                  aria-labelledby="headingOne"
                  data-parent="#accordionExample"
                >
                  <div class="card-body">
                    <p>
                      1. Introduccion a la gastronomia:
                    </p>
                    <br />
                    <YouTube videoId={videoId} opts={opts}  />
                  </div>
                </div>
              </div>
            </div>
          </>
        )}
      </>
    );
  }
}

export default GustosSanLuisCapacitaciones;
