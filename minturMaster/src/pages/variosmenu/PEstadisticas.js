import React, { Component } from "react";
import Chart from "chart.js"
import Graficos from "../../components/Graficos"

/*
Chart.defaults.global = {  
  animation: true,
  animationSteps: 60,
  animationEasing: "easeOutBack",
  showScale: true,
  scaleOverride: false,
  scaleSteps: null,
  scaleStepWidth: null,
  scaleStartValue: null,
  scaleLineColor: "rgba(0,0,0,.1)",
  scaleLineWidth: 1,
  scaleShowLabels: true,
  scaleLabel: "<%=value%>",
  scaleIntegersOnly: true,
  scaleBeginAtZero: false,
  scaleFontFamily: "'Helvetica Neue', 'Helvetica', 'Arial', sans-serif",
  scaleFontSize: 12,
  scaleFontStyle: "normal",
  scaleFontColor: "#666",
  responsive: true,
  maintainAspectRatio: true,
  showTooltips: true,
  customTooltips: false,
  tooltips: true,
  tooltipEvents: ["mousemove", "touchstart", "touchmove"],
  tooltipFillColor: "rgba(0,0,0,0.8)",
  tooltipFontFamily: "'Helvetica Neue', 'Helvetica', 'Arial', sans-serif",
  tooltipFontSize: 14,
  tooltipFontStyle: "normal",
  tooltipFontColor: "#fff",
  tooltipTitleFontFamily:
    "'Helvetica Neue', 'Helvetica', 'Arial', sans-serif",
  tooltipTitleFontSize: 14,
  tooltipTitleFontStyle: "bold",
  tooltipTitleFontColor: "#fff",
  tooltipYPadding: 6,
  tooltipXPadding: 6,
  tooltipCaretSize: 8,
  tooltipCornerRadius: 6,
  tooltipXOffset: 10,
  tooltipTemplate: "<%if (label){%><%=label%>: <%}%><%= value %>",
  multiTooltipTemplate: "<%= value %>",
  onAnimationProgress: function () {},
  onAnimationComplete: function () {}
};*/

class PEstadisticas extends React.Component {
    constructor(props) {
      super(props);
      this.state = {
        data: [{
          title: "",
          data: []
          }, {
            title: "",
            data: []
          },
          {
          title: "",
              data: []
          },
          {
            title: "",
            data: []
        }]
      };

      this.getData = this.getData.bind(this);
      this.getRandomArray = this.getRandomArray.bind(this);
    }

    getRandomArray(numItems) {
        // Create random array of objects
        let names = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ';
        let data = [];
        for(var i = 0; i < numItems; i++) {
          data.push({
            label: names[i],
            value: Math.round(20 + 80 * Math.random())
          });
        }
        return data;
      } 

    getData() {
        let self = this;
        let data1 = [];
      
        data1.push({
          title: 'Visits',
          data: self.getRandomArray(14)
        });

        data1.push({
          title: 'Categories',
          data: self.getRandomArray(7)
        });

        data1.push({
          title: 'Asd',
          data: self.getRandomArray(7)
        });

        data1.push({
          title: 'Dsa',
          data: self.getRandomArray(4)
        });
      
        this.setState({
            data: data1
        })
      }

    componentDidMount() {
        this.getData()
    }
    
    render() {
      return (
          <React.Fragment>
            
            <div className="main-chart-wrapper" >
            <div className="estadisticas-leyenda">
                <span>ESTADISTICAS</span>
            </div>
            <div className="sub-chart-wrapper">
                <Graficos
                  tipo={"bar-withouty"}
                  data={this.state.data[0].data}
                  title={this.state.data[0].title}
                  color="#F7464A"
                />
              </div>
              <div className="sub-chart-wrapper">
                <Graficos
                    tipo={"bar"}        
                    data={this.state.data[1].data}
                    title={this.state.data[1].title}
                    color="#46BFBD"
                />
              </div>
              <div className="sub-chart-wrapper">
                <Graficos
                    tipo={"pie"}        
                    data={this.state.data[2].data}
                    title={this.state.data[2].title}
                    color={["#F7464A", "#46BFBD", "#FDB45C", '#3e517a', '#b08ea2', '#BBB6DF']}
                />
              </div>
              <div className="sub-chart-wrapper">
                <Graficos
                    tipo={"doughnut"}        
                    data={this.state.data[3].data}
                    title={this.state.data[3].title}
                    color={["#F7464A", "#46BFBD", "#FDB45C", '#3e517a', '#b08ea2', '#BBB6DF']}
                />
              </div>
            </div>
                        
          </React.Fragment>
      );
    }
  }
  export default PEstadisticas;