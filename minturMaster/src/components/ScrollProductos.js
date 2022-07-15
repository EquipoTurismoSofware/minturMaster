import React, { Component } from "react";
import { Helmet } from "react-helmet";
import { Consumer } from "../context";

class Scroll extends Component {
  constructor(props) {
    super(props);
    this.state = {};
  }

  componentDidMount() {}

  render() {
    return (
      <React.Fragment>
        <div>
          <Helmet>
            <script
              type="text/javascript"
              src="http://turismo.sanluis.gov.ar/recursos/js/scroll.js"
            ></script>
          </Helmet>
          <div class="grid-container">
            <main class="grid-item main">
              <div class="items">
                <div class="item item1">
                  <div class="section-title">
                    <h2>Gastronomía</h2>
                  </div>
                  <div class="parrafoProducto">
                    <p className="productoP">
                      Lo que queremos hacer es colocar este texto al lado
                      derecho de la imagen, algo así como se observa en
                      periódicos o revistas.
                    </p>
                  </div>
                  <div className="productoSubtitulo">
                    <h5>Gastronomía</h5>
                    <h5>Gastronomía</h5>
                  </div>
                </div>
                <div class="item item2">
                  <div class="section-title" style={{ marginLeft: "80px" }}>
                    <h2>Salinas</h2>
                  </div>
                  <div class="parrafoProducto">
                    <p className="productoP">
                      Lo que queremos hacer es colocar este texto al lado
                      derecho de la imagen, algo así como se observa en
                      periódicos o revistas.
                    </p>
                  </div>
                  <div className="productoSubtitulo">
                    <h5>Otro Planeta</h5>
                    <h5>Salina del Bebedero</h5>
                  </div>
                </div>
                <div class="item item3">
                  <div class="section-title" style={{ marginLeft: "10px" }}>
                    <h2>Las Sierras</h2>
                  </div>
                  <div class="parrafoProducto">
                    <p className="productoP">
                      Lo que queremos hacer es colocar este texto al lado
                      derecho de la imagen, algo así como se observa en
                      periódicos o revistas.
                    </p>
                  </div>
                  <div className="productoSubtitulo">
                    <h5>Gastronomía</h5>
                    <h5>Gastronomía</h5>
                  </div>
                </div>
                <div class="item item4">
                  <div class="section-title">
                    <h2>Gastronomía</h2>
                  </div>
                  <div class="parrafoProducto">
                    <p className="productoP">
                      Lo que queremos hacer es colocar este texto al lado
                      derecho de la imagen, algo así como se observa en
                      periódicos o revistas.
                    </p>
                  </div>
                  <div className="productoSubtitulo">
                    <h5>Gastronomía</h5>
                    <h5>Gastronomía</h5>
                  </div>
                </div>
                <div class="item item5">
                  <div class="section-title" style={{ marginLeft: "100px" }}>
                    <h2>Parques</h2>
                  </div>
                  <div class="parrafoProducto">
                    <p className="productoP">
                      Lo que queremos hacer es colocar este texto al lado
                      derecho de la imagen, algo así como se observa en
                      periódicos o revistas.
                    </p>
                  </div>
                  <div className="productoSubtitulo">
                    <h5>Gastronomía</h5>
                    <h5>Gastronomía</h5>
                  </div>
                </div>
                <div class="item item6">
                  <div class="section-title">
                    <h2>Gastronomía</h2>
                  </div>
                  <div class="parrafoProducto">
                    <p className="productoP">
                      Lo que queremos hacer es colocar este texto al lado
                      derecho de la imagen, algo así como se observa en
                      periódicos o revistas.
                    </p>
                  </div>
                  <div className="productoSubtitulo">
                    <h5>Gastronomía</h5>
                    <h5>Gastronomía</h5>
                  </div>
                </div>
                <div class="item item7">
                  <div class="section-title">
                    <h2>Gastronomía</h2>
                  </div>
                  <div class="parrafoProducto">
                    <p className="productoP">
                      Lo que queremos hacer es colocar este texto al lado
                      derecho de la imagen, algo así como se observa en
                      periódicos o revistas.
                    </p>
                  </div>
                  <div className="productoSubtitulo">
                    <h5>Gastronomía</h5>
                    <h5>Gastronomía</h5>
                  </div>
                </div>
                <div class="item item8">
                  <div class="section-title">
                    <h2>Gastronomía</h2>
                  </div>
                  <div class="parrafoProducto">
                    <p className="productoP">
                      Lo que queremos hacer es colocar este texto al lado
                      derecho de la imagen, algo así como se observa en
                      periódicos o revistas.
                    </p>
                  </div>
                  <div className="productoSubtitulo">
                    <h5>Gastronomía</h5>
                    <h5>Gastronomía</h5>
                  </div>
                </div>
                <div class="item item9">
                  <div class="section-title">
                    <h2>Gastronomía</h2>
                  </div>
                  <div class="parrafoProducto">
                    <p className="productoP">
                      Lo que queremos hacer es colocar este texto al lado
                      derecho de la imagen, algo así como se observa en
                      periódicos o revistas.
                    </p>
                  </div>
                  <div className="productoSubtitulo">
                    <h5>Gastronomía</h5>
                    <h5>Gastronomía</h5>
                  </div>
                </div>
                <div className="reset"></div>
              </div>
            </main>
          </div>
        </div>
      </React.Fragment>
    );
  }
}

Scroll.contextType = Consumer;
export default Scroll;
