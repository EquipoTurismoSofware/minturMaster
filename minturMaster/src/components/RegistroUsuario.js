import React, { Component } from "react";

class UserRegistration extends Component {
  constructor(props) {
    super(props);

    this.state = {
      username: "Pepito Perez",
      email: "pepito.perez@gmail.com",
      password: "qwerty123",
      passwordConfirm: "qwerty123",
      msg: {
        visible: false,
        body: "",
      },
    };
  }
  //Modifica el prop del componente
  handleInicioSesion = () => {
    this.props.handleRegister();
  };

  handleInputChange = (event) => {
    const target = event.target;
    const name = target.name;
    const value = target.value;

    this.setState({
      [name]: value,
    });
  };

  handleSubmit = (event) => {
    event.preventDefault();

    const data = new FormData();
    data.append("email", this.state.email);
    data.append("password", this.state.password);
    data.append("nombre", this.state.username);

    //Validaciones
    if (this.state.password == this.state.passwordConfirm) {
      console.log("Son iguales");
      if (this.state.password.length >= 8) {
        console.log("Tiene mas de 8 caracteres");
        console.log(data);
        //Falta validacion de mail

        //Create user
        fetch(`${process.env.REACT_APP_API}/userGastronomico`, {
          method: "POST",
          headers: {
            Authorization: "",
          },
          body: data,
        })
          .then((res) => res.json())
          .then(
            (result) => {
              if (!result.err) {
                this.setState(
                  {
                    msg: {
                      visible: true,
                      body: "Usuario registrado correctamente.",
                    },
                  },
                  () => {}
                );
              } else {
                this.setState({
                  visible: true,
                  body: result.errMsgs.join(", "),
                });
              }
            },
            (error) => {
              //???
              this.setState({
                msg: {
                  visible: true,
                  body: error,
                },
              });
            }
          );
      }
    }
  };

  render() {
    return (
      <div className="row justify-content-center">
        <div className="col-md-4 login-border">
          <h3 className="">Crear nuevo usuario</h3>
          <form onSubmit={this.handleSubmit}>
            <div className="form-group">
              <label>Nombre Completo:</label>
              <input
                type="text"
                name="username"
                className="form-control"
                value={this.state.username}
                onChange={this.handleInputChange}
              />
            </div>
            <div className="form-group">
              <label>E-mail:</label>
              <input
                type="email"
                name="email"
                className="form-control"
                value={this.state.email}
                onChange={this.handleInputChange}
              />
            </div>
            <div className="form-group">
              <label>Contraseña:</label>
              <input
                type="password"
                name="password"
                className="form-control"
                value={this.state.password}
                onChange={this.handleInputChange}
              />
              <small className="text-muted">Al menos 8 caracteres</small>
            </div>
            <div className="form-group">
              <label>Confirmar Contraseña:</label>
              <input
                type="password"
                name="passwordConfirm"
                className="form-control"
                value={this.state.passwordConfirm}
                onChange={this.handleInputChange}
              />
            </div>
            <div className="row justify-content-center">
              <button className="btn btn-primary btn-login" type="submit">
                Registrarse
              </button>
            </div>
            <div className="row justify-content-center">
              <p id="emailHelp" class="form-text text-muted">
                Ya tienes un usuario?
                <button
                  type="button"
                  class="btn btn-link"
                  onClick={this.handleInicioSesion}
                >
                  Iniciar sesión
                </button>
              </p>
            </div>
          </form>
        </div>
      </div>
    );
  }
}

export default UserRegistration;
