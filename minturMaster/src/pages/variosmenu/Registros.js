import React, { Component } from "react";
import { Consumer } from "../../context";
import RegistroGuiasTurismo from "../../pages/variosmenu/RegistroGuiasTurismo"



class Registros extends React.Component {

    render() {
      var color = "#bf3276"
       
      return (
          <React.Fragment>
            <div className="est-main" >
            <div
                className="ZonaDetalle-titulo"
                style={{ paddingTop: "50px", backgroundColor: `#722789` }}
              >
                <h3 style={{ color: `#722789` }}>
                  FORMULARIOS DE REGISTROS
                </h3>
              </div>
            </div>
            <div style={{margin:"0 20px 20px 20px"}}>
              <div className="accordion" id="accordionAtractivos">
             
              <div>
                 <div className="card" style={{borderColor:"#fff"}}>
                    <div className="card-header" id="1"style={{backgroundColor:"#fff"}} >
                        <h5 className="mb-0 d-flex justify-content-between">
                        <RegistroGuiasTurismo/>
                            <button className="btn" 
                                style={{width: "100%", 
                                height: "50px", 
                                fontSize: "1.2rem", 
                                lineHeight: "1.8rem", 
                                fontWeight: "700", 
                                backgroundColor: color, 
                                color:"#fff"}} 
                                type="button" 
                                data-toggle="collapse" 
                                data-target="1"
                                aria-expanded="true" 
                               aria-controls="1"
                                onClick={() => { this.setState({flag: "1"})}}>
                                    
                            </button>
                            {/*<button className="btn btn-danger" type="button" onClick={(e) => { this.msgDelAtractivo(this.state.atractivo.id, this.state.atractivo.nombre, e) }}>
                                <i className="fas fa-trash"></i>
                               </button>*/}
                        </h5>
                    </div>
                    <div id={`collapse-activo-${"1"}`} className="collapse" aria-labelledby={`atractivo-${"1"}`} data-parent="#accordionAtractivos">
                        <div className="card-body">
                       
                        </div>
                    </div>
                </div>
             
            </div>      

              </div>
            </div>
          </React.Fragment>                    

      );
    }
  }

Registros.contextType = Consumer;

export default Registros