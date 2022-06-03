---
cssclass: kanban
---
# Day 02
- ## ?
- ## Notes
  - we can change background by adding ```style="background-color: green;"``` or ```style="background-color: #EAF6F6;"``` to the body tag
  - really nice color schemes are at [this](https://colorhunt.co) link.
  - google "css colors mdn" to find out standard color names
  - for segragating the css, we can
    1. use ```<style>``` tag inside the ```<head>``` tag like this
      ```html
	  <style>
			body {
				background-color: #EAF6F6;
			}
	  </style>
	  ```
    2. use a separate css file
	 => use the ```<link rel="stylesheet" href="css/master.css">``` tag inside the ```head``` tag to link an external css
  - google "browser default css"
  - you can use an extension called "Toggle Pesticide" to view borders of each element in the html
  - a good ```hr``` tag styling is this
	```css
	hr {
		border-style: none;
		border-top-style: dotted;
		border-color: grey;
		border-width: 5px;
		width: 5%;
	}
	/* BTW, that's how we put comments in CSS */
	```
	- use the chromium Developer tools to look for errors
	- make sure you follow css override hierarchy
	- this is how we use classes and ids
	```css
	.classname {
		background-color: blue;
	}
	#idname {
		background-color: red;
	}
	```
	- one element can have only 1 unique ID, while it can have many classes which can be common too
	- specific selectors override the general selectors in CSS
	- we also have pseudo-classes, ex. like this one here which changes background color to green on mouse hover
	```css
	.class:hover {
		background-color: green;
	}
	```





---
# Day 03
- ## ?
- ## Notes
	- we can create favicons [here](https://www.favicon.cc), which will be downloaded as favicon.ico
	- then, we can use the ```<link>``` tag this way to include it in the website
	   ```html
	   <link rel="icon" href="favicon.ico">
	   ```
	- we can use ```<div>``` tag for dividing our page into different sections
	  ```html
	  <div class="">
	  </div>
	  ```
	- <span class=yellow>TIP</span> : we can use Chrome Dev tools to ease up our work, and to also check for the default css styling
	- there are 3 layers outside any elements, namely padding, border, and margin
	  ![|500](https://i.imgur.com/SoHrx8i.png)

	- 