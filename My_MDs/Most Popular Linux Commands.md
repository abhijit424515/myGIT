links : [[OverTheWire-Bandit]], [[Tips and Tricks for Linux File Commands]], [[Bash Scripting]]

---
# Most Popular Linux Commands

[Linux commands handbook](https://flaviocopesbooks.fra1.digitaloceanspaces.com/linux-commands-handbook.pdf)

## Important References and Tips:
1. [locate vs find vs which](https://www.geeksforgeeks.org/difference-between-locate-which-and-find-command-in-linux/)
    ```
	"locate" searches everything, using a pre-built index (which is updated every 24 hours)
    "which" searches the $PATH environment variable (which specifies the directories to search for finding commands)
    "find" searches everything, and can also search using name, owner, type, size, date modified, permissions, etc. 
	```
2. [chmod-permissions-calculator](https://chmod-calculator.com/)

      ![|500](https://i.imgur.com/H0rqPwQ.png)
3. Checkout ```.bashrc``` or ```.zshrc``` (specially for *aliases*)
    Don't forget to ```source .bashrc``` OR ```source .zshrc``` after editing the files

---
## Commands =>

```bash
history                             # prints the previously used commands

!95                                 # execute the 95th command in the history list
!!                                  # execute the last command
                                    # example : sudo !!, if the last command couldn't be executed due to absence of sudo command

whoami                              # prints out the username using which the terminal is being accessed
which                               # prints the path for the binary of program
whereis                             # prints the paths for binary files & libraries	

locate hello                        # prints the paths of all files and folders having "hello" in their FULL path

man xyz                             # display the manual for the 'xyz' command
                                    # use arrow keys to scroll 1_line_AAT, spacebar for 1_page_AAT, and q to quit
                                    
clear                               # clear the previous outputs in the terminal
                                    # OR keyboard hosrtcut : ctrl + L

pwd                                 # prints out the path of the current directory

cd /alpha/docs                      # change directory to the specified directory
cd ..                               # change directory to the parent directory
cd ../..                            # change directory to the parent directory of the parent directory
cd ~                                # change directory to the home folder
cd /                                # change directory to the root folder
cd -                                # change directory to previous directory

mkdir alpha beta                    # create 2 new folders with the specified names(with/without path)
mkdir -p alpha/a/1                  # creates nested the specified folders in one go, starting from wherever a folder in the nest is not available

touch apple orange.txt              # make 2 empty files with the specified names and extensions(if any)
                                    # if the filename already exists, then it's timestamp is updated
                                    # instead of touch, we can also use a custom editor (nano,vim,emacs,code)

rmdir alpha beta                    # deletes the specified folders, provided they are empty

rm alpha beta                       # deletes the specified files
rm -v alpha beta                    # deletes the specified files and prints the operations performed
rm -r alpha beta                    # deletes the specified folders and their contents
rm -i alpha beta                    # deletes the specified files, with a prompt for each file

xdg-open alpha                      # open the specified file/folder in the default program (only 'open' for Mac)

mv loung lounge                     # rename file/folder from 'loung' to 'lounge'
mv filepath1 filepath2              # move file/folder from path1 to path2, and POSSIBLY rename it also
mv file1 file2 dir1                 # move file1 and file2 to dir1

cp filepath1 filepath2              # copy file from path1 to path2
cp -r path1 path2                   # copy folder from path1 to path2

head file -n 100                    # prints the first 100 lines of the specified file

tail file -n 100                    # prints the last 100 lines of the specified file
tail -f file                        # prints the last 10 lines, and displays live changes at the end of the file  

date                                # prints out the current date, time and timezone

cal                                 # CLI calender

bc                                  # CLI calculator

echo "hey"                          # prints out "hey" in the terminal

printf "hey"                        # prints out "hey in the terminal
                                    # printf also supports ESCAPE_SEQUENCES

cat readme                          # print the contents of the specified file
cat alpha beta                      # prints the combined contents of the specified files
cat ./-thisfile                     # cat for filenames having special characters
                                    # better to use in-general
cat 'spaces in this filename'       # cat for filenames having spaces
cat spaces\ in\ this\ filename      # cat for filenames having spaces
cat -n alpha                        # cat + display line numbers

chmod 755 file1                     # changes file permissions to chmod-code 755 

htop                                # opens htop (like linux Task Manager, feat CLI)
kill 29846                          # kills the process having process ID (PID) 29846
kill xterm                          # kills the xterm program
killall xterm                       # kills all instances of xterm
xkill                               # change mouse pointer to an X, which can kill a process (only once) on which it is clicked

ping www.google.com                 # pings google.com (used to check internet connectivity) 

wget http://mirror.rackspace.com/archlinux/iso/2022.02.01/archlinux-2022.02.01-x86_64.iso.torrent
                                    # download the torrent for the archlinux iso from a worldwide mirror

ssh user@computer -p 2220           # connect using ssh at port 2220

tr "n-za-mN-ZA-M" "a-zA-Z"

```

### less
```bash
less readme                         # print the contents of the specified file in a more interactive interface (VIM)
    
    q                                   # quit the interface
    up/down key                         # scroll 1_line_AAT
    b                                   # scroll up 1_page_AAT
    space                               # scroll down 1_page_AAT
    g                                   # go to the start of the file
    G                                   # go to the end of the file
    /green                              # search for 'green' in the file

```

### ls
```bash
ls                                  # list current directory contents
ls /inhere/                         # ls in the sub-directory named 'inhere'
ls -a                               # ls + do not ignore entries starting with .
ls -d                               # ls only for directories
ls -h                               # ls + human-readable file sizes
ls -l                               # ls and show permissions, date-modified, owner, file size, etc.
ls -s                               # ls + print file size in blocks
ls -S                               # ls + sort by descending order of file size
ls -t                               # ls + sort by descending order of time
```

### file
```bash
file thisfile.txt                   # check and show the ACTUAL filetype of the file named thisfile.txt
file *                              # check and show the ACTUAL filetype of all files in the current directory
file ./*                            # check and show the ACTUAL filetype of all files in the current directory
file ./inhere/*                     # check and show the ACTUAL filetype of all files in the 'inhere' directory
```

### find
```bash
find .                                      # list out all files and directories (even nested) in the current directory
find . -type f                              # list out all files (even nested) in the current directory
find . -type d                              # list out all directories (even nested) in the current directory
find . -name "*.txt"                        # list out all files (even nested) having .txt extension, despite their actual file-type in the current directory
find . -name "purple"                       # list out all files (even nested) named 'purple' (CASE_SENSITIVE) in the current directory
find . -name "*purple"                      # list out all files (even nested) having 'purple' at the end of the filename (CASE_SENSITIVE) in the current directory
find . -name "purple*"                      # list out all files (even nested) having 'purple' at the start of the filename (CASE_SENSITIVE) in the current directory
find . -name "*purple*"                     # list out all files (even nested) having 'purple' somewhere in the filename (CASE_SENSITIVE) in the current directory
find . -iname "purple"                      # list out all files (even nested) named 'purple' (CASE_INSENSITIVE) in the current directory
find . -size +1G                            # list out all files (even nested) in the current directory, having size >= 1G
                                            #
                                            # -   b – 512-byte blocks (this is the default if no suffix is used)
                                            # -   c – bytes
                                            # -   w – two-byte words
                                            # -   k – Kilobytes
                                            # -   M – Megabytes
                                            # -   G – Gigabytes
                                            #
find . -size -1K                            # list out all files (even nested) in the current directory, having size <= 1K
find . -size 1M                             # list out all files (even nested) in the current directory, having size = 1M
find . -empty                               # list out all empty files (even nested) in the current directory 
find . -mmin -30                            # list out all files and directories (even nested) in the current directory, which were modified under 30 mins
find . -not -mmin -30                       # list out all files and directories (even nested) in the current directory, which were not modified under 30 mins
find . -size +100M -and -mmin -10           # and operator
find . -size +100M -exec mv '{}' xyz/ ';'   # move all files >=100M to folder named 'xyz'
find . -not -empty -type f -ls              # Display info (like file permissions) for all non-empty FILES in the current directory
find . -user vivek                          # list files and directories created by user vivek
find . -group alpha                         # list files and directories created by group alpha
```

### grep : global regular expression print
```bash
grep "millionth" data.txt                   # search for "millionth" anywhere in the "data.txt" file, and print the respective line
grep -w "millionth" data.txt                # search for exact "millionth" in the "data.txt" file, and print the respective line
grep -i "millionth" data.txt                # search for CASE_INSENSITIVE "millionth" in the "data.txt" file, and print the respective line
grep -n "millionth" data.txt                # search for "millionth" in the "data.txt" file, and print the respective line + line number
```

### sort
```bash
sort data.txt                                # displays the content of the specified file in a sorted way (without modifying the file)
    -f                                       # sort ignoring case
    -n                                       # sort numerically
    -r                                       # sort in reverse order
    -u                                       # sort and display only unique values

```

### uniq
```bash
uniq file.txt                               
```

### wc
```bash
wc alpha                                     # prints out the number of lines, words, bytes, and filename of the specified file
    -l                                       # only number of lines and filename
    -w                                       # only number of words and filename 
    -m                                       # only number of characters and filename 
    -c                                       # only number of bytes and filename 
```

### cut
```bash
cut -b 1,2,5 state.txt                       # extract the specified bytes (1,2,5) from start of each line
cut -b 1-,2-,5- state.txt                    # ignore the specified bytes (1,2,5) from end of each line

```