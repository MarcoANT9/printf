#include "holberton.h"
/**
 * p_porcentaje - print the porcentaje.
 *
 * @n: bring the argument
 *
 * Return: The i position.
 */

int p_porcentaje(va_list n)
{
	int i = 0;
	char h = va_arg(n, int);

	_putchar(h);
	return (i + 1);
}
