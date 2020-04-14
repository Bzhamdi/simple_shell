# SIMPLE_SHELL

The simple shell is our own basic recreation of the Linux systems shell programs like the sh, bash, zsh between others, that let the user interact with basic commands. The simple shell is a command interpreter that promt you with a user interface to communicate with the operative system.
*****
# Usage
You can try our shell by following these steps:
> **Step 1:** Clone the repository using this command.
````
git clone https://github.com/MatriMariem/simple_shell
````

> **Step 3:** Compile the C files in this way:
````
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
````
> **Step 4:** Run the shell
````
./hsh
````
****
### Output
The program output will be the execution of basic programs found in the PATH in which there is a set of directories where executable programs are located based on the user's input, whether if it was in an interactive or non-interactive mode, to exit just type "exit" after the command promt or press Ctrl + D.
****
### Examples
````
ubunto@ubuntu:~/Bureau/simple_shell$ gcc -Wall -Wextra -Werror -pedantic *.c -o hsh
ubunto@ubuntu:~/Bureau/simple_shell$ ./hsh
#BZ$ echo Hello, World
Hello, World
#BZ$ ls
atoi.c	       environment.c  hsh		  README.md  tokenization.c
AUTHORS        execute.c      man_1_simlpe_shell  shell.c
builtin.c      exit.c	            path.c		  shell.h
concat_all.c   free.c		          prompt.c		  string.c
end_of_file.c  help.c			        _putchar.c	    strtok.c
#BZ$ ^C
#BZ$ ls -l -a
total 112
drwxrwxr-x  3 vagrant vagrant  4096 Apr 13 22:48 .
drwxr-xr-x 13 vagrant vagrant  4096 Apr  9 11:22 ..
-rw-rw-r--  1 vagrant vagrant   497 Apr 13 01:46 atoi.c
-rw-rw-r--  1 vagrant vagrant   180 Apr  5 15:22 AUTHORS
-rw-rw-r--  1 vagrant vagrant   441 Apr 13 21:00 builtin.c
-rw-rw-r--  1 vagrant vagrant   688 Apr 13 02:50 concat_all.c
-rw-rw-r--  1 vagrant vagrant   277 Apr 12 23:51 end_of_file.c
-rw-rw-r--  1 vagrant vagrant   846 Apr 13 00:38 environment.c
-rw-rw-r--  1 vagrant vagrant   473 Apr 13 17:42 execute.c
-rw-rw-r--  1 vagrant vagrant   328 Apr 13 17:46 exit.c
-rw-rw-r--  1 vagrant vagrant   404 Apr 12 23:51 free.c
drwxrwxr-x  8 vagrant vagrant  4096 Apr 13 21:00 .git
-rw-rw-r--  1 vagrant vagrant   763 Apr 13 21:00 help.c
-rwxrwxr-x  1 vagrant vagrant 19176 Apr 13 22:48 hsh
-rwxrwxr-x  1 vagrant vagrant  1443 Apr 12 19:50 man_1_simlpe_shell
-rw-rw-r--  1 vagrant vagrant  1391 Apr 12 23:52 path.c
-rw-rw-r--  1 vagrant vagrant   326 Apr 13 01:02 prompt.c
-rw-rw-r--  1 vagrant vagrant   252 Apr 13 02:28 _putchar.c
-rw-rw-r--  1 vagrant vagrant    12 Apr  5 14:59 README.md
-rw-rw-r--  1 vagrant vagrant   773 Apr 13 02:10 shell.c
-rw-rw-r--  1 vagrant vagrant  1472 Apr 13 21:00 shell.h
-rw-rw-r--  1 vagrant vagrant   833 Apr 13 20:47 string.c
-rw-rw-r--  1 vagrant vagrant  1121 Apr 13 00:58 strtok.c
-rw-rw-r--  1 vagrant vagrant   499 Apr 13 02:51 tokenization.c
#BZ$ pwd
/home/vagrant/simple_shell
#BZ$ exit
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$
````
****

### Files
- ***AUTHORS***
- ***man_1_simple_shell***

- Man page

- **shell.h**

- Header file

- **shell.c**

- main function

- **string.c**

- String manipulation

- ***_putchar.c***

- New putchar

- ***atoi.c***

- New atoi

- ***builtin.c***

- builtin commands

- ***concat_all.c***

- Concat three strings

- ***end_of_file.c***

- handles the End Of File condition

- ***environment.c***

- Environment

- ***execute.c***

- Execute functions

- ***exit.c***

- Exit functions

- ***free.c***

- Free functions

- ***path.c***

- Get the path

- ***prompt.c***

- Print the promt

- ***strtok.c***

- New strtok

- ***tokenization.c***

- Tokenization function

****

### Bugs
No known bugs.
Please report any issues to the authors.
#### Authors
Mahdi Ben Zouitina <ben.zouitina.mahdi97@gmail.com>
Hamdi Bouzouitina <bouzouitina.hamdi@gmail.com>
