import React, { Component } from "react";
import {Popover, PopoverHeader, PopoverBody } from 'reactstrap';
import axios from "axios";
//import Alert from 'react-bootstrap/Alert'
//import { Consumer } from "../../context";

export default class SocialWidget extends Component {
  constructor(props) {
    super(props);
    this.state = {
      loading: true,
      popoverOpen: false,
      popoverOpen1: false,
      popoverOpen2: false,
      popoverOpen3: false,
      popoverOpen4: false,
      popoverOpen5: false,
      popoverOpen6: false,
    };
    
    this.toggle = this.toggle.bind(this);
  }

  toggle (event) {
    switch(event.target.id){
      case "MainBtnWidget":
        var x = this.state.popoverOpen;
        this.setState({
          popoverOpen: !x
        }); 

      break;
      case "widget-whatsapp": 
      var x = this.state.popoverOpen1;
      this.setState({
        popoverOpen1: !x
      });
      break;
      case "widget-facebook": 
      var x = this.state.popoverOpen2;
      this.setState({
        popoverOpen2: !x
      });
      break;
      case "widget-twitter": 
      var x = this.state.popoverOpen3;
      this.setState({
        popoverOpen3: !x
      });
      break;
      case "widget-instagram": 
      var x = this.state.popoverOpen4;
      this.setState({
        popoverOpen4: !x
      });
      break;
      case "widget-youtube": 
      var x = this.state.popoverOpen5;
      this.setState({
        popoverOpen5: !x
      }); 
      break;
      default: 
      this.setState({
        popoverOpen: false,
        popoverOpen1: false,
        popoverOpen2: false,
        popoverOpen3: false,
        popoverOpen4: false,
        popoverOpen5: false
      }); 
    }
  }

  componentDidMount(){
    var chatButton = document.querySelector('.chat-widget--button');
    var chatBtnSecnd = document.querySelectorAll('.chat-widget--button-second');
    setTimeout(() => {
      chatBtnSecnd.forEach(element => {
        element.classList.add('-hide');
        chatButton.addEventListener('click', function() {
        void element .offsetWidth;
        element.classList.toggle('-hide');
      }, false);
      });
        }, 3000);
  }

  render() {
    return (
      <React.Fragment>
        <div class="chat-widget">
            <a class="chat-widget--button-second -hide"  href="https://www.wa.link/kd2a54" target="_blank" style={{backgroundColor: "#00BB2D"}} id="widget-whatsapp">
              <i class="chat-widget--icon-second fab fa-whatsapp fa-2x" style={{color: "white"}} ></i>
            </a>
            <a class="chat-widget--button-second -hide" href="https://www.youtube.com/channel/UCiYidEtfj2VP3nAqaG1u77w/featured" target="_blank" style={{backgroundColor: "#C4302B"}} id="widget-youtube">
              <i class="chat-widget--icon-second fab fa-youtube fa-2x" style={{color: "white"}} ></i>
            </a>
            <a class="chat-widget--button-second -hide" href="https://twitter.com/TurismoSanLuis_" target="_blank" style={{backgroundColor: "#00ACEE"}} id="widget-twitter">
            <i class="chat-widget--icon-second fab fa-twitter fa-2x" style={{color: "white"}} ></i>
            </a>
            <a class="chat-widget--button-second -hide" href="https://www.facebook.com/turismodesanluis/" target="_blank"  style={{backgroundColor: "#3B5998"}} id="widget-facebook">
              <i class="chat-widget--icon-second fab fa-facebook fa-2x" style={{color: "white"}} ></i>
            </a>
            <a class="chat-widget--button-second -hide " href="https://www.instagram.com/turismo_san_luis/" target="_blank"  style={{backgroundColor: "#c13584"}} id="widget-instagram">
             <i class="chat-widget--icon-second fab fa-instagram fa-2x" style={{color: "white"}}></i>
            </a>
            <a class="chat-widget--button" id="MainBtnWidget">
                <svg viewBox="0 0 41 36" class="chat-widget--icon"><path d="M34.7 5.2C38.6 8.6 40.7 13.2 40.7 18 40.7 22.8 38.6 27.4 34.7 30.8 31 34.2 26 36 20.7 36 19.1 36 17.5 35.8 16 35.5 15.2 35.3 14.7 34.5 14.9 33.7 15.1 32.9 15.8 32.4 16.6 32.6 17.9 32.9 19.3 33 20.7 33 30.1 33 37.7 26.3 37.7 18 37.7 9.7 30.1 3 20.7 3 11.3 3 3.6 9.7 3.6 18 3.6 21.4 4.9 24.7 7.3 27.4 7.7 27.8 7.8 28.4 7.6 28.9 7.2 30 6.7 30.9 6 31.8 7.2 31.7 8.6 31.3 9.8 30.6 10.5 30.1 11.5 30.4 11.9 31.1 12.3 31.8 12.1 32.7 11.4 33.1 8.3 35 5 34.9 3.3 34.6 2.5 34.5 1.8 33.9 1.7 33.1 1.5 32.3 1.8 31.4 2.5 31 3.4 30.4 4 29.6 4.5 28.6 2 25.6 0.7 21.8 0.7 18 0.7 13.2 2.8 8.6 6.6 5.2 10.4 1.8 15.4 0 20.7 0 26 0 31 1.8 34.7 5.2ZM20.7 20C19.6 20 18.7 19.1 18.7 18 18.7 16.9 19.6 16 20.7 16 21.7 16 22.6 16.9 22.6 18 22.6 19.1 21.7 20 20.7 20ZM26.7 20C25.6 20 24.8 19.1 24.8 18 24.8 16.9 25.6 16 26.7 16 27.8 16 28.6 16.9 28.6 18 28.6 19.1 27.8 20 26.7 20ZM14.6 20C13.6 20 12.7 19.1 12.7 18 12.7 16.9 13.6 16 14.6 16 15.7 16 16.6 16.9 16.6 18 16.6 19.1 15.7 20 14.6 20Z" /></svg>
            </a>
            
            <Popover trigger="hover" placement="left" isOpen={this.state.popoverOpen} target="MainBtnWidget" toggle={this.toggle}>
              <PopoverBody>Redes sociales</PopoverBody>
            </Popover>
            <Popover trigger="hover" placement="left" isOpen={this.state.popoverOpen1} target="widget-whatsapp" toggle={this.toggle}>
              <PopoverBody>Escribinos</PopoverBody>
            </Popover>
            <Popover trigger="hover" placement="left" isOpen={this.state.popoverOpen2} target="widget-facebook" toggle={this.toggle}>
              <PopoverBody>Agreganos</PopoverBody>
            </Popover>
            <Popover trigger="hover" placement="left" isOpen={this.state.popoverOpen3} target="widget-twitter" toggle={this.toggle}>
              <PopoverBody>Retuitea</PopoverBody>
            </Popover>
            <Popover trigger="hover" placement="left" isOpen={this.state.popoverOpen4} target="widget-instagram" toggle={this.toggle}>
              <PopoverBody>Seguinos</PopoverBody>
            </Popover>
            <Popover trigger="hover" placement="left" isOpen={this.state.popoverOpen5} target="widget-youtube" toggle={this.toggle}>
              <PopoverBody>Suscribite</PopoverBody>
            </Popover>
        </div>
      </React.Fragment>
    );
  }
}

//Newsletter.contextType = Consumer;