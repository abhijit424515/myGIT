---
cssclass: kanban
---
# Day 04
- ## ?
- ## Notes
  - make sure JSX is used instead of javascript in the html ```<script>``` tag
      ```html
		<script src="../src/idnex.js" type="text/JSX"></script>
	  ```
  - to import the react libraries, we use
      ```jsx
	  import React from "react";
	  import ReactDOM from "react-dom";
	  ```
  - to render HTML, use
	   ```jsx
			ReactDOM.render(
				<div>
					//Some HTML code
				</div>
			,document.getElementbyId("root"));
		```
  - to use javascript expression (not statements) inside the html code, use curly braces
	   ```jsx
		const name = "Abhijit";
		ReactDOM.render(
			<div>
				<p>My name is {name}</p>
				<p>My lucky number is {Math.floor(Math.random()*10)}</p>
			</div>
		,document.getElementbyId("root"));
		```
  - format for template literals
	   ```jsx
	const fname = "Abhijit";
	const lname = "Amrendra Kumar";
	ReactDOM.render(
		<div>
				<p>My name is {`${fname} ${lname}`}</p>
			<p>My lucky number is {Math.floor(Math.random()*10)}</p>
		</div>
	,document.getElementbyId("root"));
	   ```
  - use ```className``` instead of ```class``` when using ReactJS
  - the ```contenteditable``` attribute in HTML can be used to make an element editable in the website
  - Javascript uses camel-case attribute name like ```contentEditable``` in contrast to ```contenteditable``` used in HTML
  - self-terminating tags can also be used in HTML and JSX
  - however, in-tag css won't work in HTML code embedded in JSX, since in JSX, the style MUST BE a <span class=yellow>javascript object</spab>.
	   ```jsx
	ReactDOM.render(
		<h1 style={{color:"red";}}></h1>            
		// note that the style syntax is not CSS (which is actually color: red;)
	,document.getElementbyId("root"));
	   ```
  - for updating styles on the fly, this is a good example
	   ```jsx
	const date = new Date();
	const currentime = date.getHours();
	let greeting; 
	const customStyle = {
		color : ""
	}
	if(currenttime<12){
		greeting="Good morning",
		customStyle.color="red"
	}
	else if(currenttime<18){
		greeting="Good afternoon"
		customStyle.color="green"
	}
	else{
		greeting="Good evening"
		customStyle.color="blue"
	}
	ReactDOM.render(
		<h1 style={customstyle}>{greeting}</h1>            
		// note that the style syntax is not CSS (which is actually color: red;)
	,document.getElementbyId("root"));
	   ```
  - for the list of best practices in JSX, see [this link](https://www.github.com/airbnb/javascript/tree/master/react)
  - 