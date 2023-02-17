import React, { Component } from "react";
import UserRegistration from "./RegistroUsuario";

class LoginForm extends Component {
  constructor(props) {
    super(props);
    this. state = {
      username: "",
      password: "",
      register: false,
      usuarios: {
        data: [
          {
            id: 0,
            email: "",
            password: "",
            nombre: "",
            activo: -1
          }
        ]
      }
    };
  }

  componentDidMount(){

    //Get usuarios
    fetch(`${process.env.REACT_APP_API}/usersGastronomicos`, {
      method: "GET",
      headers: {
        Authorization: "asdssffsdff",
      },
    })
      .then((res) => res.json())
      .then(
        (result) => {
          if (!result.err) {
            var setX = result.data.registros.map((v) => {
              return {
                ...v
              };
            });
            this.setState(
              {
                usuarios: {
                  data: setX
                },
              },
              () => {
                //console.log(this.state.usuarios)
              }
            );
          } else {
            // this.setState({
            //   MsgVisible: true,
            //   MsgBody: result.errMsg,
            // });
          }
        },
        (error) => {
          this.setState({
            loading: true,
            error,
          });
        }
      );
  }

  handleRegister = () => {
    this.setState({
      register: !this.state.register,
    })
  }

  handleInputChange = (event) => {
    const { name, value } = event.target;
    this.setState({ [name]: value });
  };

  handleSubmit = (event) => {
    event.preventDefault();
    // Validar los datos
    console.log("Username: ", this.state.username);
    console.log("Password: ", this.state.password);


  };

  render() {
    const register = this.state.register;
    return (
      <>
      {register ? (
        <UserRegistration handleRegister={this.handleRegister}/>
      ) : (
        <div className="row justify-content-center ">
        <div className="col-md-3 login-border ">
        <h3 className="">Iniciar sesión</h3>
          <form onSubmit={this.handleSubmit}>
            <div className="form-group">
              <label htmlFor="username">E-mail:</label>
              <input
                type="text"
                id="username"
                className="form-control"
                name="username"
                value={this.state.username}
                onChange={this.handleInputChange}
              />
            </div>
            <div className="form-group">
              <label htmlFor="password">Contraseña:</label>
              <input
                type="password"
                className="form-control"
                id="password"
                name="password"
                value={this.state.password}
                onChange={this.handleInputChange}
              />
            </div>
            <div className="row justify-content-center">
              <button className="btn btn-primary btn-login" type="submit">
                Ingresar
              </button>
            </div>
            <div className="row justify-content-center">
              <p id="emailHelp" class="form-text text-muted">
                No tienes usuario aun?
                <button type="button" class="btn btn-link" onClick={this.handleRegister}>
                  Registrate
                </button>
              </p>
            </div>
          </form>
        </div>
      </div>
      )}
      </>
      
    );
  }
}

export default LoginForm;
