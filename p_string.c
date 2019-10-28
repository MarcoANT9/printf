#include "holberton.h"
/**
 * p_string - Print a string.
 *
 * @i: int type
 * @n: Bring the argument
 * Return: the i position.
 */
int p_string(va_list n, int i)
{
	char *j;

	j = n;
	for (i = 0 ; j[i] != '\0' ; i++)
		_putchar(j[i]);
	return (i);
}
