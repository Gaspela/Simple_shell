# Simple shell

![AppVeyor tests](https://img.shields.io/appveyor/tests/NZSmartie/coap-net-iu0to.svg?passed_label=good&failed_label=bad&skipped_label=n%2Fa)

Synopsis This is a simple implementation of the functions of the original shell

## Getting Started

All the files are to be compiled on Ubuntu 14.04 LTS Compile your code with: gcc -Wall -Werror -Wextra -pedantic *.c hsh. Include the "shell.h" header file on the functions using the simple shell.

## Requirements

### General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 14.04 LTS
Your C programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
No more than 5 functions per file
All your header files should be include guarded
Use system calls only when you need to

### Output
Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.
The only difference is when you print an error, the name of the program must be equivalent to your argv[0] (See below)
Example of error with sh:

```
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```
Same error with your program hsh:

```
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```

The available command specifiers are
*	chdir 
*	execve 
*	exit 
*	fork 
*	free
*	getcwd 
*	getline
*	isatty
*	malloc
*	perror
*	stat
*	strtok
*	wait

## USAGE

```bash
$ ls
_add_array.c  _create_array.c    _getenvironment.c  man_1_simple_shell  README.md  _strcmp.c
AUTHORS       _display_number.c  _helper_printf.c   pathname.c          shell.c    _strlen.c
```
```
$ pwd
/home/vagrant/simple_shell
```

## FLOWCHART

### FLOWSHELL

![Logo FLOWSHELL](/flowchart/diagram_shell_1.jpg)

### FLOWPARCH

![Logo FLOWPARCH](/flowchart/diagram_parent_childs.jpg)
<p align="center">
  </flowchart/diagram_parent_child.jpg>

## Running the tests

The shell should work like this in interactive mode:

```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
And also in non-interactive mode:

```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```
## Authors

Samir Millan - Diego Quijano

## License

MIT License Copyright (c) [2019] [Samir Millan - Diego Quijano]

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions: The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
