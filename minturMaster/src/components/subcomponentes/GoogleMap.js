import React, { Component } from "react";
import { Link } from "react-router-dom";

class GoogleMap extends Component {
    constructor(props) {
        super(props);   
        this.state = {
            loading: true,
            id: "ec94e128ca41ccaf",
            lat: 0,
            lng: 0,
            zoom: 13,
            gwidth: "100%",
            gheight: "100%",
            marker: null,
            maptype: "roadmap",
            data: []
        }
        this.setMap = this.setMap.bind(this);
        this.initMap = this.initMap.bind(this);
    }


    initMap(id) {
        this.setState({
            id: id,
            lat: this.props.lat,
            lng: this.props.lng,
            zoom: parseInt(this.props.zoom, 10),
            gwidth: this.props.gwidth,
            gheight: this.props.gheight,
            data: this.props.data
        }, () => {
            let {lat, zoom, data} = this.state;
            if(data.length !== 0){
                let x = -1;
                let locations = []
                lat.forEach(lat1 => {
                    x++;
                    var lng = parseFloat(this.state.lng[x], 10)
                    var lat = parseFloat(lat1, 10)
                    locations.push({lat, lng}) 
                });
                
                var latNew = locations[0].lat;
                var lngNew = locations[0].lng;
                
                const map = new window.google.maps.Map(document.getElementById(this.state.id), {
                    zoom: zoom,
                    mapTypeId: "roadmap",
                    center: { lat: latNew, lng: lngNew },
                });
    
                map.addListener("zoom_changed", () => {
                    this.setState({
                        zoom: map.getZoom(),
                    });
                });
    
                map.addListener("maptypeid_changed", () => {
                    this.setState({
                        maptype: map.getMapTypeId(),
                    });
                });
                
                const markers = locations.map((location, i) => {
                    var descripcion = "";
                    if(data[i].descripcion.length > 395) {
                        descripcion = data[i].descripcion.substr(0, 395) + "...";
                    } else {
                        descripcion = data[i].descripcion;
                    }
    
                    const contentString =
                    '<div id="content">' +
                    '<div id="siteNotice">' +
                    "</div>" +
                    `<h3 id="firstHeading" class="firstHeading">${data[i].nombre}</h3>` +
                    '<div id="bodyContent">' +
                    `<p>${descripcion} </p>` +
                    `<a href='#/localidad/${data[i].idciudad}'>
                        Clickea aca si queres saber mas de la localidad !!
                    </a>` +
                    "</div>" +
                    "</div>";
    
                    const infowindow = new window.google.maps.InfoWindow({
                        content: contentString,
                    });
    
                    var marker = new window.google.maps.Marker({ map: map, position:  { lat: location.lat, lng: location.lng }});
                    marker.addListener("click", () => {
                        infowindow.open(map, marker);
                      });
                });
               
                this.setState({
                    marker: markers
                });  
            }
        })
        
    }

    setMap(id) {
        this.setState({
            id: id,
            lat: parseFloat(this.props.lat, 10),
            lng: parseFloat(this.props.lng, 10),
            zoom: parseInt(this.props.zoom, 10),
            gwidth: this.props.gwidth,
            gheight: this.props.gheight
        }, () => {
            let {lat, lng, zoom} = this.state;

            let map = new window.google.maps.Map(document.getElementById(this.state.id), {
                center: {lat: lat, lng: lng},
                zoom: zoom,
                mapTypeId: "roadmap",
            });

            map.addListener("zoom_changed", () => {
                this.setState({
                    zoom: map.getZoom(),
                });
            });

            map.addListener("maptypeid_changed", () => {
                this.setState({
                    maptype: map.getMapTypeId(),
                });
            });

            let marker = new window.google.maps.Marker({
                map: map,
                position: {lat: lat, lng: lng},
            });

            this.setState({
                marker: marker
            });

        });
    }

    componentDidUpdate(prevProps) {
        if(this.props.lat !== prevProps.lat || this.props.lng !== prevProps.lng) {
            if(Object.prototype.toString.call(this.props.lat) === '[object Array]'){
                this.initMap(this.state.id); 
            }else{
                this.setMap(this.state.id);
            }        
        }
    }

    componentDidMount() {
        this.setState({
            id: "map-" + Math.random().toString(36).replace(/[^a-z]+/g, '').substr(0, 5)
        }, () => {
            if(Object.prototype.toString.call(this.props.lat) === '[object Array]'){
                if(this.props.lat.length != 0){
                    this.initMap(this.state.id);
                }else{
                }
                 
            }else{
                this.setMap(this.state.id);
            }
            
        })
    }

    render() {
        return(
            <React.Fragment>
                <div id={`${this.state.id}`} className="gmapa" />
                
                <style jsx="true">{`
                    .gmapa {
                        width: ${this.state.gwidth};
                        height: ${this.state.gheight};
                    }
                `}</style>
            </React.Fragment>
        );
    }
}

export default GoogleMap;
