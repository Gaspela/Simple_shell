Simple shell
Synopsis This is a simple implementation of the functions of the original shell
Description
The simple shell is a program that reads line by line from a file or the terminal line. It then interprets the lines and executes it if the line is a valid command.
Background
A standard simple shell is a built-in C function in stdio.h standard library. It has a return type int and accepts variable arguments.
The available command specifiers are
	chdir 
	execve 
	exit 
	fork 
	free
	getcwd 
	getline
	isatty
	malloc
	perror
	stat
	strtok
	wait
Usage
All the files are to be compiled on Ubuntu 14.04 LTS
Compile your code with: gcc -Wall -Werror -Wextra -pedantic *.c hsh.
Include the "holberton.h" header file on the functions using the simple shell.
Testing 
The shell should work like this in interactive mode:

$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
And also in non-interactive mode:

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

Authors
Samir Millan - Diego Quijano -
License
Holberton School.
