#include "holberton.h"
/**
 * p_char - print a character.
 *
 * @n: Bring the argument.
 *
 * Return: the i position.
 */
int p_char(va_list n)
{
	int i = 0;

	char h = va_arg(n, int);

	_putchar(h);
	return (i + 1);
}
