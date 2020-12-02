import React, { Component } from "react";
import Toast from 'react-bootstrap/Toast';

class Newsletter extends Component {
    constructor(props) {
        super(props);
        this.state = {
			showAt: 0
		};
    }

    componentDidMount() {
        this.setState({
            showAt: parseInt(this.props.showAt, 10)
        }, () => {
            window.onscroll = () => {
                console.log("Al menos aca si?");
                let News = document.getElementById("myNews");
                if(document.body.scrollTop > this.state.showAt || document.documentElement.scrollTop > this.state.showAt) {
                    console.log("SI");
                    if(News) {
                        console.log("enter");
                        News.style.display = "block";
                    }
                } else {
                    console.log("NO");
                    if(News) {
                        console.log("Noentre");
                        News.style.display = "none";
                    }
                }
            };
        });
    }

    render() {
        return(
            <React.Fragment>
                    <Toast id="myNews">
                        <Toast.Header>
                        <img src="holder.js/20x20?text=%20" className="rounded mr-2" alt="" />
                        <strong className="mr-auto">Bootstrap</strong>
                        <small>just now</small>
                        </Toast.Header>
                        <Toast.Body>See? Just like this.</Toast.Body>
                    </Toast>
                <style jsx="true">{`  
                #myNews {
                    display: none; /* Hidden by default */
                    position: fixed; /* Fixed/sticky position */
                    bottom: 20px; /* Place the button at the bottom of the page */
                    right: 50%; /* Place the button 30px from the right */
                    z-index: 99; /* Make sure it does not overlap */
                    border: none; /* Remove borders */
                    outline: none; /* Remove outline */
                    background-color: rgba(0, 0, 0, .3); /* Set a background color */
                    color: white; /* Text color */
                    cursor: pointer; /* Add a mouse pointer on hover */
                    padding: 5px 10px; /* Some padding */
                    border-radius: 5px; /* Rounded corners */
                    font-size: 16px; /* Increase font size */
                    transform: translateX(50%);
                    -webkit-transition: all .1s linear; /* Safari */
                    transition: all .1s linear;
                }
            `}</style>
          </React.Fragment>
        );
    }
}

export default Newsletter;