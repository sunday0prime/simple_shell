# ALX Simple Shell Team Project
_____

>This is an ALX collaboration project on Shell. We were tasked to 
>create a simple shell that mimics the Bash shell.

## Project was completed using
-----

	- C programming language
	- Shell
	- Betty as linter

## General Requirements for Project
-----

	- All files will be compiled on Ubuton 20.04 LTS using gcc.
	- All files should end with a new line
	- A README.md file, at the root of the directory of the project is required.
	- Coding style should follow Betty style.
	- Shell should not have any memory leaks.
	- No more than 5 functions per file.
	- All header files included should be guarded.
	- Write a README with the description of the project

### Description
-----

hsh is a simple UNIX command terminal that reads commands from either a file or standard input and executes them. It does not implement all standard library functions except these:
	- ``access`` (man 2 access)
	- ``chdir`` (man 2 chdir)
	- ``close`` (man 2 close)
	- ``closedir`` (man 3 closedir)
	- ``execve`` (man 3 execve)
	- ``exit`` (man 3 exit)
	- ``_exit`` (man 2 _exit)
	- ``fflush`` (man 3 fflush)
	- ``fork`` (man 2 fork)
	- ``free`` (man 3 free)
	- ``getcwd`` (man 3 getcwd)
	- ``getline, getpid, isatty, kill, malloc, open, opendir, peror, read, readdir, signal, stat, lstat, fstat, strtok, wait, waitpid, wait3, wait4, write``


### Invocation
-----

Use: hsh [filename]
To invoke hsh, compile all .c files in the repository and run the resulting executable.

**hsh** can be invoked both interactively and non-interactively. if **hsh** is invoked with standard input not connected to a terminal, it reads and executes received commands in order.

Example

``
$ echo "echo 'hello'" | ./hsh
 'hello'
$
``

### Environment
Upon invocation, **hsh** receives and copies the environment of the parent process in which it was executed. This environmnet is an array of name-value strings describing varaibles in the format **NAME=VALUE**. A few key environmental varaibles are:

#### HOME

The home directory of the current user

``
$ echo "echo $HOME" | ./hsh
  /home/projects
``

#### PWD
The current working directory as set by the **cd** command.

``
$ echo "echo $PWD" | ./hsh
  /home/projects/alx/simple_shell
``

[Read more here](https://github.com/yonasleykun27/simple_shell/master/README.md)

