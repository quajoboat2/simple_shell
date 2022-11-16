# Project 0x16 - simple_shell
## Simple Shell (C milestone project)
- would be updated fater adding man

* This is an individual project made by Adu Boateng Richard, Student of software engineering at ALX Africa. This repo contains files for the **simple_shell project**. The project requires us to develop our own UNIX command interpreter (shell).

## File structure

These are the files with custom system calls and functions with a brief description.

|  ***file***  | ***Description***     |
|-------------|------------------------|
| ['.simple_shell_history'](./.simple_shell_history) |   |
| ['AUTHORS'](./AUTHORS) | The list of contributors |
| ['README.md'](./README.md) | Readme.md file |
| ['strtok.c'](./_strtok.c) |   |
| ['built-in.c'](./built-in.c) | File containing builtins |
| ['char_fun.c'](./char_fun.c) |   |
| ['parsing.c'](./parsing.c) | File containing functions to help with string manipulation |
| ['helpers.c'](./helpers.c) |   |
| ['execute.c'](./execute.c) |   |
| ['execute_file.c'](./execute_file.c) |   |
| ['finding_path.c'](./finding_path.c) |   |
| ['get_line.c'](./get_line.c) |   |
| ['history.c'](./history.c) |   |
| ['hsh'](./hsh) |   |
| ['main.c'](./main.h) | Main File to execute |
| ['main.h'](./main.c) | Header file with prototypes |
| ['memmory_management.c'](./memmory_management.c) |   |
| ['more_bul.c'](./more_bul.c) |   |
| ['more_char_fun.c'](./more_char_fun.c) |   |
| ['more_fun.c'](./more_fun.c) |   |
| ['output.c'](./output.c) |   |
| ['parsing.c'](./parsing.c) |   |
| ['printer.c'](./printer.c) |   |
| ['prompetfun.c'](./prompetfun.c) |   |

## Requirements
This simple_shell project is designed to run on the Ubuntu 20.04 LTS using gcc, and can be compiled using the options -wall - werror -wextra -pedantic -std=gnu89
The code should use the [Betty style](https://github.com/holbertonschool/Betty).

## Features
* Display a prompt and wait for the user to type a command.
* If an executable cannot be found, print an error message and display the prompt again.
* Handle errors
* Hand the EOF(Ctrl + D) condition.
* Handle the Ctrl +C to not terminate the shell.
* Handle th command line with arguments.
* Handle the PATH.
* Support the exit features.

## Builtins
* exit 'terminates the shell'
* env 'display the environment'

## Authors
* **Adu Boateng Richard

