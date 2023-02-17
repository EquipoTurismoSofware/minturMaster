import React, { Component } from "react";

class UserRegistration extends Component {
  constructor(props) {
    super(props);

    this.state = {
      username: "",
      email: "",
      password: "",
    };
  }
  //Modifica el prop del componente 
  handleInicioSesion = () => {
    this.props.handleRegister()
  }

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
    // Your registration logic goes here, using this.state.username, this.state.email, and this.state.password
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
                value={this.state.password}
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
                <button type="button" class="btn btn-link" onClick={this.handleInicioSesion}>
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
