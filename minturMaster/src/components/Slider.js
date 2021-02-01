import React, { Component} from 'react';
import { Consumer } from "../context";
import Loading from "../utils/Loading";
import { TweenMax, Power1} from "gsap/all";

class Slider extends Component {
	constructor(props) {
		super(props);
		this.state = {
		canvas0: React.createRef(),
		ctx0: "",
		canvas1: React.createRef(),
		ctx1: "", 
		canvas2: React.createRef(),
		ctx2: "",
		canvas3: React.createRef(),
		ctx3: "",
		linklist: React.createRef(),
		btns: React.createRef(),
		nextBtn: React.createRef(),
		loadTxt: React.createRef(),	
		isAnimating: false,
		currentImage: 0,
		prevImage: 0,
		currentLink: "", 
		imagesloaded: 0,
		partMove: {val: 1},
		slideshowInterval: "",
		imagesList: [],
		linkList1: [],
		imgW: "",
		imgH: "",
		IAR: "",
		VW: "",
		VH: "",
		AR: "",
		IS_ACTIVE: 'is-active',
		partList: [{
			context: "",
			xpos: 100,
			radius: 0 // circumference of mask1
		}, {
			context: "",
			xpos: -70,
			radius: 0 // circumference of mask2
		}, {
			context: "",
			xpos: 50,
			radius: 0 // circumference of mask3
		}]
		};

		this.drawImages = this.drawImages.bind(this);
		this.changeImage = this.changeImage.bind(this);
		this.onBtnsClick = this.onBtnsClick.bind(this);
		this.onListClick = this.onListClick.bind(this);
		this.selectLink = this.selectLink.bind(this);
		this.calculateScreen = this.calculateScreen.bind(this);
		this.resizeBg = this.resizeBg.bind(this);
		this.slideshowChange = this.slideshowChange.bind(this);
		this.addEL = this.addEL.bind(this);
		this.preloadImages = this.preloadImages.bind(this);
		this.handleImageComplete = this.handleImageComplete.bind(this);
		this.init = this.init.bind(this);
		this.preInit = this.preInit.bind(this);
		this.debounce = this.debounce.bind(this);
	  }	
	//SIMILAR AL COMPONENT DID MOUNT
	
	drawImages() {
		var imgPrev = this.state.imagesList[this.state.prevImage];
		var imgNext = this.state.imagesList[this.state.currentImage];
		// This is Next
		this.state.ctx0.globalAlpha = 1;
		this.state.ctx0.drawImage(imgNext, 0, 0, this.state.imgW, this.state.imgH);

		// This is Prev
		this.state.ctx0.globalAlpha = this.state.partMove.val;
		this.state.ctx0.drawImage(imgPrev, 0, 0, this.state.imgW, this.state.imgH);

		var obj, ctx, xPrev, xNext;
		for (var i = 0; i < this.state.partList.length; i++) {
			
			obj = this.state.partList[i];
			ctx = obj.context;
			xPrev = -obj.xpos * (1 - this.state.partMove.val);
			xNext = obj.xpos * this.state.partMove.val;
			ctx.clearRect(0, 0, this.state.VW, this.state.VH);
			ctx.save();
			ctx.beginPath();
			ctx.arc(this.state.VW / 2, this.state.VH / 2, obj.radius, 0, 2 * Math.PI, false);
			ctx.fill();
			

			// This is Next
			ctx.globalAlpha = 1;
			ctx.globalCompositeOperation = 'source-in';
			ctx.drawImage(imgNext, xNext, 0, this.state.imgW, this.state.imgH);

			// This is Prev
			ctx.globalAlpha = this.state.partMove.val;
			ctx.globalCompositeOperation = 'source-atop';
			ctx.drawImage(imgPrev, xPrev, 0, this.state.imgW, this.state.imgH);

			ctx.globalCompositeOperation = 'source-over';
			ctx.globalAlpha = 1;

			if (i === 0) {
				ctx.lineWidth = 1;
				ctx.strokeStyle = '#fff';
				ctx.stroke();
			}
		}
	}

