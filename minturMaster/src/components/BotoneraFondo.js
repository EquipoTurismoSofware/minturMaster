import React, { Component } from "react";
import { Link } from "react-router-dom";

class BotoneraFondo extends Component {
  render() {
    return (
      <div className="botoneraFooter">
        <div id="father">
          <div class="child">
            <img
              className="img-fluid"
              src={`${process.env.REACT_APP_API_RECURSOS}/recursos/botoneraFondo/estadisticas.png`}
              alt="Img"
            />
          </div>
          <div class="child">
            {" "}
            <img
              className="img-fluid"
              src={`${process.env.REACT_APP_API_RECURSOS}/recursos/botoneraFondo/obras.png`}
              alt="Img"
            />
          </div>
          <div class="child">
            {" "}
            <img
              className="img-fluid"
              src={`${process.env.REACT_APP_API_RECURSOS}/recursos/botoneraFondo/todxs.png`}
              alt="Img"
            />
          </div>
        </div>
      </div>
    );
  }
}

export default BotoneraFondo;
