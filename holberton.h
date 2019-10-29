#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct functions - Call the functions to print.
 *
 * @format: Specifies the format to print.
 * @f: Specifes the function to use.
 *
 */

typedef struct functions
{
	char format;

	int (*f)(va_list);

} func;

/** Function used to get other print functions */
int (*get_pf(char))(va_list);

/** Functions used to print each case */
int p_char(va_list);
int p_string(va_list);
int p_int(va_list);
int p_porcentaje(va_list);

/** Write */
int _putchar(char c);


/** Printf */
int _printf(const char *format, ...);


#endif
