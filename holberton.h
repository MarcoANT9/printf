#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>


/**
 * struct functions - Call the functions to print.
 *
 * @format: Specifies the format to print.
 * @f: Specifes the function to use.
 *
 */

typedef struct functions
{
	char *format;

	void (*f)(char *s);


} func;

/** Putchar function */
int _putchar(char c);


/** Function used to get other print functions */
int get_pf(int, char *, va_list);

/** Functions used to print each case */




#endif
