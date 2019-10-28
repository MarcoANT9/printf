#include "holberton.h"
/**
 * p_char - print a character.
 *
 * @i: int type.
 * @n: Bring the argument.
 *
 * Return: the i position.
 */
int p_char(va_list n, int i)
{
	_putchar(n);
	return (i + 1);
}
