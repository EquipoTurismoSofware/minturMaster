import React, { Component } from "react";
import { Link } from "react-router-dom";

export default class PantallaModal extends Component {
  constructor(props) {
    super(props);
    this.state = {
      foto: "",
    };
    this.closeModal = this.closeModal.bind(this);
  }

  componentDidUpdate(prevProps) {
    if (this.props.picture !== prevProps.picture) {
      this.setState(
        {
          foto: this.props.picture,
        },
        () => {
          var mContainer = document.getElementById(`modalMain-container`);
          mContainer.className += " modalIn";
        }
      );
    }
  }

  componentDidMount() {
    if (window.screen.width <= 510) {
      this.setState(
        {
          foto:
            "http://turismo.sanluis.gov.ar/api-turismo/public/recursos/modal/ModalInvierno2021Mobile.jpeg",
        },
        () => {
          var mContainer = document.getElementById(`modalMain-container`);
          mContainer.className += " modalIn";
        }
      );
    } else {
      this.setState(
        {
          foto:
            "http://turismo.sanluis.gov.ar/api-turismo/public/recursos/modal/ModalInvierno2021.jpeg",
        },
        () => {
          var mContainer = document.getElementById(`modalMain-container`);
          mContainer.className += " modalIn";
        }
      );
    }
  }

  closeModal() {
    var mContainer = document.getElementById(`modalMain-container`);
    mContainer.className += mContainer.className.replace("modalIn", "modalOut");
  }

  render() {
    return (
      <React.Fragment id="modalMainBody">
        <div id="modalMain-container" onClick={() => this.closeModal()}>
          <div class="modalMain-background">
            <div class="modalMain">
              <a className="closeModal" onClick={() => this.closeModal()}>
                <i class="far fa-times-circle"></i>
              </a>

              <Link to="/turismo-vacaciones-invierno" className="link-menu">
                <img src={this.state.foto} />
              </Link>
              <svg
                class="modalMain-svg"
                xmlns="http://www.w3.org/2000/svg"
                preserveAspectRatio="none"
              >
                <rect fill="none" height="100%" width="100%"></rect>
              </svg>
            </div>
          </div>
        </div>
        {/*<div class="content">
        <h1>Modal Animations</h1>
        <div class="buttons">
          <div id="six" class="button">Sketch</div>
        </div>
    </div>*/}
      </React.Fragment>

      /*
      <section>
        <Modal
          visible={this.state.visible}
          width={this.props.anchoMargen}
          height={this.props.altoMargen}
          effect="fadeInUp"
          onClickAway={() => this.closeModal()}
        >
          <Link to="/turismo-dosep" className="link-menu">
            <img
              style={{
                width: this.state.ancho,
                height: this.state.alto,
                margin: this.state.maginLeft,
                marginTop: 25,
              }}
              src={this.props.picture}
            />
          </Link>
          <a
            className="close"
            //Que hago? lo borro o lo dejo porque no noto cambios
            href="javascript:void(0);"
            onClick={() => this.closeModal()}
          />
        </Modal>
            </section>*/
    );
  }
}
