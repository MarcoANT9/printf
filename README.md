# _printf

Synopsis
This is a simple implementation of printf function

# Description

_printf function writes an output according to a format and it prints character, string, float, integer, hexadecimal, octal, decimal values onto the output screen. Printf is a special function because it receives a variable number of arguments. The symbol % denotes he beginning of a format mark. With the next characters have a special meaning

## Background
A standard printf is a built-in C function in stdio.h standard library. It has a return type int and accepts variable arguments.

The available convertion specifiers are:

* %c: Prints a single character.
* %s: Prints a string of characters.
* %d: Prints integers.
* %i: Prints integers.

## Usage
All the files are to be compiled on Ubuntu 14.04 LTS
Compile your code with gcc -Wall -Werror -Wextra -pedantic *.c
Include the "holberton.h" header file on the functions using the _printf()

Example

#include "holberton.h"

int main(void)
{
	int i = 7;
	int j = 30;

	printf("We start class at %i:%i", i, j);
	return (0);
}

Output
We start class at 7:30

# Authors
Marco Niño - 
Diego Quijano - 

# License
Holberton School
