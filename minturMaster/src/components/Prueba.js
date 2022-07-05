import React, { Component } from "react";
import { Consumer } from "../context";

class Prueba extends Component {
  constructor(props) {
    super(props);
    this.state = { $: React.createRef(), jQuery: React.createRef() };
  }

  componentDidMount() {}

  render() {
    return (
      <React.Fragment>
        <div>
          <section>
            <h1>Many Bills</h1>
            <div class="containerProducto dragscroll">
              <article>
                <img class="imagenProducto" src="http://www.fillmurray.com/300/300" alt="" />
                <h1>Fill</h1>
              </article>
              <article>
                <img src="http://www.fillmurray.com/300/300" alt="" />
                <h1>Fill</h1>
              </article>
              <article>
                <img src="http://www.fillmurray.com/300/300" alt="" />
                <h1>Fill</h1>
              </article>
              <article>
                <img src="http://www.fillmurray.com/300/300" alt="" />
                <h1>Fill</h1>
              </article>
              <article>
                <img src="http://www.fillmurray.com/300/300" alt="" />
                <h1>Fill</h1>
              </article>
              <article>
                <img src="http://www.fillmurray.com/300/300" alt="" />
                <h1>Fill</h1>
              </article>
              <article>
                <img src="http://www.fillmurray.com/300/300" alt="" />
                <h1>Fill</h1>
              </article>
              <article>
                <img src="http://www.fillmurray.com/300/300" alt="" />
                <h1>Fill</h1>
              </article>
            </div>
            <div class="links">
              <p>Twitter</p>
              <p>Pinterest</p>
              <p>Instagram</p>
              <p>Facebook</p>
            </div>
          </section>
        </div>
      </React.Fragment>
    );
  }
}

Prueba.contextType = Consumer;
export default Prueba;
