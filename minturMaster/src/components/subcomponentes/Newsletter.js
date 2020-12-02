import React, { Component } from "react";
import axios from "axios";
import Container from 'react-bootstrap/Container'
import Row from 'react-bootstrap/Row'
import Col from 'react-bootstrap/Col'
//import Alert from 'react-bootstrap/Alert'
//import { Consumer } from "../../context";

export default class Newsletter extends Component {
  constructor(props) {
    super(props);

    this.state = {
      loading: true,
      ancho: this.props.anchoImg,
      alto: this.props.altoImg,
      visible: "none",
      email: "",
      newsletters: [],
      msg: ""
    };
    this.handleChange = this.handleChange.bind(this);
    this.handleNew = this.handleNew.bind(this);
  }

  handleNew() {
    axios({
      method: 'post',
      url: `${process.env.REACT_APP_API}/newsletter`,
      data: {
        email: this.state.email
      }
    }).then((response) => {
          this.setState({
            msg: "Mail registrado con exito"
          }); 
      })
      .catch((error) => {
          console.log(error);
      });
  }

  componentDidMount() {
    this.setState({
      visible: "inline"
    });
  }

  verificar(){
    const token = this.context.token;
    var self = this;
    let {email} = self.state;
    const re = /^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
    if(re.test(email)){
      axios({
          method: "get",
          headers: {
              "Authorization": token
          },
          url: `${process.env.REACT_APP_API}/newsletters`,
          responseType: 'json'
      })
      .then((response) => {
        self.setState({
          newsletters: response.data.data.registros,
          loading: false
      }, () => {
        let cant = self.state.newsletters.filter(x => x.email === self.state.email);
        if(cant.length === 0){
          self.handleNew();
        }else{
          this.setState({
            msg: "Ese email ya existe"
          });
        }
      });
      })
      .catch((error) => {
          console.log(error);
      });
    }else{
      this.setState({
        msg: "Mail ingresado incorrectamente"
      });    
    }
  }

  closeModal() {
    this.setState({
      visible: "none",
    });
  }

  handleChange(event) {
    const target = event.target;
    const value = target.value;
    const name = target.name;
    this.setState({
        [name]: value
    });
}

  render() {

    return (
      <React.Fragment>
        <Container className="newsletter" style={{display: this.state.visible}}>
          <Row className="newsHeader">
            <Col md={10}><h5>Ingrese su email:</h5></Col>
            <Col md={2}><button style={{right: 0, border: "none", background: "none"}} onClick={() => this.closeModal()}><i className="fas fa-times"></i></button> </Col>
          </Row>
          <Row className="newsBody">
            <Col>{
                 this.state.msg == "" ?
                 <input type="hidden" disabled className="newsMsg form-control" id="msg" name="text" value={this.state.msg}/>              
              :
                <input type="text"  disabled className="newsMsg form-control" id="msg" name="text" value={this.state.msg}/>
            }  
            </Col>
          </Row>
          <br></br>
          <Row>
            <Col>
              <input type="email" className="newsEmail form-control" placeholder="* Email" id="email" name="email" value={this.state.email} onChange={this.handleChange}/>
            </Col>
          </Row>
          <br></br>
          <Row className="newsFooter">
            <Col><button className="newsFooterButton" onClick={() => this.verificar()}>Enviar</button></Col>
          </Row>
        </Container>
      </React.Fragment>
    );
  }
}

//Newsletter.contextType = Consumer;