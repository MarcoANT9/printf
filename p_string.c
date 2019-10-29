#include "holberton.h"
/**
 * p_string - Print a string.
 *
 * @n: Bring the argument.
 *
 * Return: the i position.
 */
int p_string(va_list n)
{
	int i = 0;

	char *h = va_arg(n, char *);

	for (i = 0 ; h[i] != '\0' ; i++)
		_putchar(h[i]);


	return (i - 1);
}
