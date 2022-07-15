import React, { useEffect, useState } from "react";
import { Consumer } from "../context";
import Viewer from "./subcomponentes/Viewer";

const Topbar = (props) => {
  return (
    <React.Fragment className="">
      <div className="topBar container-fluid bg-dark">
        <div className="row py-2 px-lg-5">
          <div className="col-lg-4 text-center text-lg-left mb-2 mb-lg-0">
            <div className="d-inline-flex align-items-center text-white">
              <small>
                <i className="fa fa-phone-alt mr-2" />
                +54 (266) 4423479
              </small>
              <small className="px-3">|</small>
              <small>
                <i className="fa fa-envelope mr-2" />
                contacto@turismo.sanluis.gov.ar
              </small>
            </div>
          </div>
          <div className="col-lg-4 text-center text-white">
            <p>
              Sitio oficial de la <b>Secretaría de Turismo</b> de la Provincia de San Luis
            </p>
          </div>
          <div className="col-lg-4 text-center text-lg-right">
            <div className="d-inline-flex align-items-center">
              <a className="text-white px-2" href>
                <i className="fab fa-facebook-f" />
              </a>
              <a className="text-white px-2" href>
                <i className="fab fa-twitter" />
              </a>
              <a className="text-white px-2" href>
                <i className="fab fa-instagram" />
              </a>
              <a className="text-white pl-2" href>
                <i className="fab fa-youtube" />
              </a>
            </div>
          </div>
        </div>
      </div>
    </React.Fragment>
  );
};

Topbar.contextType = Consumer;

export default Topbar;