	changeImage () {
		var self = this;
		// Do not interupt previous movement
		if (this.state.isAnimating) {
			return;
		}

		this.setState({
			isAnimating: true
		}, () => {
			TweenMax.to(this.state.partMove, 1, {
				val: 0,
				ease: Power1.easeInOut,
				onUpdate: this.drawImages,
				onComplete: function() {
					self.state.partMove.val = 1;			
					self.state.isAnimating = false;
				}
			});
		})
	}

	onBtnsClick(event) {
		event.preventDefault();
		if (this.state.isAnimating) {
			return;
		}

		var trgt = event.target;
		if (trgt.nodeName === 'BUTTON') {

			this.state.prevImage = this.state.currentImage;

			if (trgt.classList.contains('show-next')) {
				(this.state.currentImage + 1 >= this.state.imagesList.length) ? this.state.currentImage = 0: this.state.currentImage++;
			} else {
				(this.state.currentImage - 1 < 0) ? this.state.currentImage = this.state.imagesList.length - 1: this.state.currentImage--;
			}

			this.changeImage();
			this.selectLink();
			clearInterval(this.state.slideshowInterval);
		}
	}

	onListClick (e){
		e.preventDefault();

		// Do not interupt previous animation
		if (this.state.isAnimating) {
			return;
		}

		var trgt = e.target;

		if (trgt.nodeName === 'A') {

			this.state.prevImage = this.state.currentImage;
			this.state.currentImage = parseInt(trgt.getAttribute('data-order'), 10);
			this.changeImage();

			this.selectLink();

			clearInterval(this.state.slideshowInterval);
		}
	}

	selectLink () {
		let {IS_ACTIVE} = this.state
		if (this.state.currentLink !== "") {
			this.state.currentLink.classList.remove(IS_ACTIVE);
		}
		this.setState({
			currentLink: this.state.linkList1[this.state.currentImage],
		}, () => {
			this.state.currentLink.classList.add(IS_ACTIVE)
		})
	}

	calculateScreen() {
		var vw = window.innerWidth;
		var vh = window.innerHeight;
		var res = vw / vh;
		var list = this.state.partList
		
		this.state.canvas0.current.width = this.state.canvas1.current.width = this.state.canvas2.current.width = this.state.canvas3.current.width = vw;
		this.state.canvas0.current.height = this.state.canvas1.current.height = this.state.canvas2.current.height = this.state.canvas3.current.height = vh;

		list[0].radius = vw * 0.4;
		list[1].radius = vw * 0.25;
		list[2].radius = vw * 0.08;

		this.setState({
			VW: vw,
			VH: vh,
			AR: res,
			partList: list
		});
		
	}

	resizeBg() {
		var image1 = this.state.imagesList[0];
		var iar = image1.width / image1.height;
		if (iar < this.state.AR) {
			this.setState({
				IAR: iar,
				imgW: this.state.VW,
				imgH: this.state.VW / iar
			});
		} else {
			this.setState({
				IAR: iar,
				imgW: this.state.VH * iar,
				imgH: this.state.VH
			});
		} 
	}

	slideshowChange (){
		this.state.prevImage = this.state.currentImage;
		(this.state.currentImage + 1 >= this.state.imagesList.length) ? this.state.currentImage = 0: this.state.currentImage++;
		this.changeImage();
		this.selectLink();
	}

	addEL(){
		let self = this;
		var debounceResize = this.debounce(function() {
			self.calculateScreen();
			self.resizeBg();
			self.changeImage();
		}, 200);

		window.addEventListener('resize', debounceResize);
		this.state.btns.current.addEventListener('click', this.onBtnsClick);
		this.state.linklist.current.addEventListener('click', this.onListClick);

	}

