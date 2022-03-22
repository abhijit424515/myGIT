---
cssclass: kanban
---
# Day 01
- ## ?
- ## Notes
  - h1 to h6 : headings of different levels
  - br : #self-closing-tag, line break
  - hr : #self-closing-tag, horizontal rule line
    - size="3" attribute makes the rule line thicker
  - center : central alignment
  - comments : ```<!-- -->```
  - boilerplate is very handy as a quick template
  - very handy [cheat sheet for emmet](https://docs.emmet.io/cheat-sheet/)
  - ```<!DOCTYPE html>``` is the document type with html version used in the program
  - meta tag has several attributes, like charset, description, etc.
  - for charset, use [UTF-8](https://unicode-table.com/en/) encoding, as it has many supported characters, and even several emojis
  - description attribute is used to display text as a website's description
    ![400](https://i.imgur.com/azS3Utl.png)

---

# Day 02
- ## ?
- ## Notes
  - prefer ```<em>``` for actual emphasis, while ```<i>``` for just italisizing
  - prefer ```<strong>``` for giving strong importance to a piece of text, while ```<b>``` is just to make text bold
  - use
    ```html
	<ul>
	    <li>Item 1</li>
		<li>Item 2</li>
    </ul>
    ```
	for an unordered list, while use ```<ol></ol>``` for an ordered list
	- for roman numerals, you can use ```type="i"``` attribute also
	- for starting with a certain number in ```<ol>```, use ```start="7"``` attribute
	- for adding image, use either one of these
	```html
	<img src="url_to_image">
	<img src="path_to_local_image">
	```
	- use ```alt="some_text"```  attribute to show alternate text in-case the image is not available
	- use ```<a href="some_url">Link text</a>``` to add links
	- here's the format of a table (borders are of 0 size by default)
	```html
	<table cellspacing="10">
	<thead>
		<tr>
			<th>   </th>
			<th>   </th>
		</tr>
	</thead>
	<tbody>
	</tbody>
	<tfoot>
	</tfoot>
		<tr>
			<td>   </td>
			<td>   </td>
		</tr>
		<tr>
			<td>   </td>
			<td>   </td>
		</tr>
	</table>
	```
	- you can also nest tables inside one-another
	- here's how to create a form
	```html
	<form action="mailto:info@abjksdn.com" method="post" encoding="text/plain">
		<label>Your Name:</label>
		<input type="text" name="yourName" value=""><br>
		<label>Your Email:</label>
		<input type="email" name="yourEmail" value=""><br>
		<label>Your Message:</label><br>
		<textarea name="yourMessage" rows="10" cols="30"></textarea><br>
		<input type="submit" name="">
	</form>
	```
	- 