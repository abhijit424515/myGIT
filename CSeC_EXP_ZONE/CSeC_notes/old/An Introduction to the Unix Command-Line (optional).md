Backlink : [[CS 101]]

---

# An Introduction to the Unix Command-Line (optional)
## Basic commands ==>
```pwd```
-> prints out the path of the current directory

```cd Downloads/inhere```
-> change directory to the specified directory
```cd ..```
-> go to parent directory

```ls``` 
-> list files in current directory

```mkdir alpha```
-> make a new folder with the specified name

```cat data.txt```
-> print out the contents of the specified file in a non-scrollable manner

```less data.txt```
-> print out the contents of the specified file in a scrollable manner

```cp ~/Desktop/data1.txt ~/Downloads/t1.txt```
-> copy the 1st file present in the specified directory to the new directory with the new name specified above

```mv ~/Desktop/data1.txt ~/Downloads/t1.txt```
-> move the 1st file present in the specified directory to the new directory with the new name specified above


---
## Intermediate common commands ==>
```ls | wc -l```
-> print how many files are there in the current directory

```
for f in *; do
mv $f large-$f
done
```
-> prepend 'large-' to all files in the current directory

```cat *.c | wc -l```
-> count the total number of lines in all files in the current directory having .c extension

```wc -l *.c | sort -n | tail -6```
-> Print out the names of the (6-1) files having .c extension, and having maximum number of lines in the current directory