	preloadImages () {
		this.state.imagesList.forEach((img) => {
			if (img.complete) {
				this.handleImageComplete();
				
			} else {
				img.onload = this.handleImageComplete;
			}
		});
	}

	handleImageComplete() {
		var x = this.state.imagesloaded++;
		var y = x + 1;
		this.setState({
			imagesloaded: y
		}, () => {
			if (this.state.imagesloaded === this.state.imagesList.length) {
				this.state.loadTxt.current.classList.add('is-hidden');
				this.addEL();
				this.init();
			}
		})
		
	}

	init (){	
		const calculatePromise = new Promise((resolve) => {
			resolve(this.calculateScreen());
		  });

		const selectLinkPromise = new Promise((resolve) => {
			resolve(this.selectLink());
		  });

		const resizeBgPromise = new Promise((resolve) => {
			resolve(this.resizeBg());
		});
		calculatePromise.then((response1) => {
			resizeBgPromise.then((response2) => {
				selectLinkPromise.then((response3) => {
					this.changeImage()
					this.setState({
						slideshowInterval: setInterval(this.slideshowChange,3000)
					})
				  });
			});
		})
	}

	preInit(){
		var alist = this.state.linklist.current.querySelectorAll('a');
		var img;
		var x = this.state.linkList1;
		var y = this.state.imagesList;
		for (var i = 0; i < alist.length; i++) {
			x.push(alist[i]);
			img = new Image();
			img.src = alist[i].getAttribute('data-imagesrc');
			y.push(img);
			this.setState({
				linkList1: x,
				imagesList: y
			})
		}
		
		const calculateScreenPromise = new Promise((resolve) => {
			resolve(this.calculateScreen());
		});
		calculateScreenPromise.then((response) => {
			this.preloadImages();
		});
		
	}

	debounce (func, wait, immediate) {
		var timeout;
		return function() {
			var context = this,
				args = arguments;
			var later = function() {
				timeout = null;
				if (!immediate) func.apply(context, args);
			};
			var callNow = immediate && !timeout;
			clearTimeout(timeout);
			timeout = setTimeout(later, wait);
			if (callNow) func.apply(context, args);
		};
	}

	componentDidMount() {
		var x = this.state.partList;
		this.setState({
			ctx0: this.state.canvas0.current.getContext('2d'),
			ctx1: this.state.canvas1.current.getContext('2d'),
			ctx2: this.state.canvas2.current.getContext('2d'),
			ctx3: this.state.canvas3.current.getContext('2d')
		}, () => {
			x[0].context = this.state.ctx1;
			x[1].context = this.state.ctx2;
			x[2].context = this.state.ctx3;
			this.setState({
				partList: x
			}, () => {
				this.preInit();
				
			})
		})
		
	}

	render(){
		return (
			<React.Fragment>
				<canvas id="canvas0" className={"thecanvas"} width="800" height="480" ref={this.state.canvas0}></canvas>
				<canvas id="canvas1" className={"thecanvas"} width="800" height="480" ref={this.state.canvas1}></canvas>
				<canvas id="canvas2" className={"thecanvas"} width="800" height="480" ref={this.state.canvas2}></canvas>
				<canvas id="canvas3" className={"thecanvas"} width="800" height="480" ref={this.state.canvas3}></canvas>
				<nav class="link-list" ref={this.state.linklist}>
					<ul>
						<li><a href="" data-order="0" data-imagesrc="http://localhost/api-turismo-master/api-turismo-master/public/recursos/carousel/FONDO%201-min.png"></a></li>
						<li><a href="" data-order="1" data-imagesrc="https://mir-s3-cdn-cf.behance.net/project_modules/max_1200/04de5959138189.5a168738850c3.jpg"></a></li>
						<li><a href="" data-order="2" data-imagesrc="https://mir-s3-cdn-cf.behance.net/project_modules/max_1200/d00a5e59138189.5a16873887bdd.jpg"></a></li>
						<li><a href="" data-order="3" data-imagesrc="https://mir-s3-cdn-cf.behance.net/project_modules/1400/c9a2a063821461.5ac1239819171.jpg"></a></li>
						<li><a href="" data-order="4" data-imagesrc="https://mir-s3-cdn-cf.behance.net/project_modules/1400/dad4f463821461.5ac1076d90b2c.jpg"></a></li>
					</ul>
				</nav>
				<nav class="btns" ref={this.state.btns}>
					<button class="show-prev"><span><i className="chevron-left"></i></span></button>
					<button class="show-next" ref={this.state.nextBtn}><span><i className="chevron-right"></i></span></button>
				</nav>
				<p class="loading-txt" ref={this.state.loadTxt}>Loading images...</p>
	
			</React.Fragment>
		);
	}

}

