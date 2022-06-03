[[OverTheWire-Bandit]] [[Most Popular Linux Commands]]

---
# Tips and Tricks for Linux File Commands
[[Bash Operators]]

### some GK stuff =>
permissions code in linux
![|500](https://i.imgur.com/H0rqPwQ.png)

```bash
# > overwrites the file with the output of the command (it will create that file if it doesn't exist)
date > alpha.txt                            

# >> appends the output of a command to a file (it will create that file if it doesn't exist)
pwd >> alpha.txt
echo "HEY THERE" >> alpha.txt

# >> for multiple files
cat alpha beta gamma delta epsilon >> greek

# | is the pipe symbol, and is used to use output of a command as input for another program
ls -l | sed "s/[aeio]/u/g"                    # replaces "a,e,i,o" letters in the output of ls -l with "u" 
ls -l | sed "s/[aeio]/u/g" | grep drwx        # after replacing, it filters out only the files having rwx permissions for owner









```
