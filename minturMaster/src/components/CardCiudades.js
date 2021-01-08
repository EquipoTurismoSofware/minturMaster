import React, { Component } from "react";
import ItemCardCiudades from "../../components/ItemCardCiudades"
//import { Consumer } from "../context";
//import axios from "axios";

class CardCiudades extends Component {
    constructor(props) {
		super(props);

		this.state = {
			loading: true,
			data: []
		};
    }


	componentDidMount() {
        this.setState({
			data: this.props.data,
            loading: false
        });
    }

	render() {
        const listadoElementos = this.state.data.map(nov => {
            <div className="row mb-3">
            <div className="col">
              <img
                alt="terrazas"
                style={{
                  width: "100%",
                  height: "300px",
                  objectFit: "cover",
                }}
                src="http://agenciasanluis.com/wp-content/uploads/2017/09/terrazas.jpg"
              />
              <button
                className="btn btn-dark btn-block"
                type="button"
                data-toggle="collapse"
                data-target="#nueva_zona"
                aria-expanded="false"
                aria-controls="nueva_zona"
                style={{
                  backgroundColor: "#cb6120",
                  height: "50px",
                  fontSize: "1.2rem",
                  lineHeight: "1.8rem",
                  fontWeight: "700",
                }}
              >
                San Luis
              </button>
              <div className="collapse" id="nueva_zona">
                <div className="card card-body">
                  <div className="row">
                    <div
                      className="col-md-10"
                      style={{ color: "#cb6120" }}
                    >
                      <div className="form-group">
                        <div className="atractivo-info">
                          <ItemCardCiudades data={this.state.sanluis} tipo={this.state.tipo}/>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
            <br />
          </div>
        })
		return(
			<React.Fragment>{
               
			}</React.Fragment>
		);
	}
}


//Listados.contextType = Consumer;

export default CardCiudades;