Slider.contextType = Consumer;
export default Slider;











/*import React, { useEffect, useState, useRef} from 'react';
import { Consumer } from "../context";
import Loading from "../utils/Loading";
import { TweenMax, Power1} from "gsap/all";

const Slider = () => {	
	const [canvas0, setCanvas0] = useState(React.createRef());
    const [ctx0, setCtx0] = useState("");
    const [canvas1, setCanvas1] = useState(React.createRef());
    const [ctx1, setCtx1] = useState(""); 
    const [canvas2, setCanvas2] = useState(React.createRef());
    const [ctx2, setCtx2] = useState("");
    const [canvas3, setCanvas3] = useState(React.createRef());
    const [ctx3, setCtx3] = useState("");
    const [linklist, setLinkList] = useState(React.createRef());
    const [btns, setBtns] = useState(React.createRef());
    const [nextBtn, setNextBtn] = useState(React.createRef());
	const [loadTxt, setLoadTxt] = useState(React.createRef());	
	const [isAnimating, setIsAnimating] = useState(false);
	const [currentImage, setCurrentImage] = useState(0);
    const [prevImage, setPrevImage] = useState(0);
    const [currentLink, setCurrentLink] = useState(); 
    const [imagesloaded, setImagesloaded] = useState(0);
    const [partMove, setPartMove] = useState({val: 1});
    const [slideshowInterval, setSlideshowInterval] = useState();
    const [imagesList, setImagesList] = useState({list: []});
    const [linkList1, setLinkList1] = useState({list: []});
    const [imgW, setImgW] = useState();
    const [imgH, setImgH] = useState();
	const [IAR, setIAR] = useState();
	const [VW, setVW] = useState();
	const [VH, setVH] = useState();
	const [AR, setAR] = useState();
	const [IS_ACTIVE, setIS_ACTIVE] = useState('is-active');
	const [partList, setPartList] = useState({list: [{
		context: ctx1,
		xpos: 100,
		radius: 0 // circumference of mask1
	}, {
		context: ctx2,
		xpos: -70,
		radius: 0 // circumference of mask2
	}, {
		context: ctx3,
		xpos: 50,
		radius: 0 // circumference of mask3
	}]});


	//SIMILAR AL COMPONENT DID MOUNT
	useEffect(() => {
		setCtx0(canvas0.current.getContext('2d'));
		setCtx1(canvas1.current.getContext('2d'));
		setCtx2(canvas2.current.getContext('2d'));
		setCtx3(canvas3.current.getContext('2d'));
		preInit();
	}, []);

	useEffect(() => {
		console.log("SI EXISTE LA TRUCHA LISTA: ", imagesList)
		preloadImages();
	}, [imagesList]);

	//OBSERVO IMAGESLOADED
	useEffect(() => {
		console.log(imagesList)
		console.log(imagesloaded + " - " + imagesList.list.length)
		if (imagesloaded === imagesList.list.length) {
			loadTxt.current.classList.add('is-hidden');
			addEL();
			init();
		}else{
			console.log("Falle")
		}
		
	}, [imagesloaded]);

	useEffect(() => {
		setAR(VW / VH);

		canvas0.current.width = canvas1.current.width = canvas2.current.width = canvas3.current.width = VW;
		canvas0.current.height = canvas1.current.height = canvas2.current.height = canvas3.current.height = VH;

		partList.list[0].radius = VW * 0.4;
		partList.list[1].radius = VW * 0.25;
		partList.list[2].radius = VW * 0.08;
		setPartList({list: partList})
	}, [VW, VH]);
	
	useEffect(() => {
		if (IAR < AR) {
			setImgW(VW);
			setImgH(VW / IAR)
		} else {
			setImgW(VH * IAR);
			setImgH(VH)
		}
	}, [IAR]);

	useEffect(() => {
		//currentLink.classList.add(IS_ACTIVE);
	}, [currentLink]);

	function drawImages() {

		var imgPrev = imagesList[prevImage];
		var imgNext = imagesList[currentImage];

		// This is Next
		ctx0.globalAlpha = 1;
		ctx0.drawImage(imgNext, 0, 0, imgW, imgH);

		// This is Prev
		ctx0.globalAlpha = partMove.val;
		ctx0.drawImage(imgPrev, 0, 0, imgW, imgH);



		var obj, ctx, xPrev, xNext;
		for (var i = 0; i < partList.length; i++) {

			obj = partList[i];
			ctx = obj.context;
			xPrev = -obj.xpos * (1 - partMove.val);
			xNext = obj.xpos * partMove.val;

			ctx.clearRect(0, 0, VW, VH);

			ctx.save();
			ctx.beginPath();
			ctx.arc(VW / 2, VH / 2, obj.radius, 0, 2 * Math.PI, false);
			ctx.fill();

			// This is Next
			ctx.globalAlpha = 1;
			ctx.globalCompositeOperation = 'source-in';
			ctx.drawImage(imgNext, xNext, 0, imgW, imgH);

			// This is Prev
			ctx.globalAlpha = partMove.val;
			ctx.globalCompositeOperation = 'source-atop';
			ctx.drawImage(imgPrev, xPrev, 0, imgW, imgH);


			ctx.globalCompositeOperation = 'source-over';
			ctx.globalAlpha = 1;

			if (i === 0) {
				ctx.lineWidth = 1;
				ctx.strokeStyle = '#fff';
				ctx.stroke();
			}
		}
	}

	function changeImage () {

		// Do not interupt previous movement
		if (isAnimating) {
			return;
		}

		setIsAnimating(true);

		TweenMax.to(partMove, 1, {
			val: 0,
			ease: Power1.easeInOut,
			onUpdate: drawImages,
			onComplete: function() {
				partMove.val = 1;
				setIsAnimating(false);
			}
		});

	}

	function onBtnsClick (e) {
		e.preventDefault();
		if (isAnimating) {
			return;
		}

		var trgt = e.target;
		if (trgt.nodeName === 'BUTTON') {

			prevImage = currentImage;

			if (trgt.classList.contains('show-next')) {
				(currentImage + 1 >= imagesList.length) ? currentImage = 0: currentImage++;
			} else {
				(currentImage - 1 < 0) ? currentImage = imagesList.length - 1: currentImage--;
			}

			changeImage();
			selectLink();
			clearInterval(slideshowInterval);
		}
	}

	function onListClick (e){

		e.preventDefault();

		// Do not interupt previous animation
		if (isAnimating) {
			return;
		}

		var trgt = e.target;

		if (trgt.nodeName === 'A') {

			prevImage = currentImage;
			currentImage = parseInt(trgt.getAttribute('data-order'), 10);
			changeImage();

			selectLink();

			clearInterval(slideshowInterval);
		}
	}

	function selectLink () {

		if (currentLink !== undefined) {
			currentLink.classList.remove(IS_ACTIVE);
		}
		setCurrentLink(linkList1.list[currentImage])
		

	}

	function calculateScreen() {
		setVW(window.innerWidth);
		setVH(window.innerHeight);
	}

	function resizeBg() {
		var image1 = imagesList.list[0];
		console.log(imagesList.list[0]);
		//setIAR(image1.width / image1.height)
		
	}

	function slideshowChange (){
		prevImage = currentImage;
		(currentImage + 1 >= imagesList.length) ? currentImage = 0: currentImage++;
		changeImage();
		selectLink();
	}

	function addEL(){
		var debounceResize = debounce(function() {
			calculateScreen();
			resizeBg();
			changeImage();
		}, 200);

		window.addEventListener('resize', debounceResize);
		btns.current.addEventListener('click', onBtnsClick);
		linklist.current.addEventListener('click', onListClick);

	}

	function preloadImages () {
		imagesList.list.forEach((img) => {
			console.log("QUESESTO? ", img.complete)
			if (img.complete) {
				console.log("Entre aca")
				handleImageComplete();
			} else {
				console.log("O aca?")
				img.onload = handleImageComplete;
			}

		});
	}

	function handleImageComplete() {
		console.log(imagesloaded)
		setImagesloaded(imagesloaded + 1);
	}

	function init (){		
		calculateScreen();
		resizeBg();
		selectLink();
		changeImage();
		setSlideshowInterval(setInterval(slideshowChange,3000))
	}

	function preInit(){
		var alist = linklist.current.querySelectorAll('a');
		var img;
		var x = imagesList;
		var y = linkList1;
		for (var i = 0; i < alist.length; i++) {
			y.list.push(alist[i]);
			setLinkList1({list: y})
			img = new Image();
			img.src = alist[i].getAttribute('data-imagesrc');
			x.list.push(img);
			setImagesList({list: x})
		}
		
	}

	function debounce (func, wait, immediate) {
		var timeout;
		return function() {
			var context = this,
				args = arguments;
			var later = function() {
				timeout = null;
				if (!immediate) func.apply(context, args);
			};
			var callNow = immediate && !timeout;
			clearTimeout(timeout);
			timeout = setTimeout(later, wait);
			if (callNow) func.apply(context, args);
		};
	}

	

	return (
        <React.Fragment>
			<canvas id="canvas0" width="800" height="480" ref={canvas0}></canvas>
			<canvas id="canvas1" width="800" height="480" ref={canvas1}></canvas>
			<canvas id="canvas2" width="800" height="480" ref={canvas2}></canvas>
			<canvas id="canvas3" width="800" height="480" ref={canvas3}></canvas>
			<nav class="link-list" ref={linklist}>
				<ul>
					<li><a href="" data-order="0" data-imagesrc="https://mir-s3-cdn-cf.behance.net/project_modules/max_1200/1fcd7259138189.5a168738899cc.jpg"></a></li>
					<li><a href="" data-order="1" data-imagesrc="https://mir-s3-cdn-cf.behance.net/project_modules/max_1200/04de5959138189.5a168738850c3.jpg"></a></li>
					<li><a href="" data-order="2" data-imagesrc="https://mir-s3-cdn-cf.behance.net/project_modules/max_1200/d00a5e59138189.5a16873887bdd.jpg"></a></li>
					<li><a href="" data-order="3" data-imagesrc="https://mir-s3-cdn-cf.behance.net/project_modules/1400/c9a2a063821461.5ac1239819171.jpg"></a></li>
					<li><a href="" data-order="4" data-imagesrc="https://mir-s3-cdn-cf.behance.net/project_modules/1400/dad4f463821461.5ac1076d90b2c.jpg"></a></li>
				</ul>
			</nav>
			<nav class="btns" ref={btns}>
				<button class="show-prev"><span>PREV</span></button>
				<button class="show-next"><span>NEXT</span></button>
			</nav>
			<p class="loading-txt" ref={loadTxt}>Loading images...</p>

		</React.Fragment>
	);

}

Slider.contextType = Consumer;
export default Slider;*/


