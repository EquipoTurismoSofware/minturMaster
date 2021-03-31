import React, { Component } from "react";
import { Link } from "react-router-dom";

export default class PTurismoSemanaSanta extends Component {
  render() {
    return (
      <div className="container mb-5" style={{ paddingTop: "130px" }}>
        <div className="container">
          <div className="ZonaDetalle-titulo">
            <h3 style={{ color: `#722789` }}>Semana Santa en San Luis:</h3>
            <h4
              style={{
                color: `white`,
                float: "right",
                marginTop: "15px",
                fontWeight: "bold",
                padding: "10px",
                backgroundColor: `#722789`,
              }}
            >
              1 y 3 <br /> Abril
            </h4>
          </div>
          <h4 style={{ color: `#722789`, marginLeft: "30px" }}>
            Visitas guiadas entre las 16:00 y 17:00 Hs.
          </h4>

          {/*<center>
            <img
              style={{
                height: 700,
                width: 500,
              }}
              className="img-fluid"
              src={`${process.env.REACT_APP_API_RECURSOS}/recursos/FolletoSemanaSanta.jpeg`}
              alt="Img"
            />
            </center>*/}
          <Link to={`/atractivo/150`} key={`atractivo-150`}>
            <div className="row mb-5">
              <div className="col">
                <div className="atractivo-full-item">
                  <div className="imagen">
                    <span style={{ backgroundColor: `#ed0f68` }}>San Luis</span>
                    <img
                      className="img-fluid"
                      src={`${process.env.REACT_APP_API_RECURSOS}/atractivos/0_150_20181024093620.jpg`}
                      alt="Img"
                    />
                  </div>
                  <div
                    className="titulo"
                    style={{ backgroundColor: `#ed0f68` }}
                  >
                    <h3>Iglesia Catedral</h3>
                  </div>
                  <div className="body">
                    <p className="text-dark mb-2">
                      Excepcional testimonio arquitectónico de estilo neoclasico
                      iniciado en 1883, por los arquitectos Luis Sartorio y
                      Carlos Deluigi. Finalizada en 1944, esta construcción
                      expresa una visión neoclásica. Su fachada, con un estilo
                      corintio y frontón neoclasico, enmarcada por torres
                      esbeltas, determina la arquitectura eclesiástica de la
                      segunda mitad del siglo pasado. Domina su exterior un
                      frontis...
                    </p>
                    <span className="btn-novedades">
                      Leer <i className="fas fa-arrow-right" />
                    </span>
                  </div>
                </div>
              </div>
            </div>
          </Link>
          <Link to={`/atractivo/159`} key={`atractivo-159`}>
            <div className="row mb-5">
              <div className="col">
                <div className="atractivo-full-item">
                  <div className="imagen">
                    <span style={{ backgroundColor: `#ed0f68` }}>San Luis</span>
                    <img
                      className="img-fluid"
                      src={`${process.env.REACT_APP_API_RECURSOS}/atractivos/0_159_20181024100100.jpg`}
                      alt="Img"
                    />
                  </div>
                  <div
                    className="titulo"
                    style={{ backgroundColor: `#ed0f68` }}
                  >
                    <h3>TEMPLO NTRA. SRA. DEL ROSARIO DEL TRONO</h3>
                  </div>
                  <div className="body">
                    <p className="text-dark mb-2">
                      Este edificio posee un estilo árabe granadino. El templo
                      nuestra señora del rosario del trono fue construido en el
                      año 1935 con un estilo mudéjar. En la fachada cubierta con
                      relieves de estuco, sobresale la torre cuadrangular del
                      campanario. Vitrales: En el interior de la iglesia hay más
                      de 60 vitrales que fueron donadas por familias puntanas y
                      llamativos azulejos sevillanos. El retablo: de tipo
                      mudéjar se encuentra enmarcado por un gran arco de
                      herradura y cálidamente iluminado por seis vitrales
                      ubicado al final de la nave central, este curioso retablo
                      entroniza la imagen de Nuestra Señora del Rosario del
                      Trono.
                    </p>
                    <span className="btn-novedades">
                      Leer <i className="fas fa-arrow-right" />
                    </span>
                  </div>
                </div>
              </div>
            </div>
          </Link>
          <Link to={`/atractivo/150`} key={`atractivo-150`}>
            <div className="row mb-5">
              <div className="col">
                <div className="atractivo-full-item">
                  <div className="imagen">
                    <span style={{ backgroundColor: `#ed0f68` }}>San Luis</span>
                    <img
                      className="img-fluid"
                      src={`${process.env.REACT_APP_API_RECURSOS}/atractivos/0_150_20181024093620.jpg`}
                      alt="Img"
                    />
                  </div>
                  <div
                    className="titulo"
                    style={{ backgroundColor: `#ed0f68` }}
                  >
                    <h3>Iglesia Catedral</h3>
                  </div>
                  <div className="body">
                    <p className="text-dark mb-2">
                      Excepcional testimonio arquitectónico de estilo neoclasico
                      iniciado en 1883, por los arquitectos Luis Sartorio y
                      Carlos Deluigi. Finalizada en 1944, esta construcción
                      expresa una visión neoclásica. Su fachada, con un estilo
                      corintio y frontón neoclasico, enmarcada por torres
                      esbeltas, determina la arquitectura eclesiástica de la
                      segunda mitad del siglo pasado. Domina su exterior un
                      frontis...
                    </p>
                    <span className="btn-novedades">
                      Leer <i className="fas fa-arrow-right" />
                    </span>
                  </div>
                </div>
              </div>
            </div>
          </Link>
          <Link to={`/atractivo/150`} key={`atractivo-150`}>
            <div className="row mb-5">
              <div className="col">
                <div className="atractivo-full-item">
                  <div className="imagen">
                    <span style={{ backgroundColor: `#ed0f68` }}>San Luis</span>
                    <img
                      className="img-fluid"
                      src={`${process.env.REACT_APP_API_RECURSOS}/atractivos/0_150_20181024093620.jpg`}
                      alt="Img"
                    />
                  </div>
                  <div
                    className="titulo"
                    style={{ backgroundColor: `#ed0f68` }}
                  >
                    <h3>Iglesia Catedral</h3>
                  </div>
                  <div className="body">
                    <p className="text-dark mb-2">
                      Excepcional testimonio arquitectónico de estilo neoclasico
                      iniciado en 1883, por los arquitectos Luis Sartorio y
                      Carlos Deluigi. Finalizada en 1944, esta construcción
                      expresa una visión neoclásica. Su fachada, con un estilo
                      corintio y frontón neoclasico, enmarcada por torres
                      esbeltas, determina la arquitectura eclesiástica de la
                      segunda mitad del siglo pasado. Domina su exterior un
                      frontis...
                    </p>
                    <span className="btn-novedades">
                      Leer <i className="fas fa-arrow-right" />
                    </span>
                  </div>
                </div>
              </div>
            </div>
          </Link>
          <Link to={`/atractivo/150`} key={`atractivo-150`}>
            <div className="row mb-5">
              <div className="col">
                <div className="atractivo-full-item">
                  <div className="imagen">
                    <span style={{ backgroundColor: `#ed0f68` }}>San Luis</span>
                    <img
                      className="img-fluid"
                      src={`${process.env.REACT_APP_API_RECURSOS}/atractivos/0_150_20181024093620.jpg`}
                      alt="Img"
                    />
                  </div>
                  <div
                    className="titulo"
                    style={{ backgroundColor: `#ed0f68` }}
                  >
                    <h3>Iglesia Catedral</h3>
                  </div>
                  <div className="body">
                    <p className="text-dark mb-2">
                      Excepcional testimonio arquitectónico de estilo neoclasico
                      iniciado en 1883, por los arquitectos Luis Sartorio y
                      Carlos Deluigi. Finalizada en 1944, esta construcción
                      expresa una visión neoclásica. Su fachada, con un estilo
                      corintio y frontón neoclasico, enmarcada por torres
                      esbeltas, determina la arquitectura eclesiástica de la
                      segunda mitad del siglo pasado. Domina su exterior un
                      frontis...
                    </p>
                    <span className="btn-novedades">
                      Leer <i className="fas fa-arrow-right" />
                    </span>
                  </div>
                </div>
              </div>
            </div>
          </Link>
          <Link to={`/atractivo/150`} key={`atractivo-150`}>
            <div className="row mb-5">
              <div className="col">
                <div className="atractivo-full-item">
                  <div className="imagen">
                    <span style={{ backgroundColor: `#ed0f68` }}>San Luis</span>
                    <img
                      className="img-fluid"
                      src={`${process.env.REACT_APP_API_RECURSOS}/atractivos/0_150_20181024093620.jpg`}
                      alt="Img"
                    />
                  </div>
                  <div
                    className="titulo"
                    style={{ backgroundColor: `#ed0f68` }}
                  >
                    <h3>Iglesia Catedral</h3>
                  </div>
                  <div className="body">
                    <p className="text-dark mb-2">
                      Excepcional testimonio arquitectónico de estilo neoclasico
                      iniciado en 1883, por los arquitectos Luis Sartorio y
                      Carlos Deluigi. Finalizada en 1944, esta construcción
                      expresa una visión neoclásica. Su fachada, con un estilo
                      corintio y frontón neoclasico, enmarcada por torres
                      esbeltas, determina la arquitectura eclesiástica de la
                      segunda mitad del siglo pasado. Domina su exterior un
                      frontis...
                    </p>
                    <span className="btn-novedades">
                      Leer <i className="fas fa-arrow-right" />
                    </span>
                  </div>
                </div>
              </div>
            </div>
          </Link>
        </div>
      </div>
    );
  }
}
