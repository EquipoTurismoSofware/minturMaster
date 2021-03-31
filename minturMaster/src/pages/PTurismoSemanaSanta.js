import React, { Component } from "react";

export default class PTurismoSemanaSanta extends Component {
  render() {
    return (
      <div className="container mb-5">
        <div className="container">
          <div
            className="row mb-3"
            style={{
              paddingTop: "150px",
            }}
          >
            {/*<div className="ZonaDetalle-titulo">
                    <h3 style={{ color: `#722789` }}>Semana Santa en San Luis:</h3>
                    </div>*/}
            <center>
              <div className="row">
                <img
                  style={{
                    height: 700,
                    width: 500,
                    alignSelf: "center",
                  }}
                  className="img-fluid"
                  src={`${process.env.REACT_APP_API_RECURSOS}/recursos/FolletoSemanaSanta.jpeg`}
                  alt="Img"
                />
              </div>
            </center>
          </div>
        </div>
      </div>
    );
  }
}
