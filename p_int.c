#include "holberton.h"

/**
 * p_int - Print an integer and decimal function.
 *
 * @n: Bring the argument.
 *
 * Return: The lenght
 */
int p_int(va_list n)
{
	unsigned int c = 0, g, f, i = 0;
	unsigned long int b = 1;

	int h = va_arg(n, int);

	if (h == 0)
	{
		_putchar('0');
		i++;
		return (i);
	}

	if (h < 0)
	{
		_putchar('-');
		g = h * -1;
	}
	else
		g = h;

	f = g; /** Temp var */
	while (g != 0)
	{
		g = g / 10;
		c = c + 1; /** Digit Counter */
		b = b * 10; /** Base for divisions */
	}
	i = c; /** Return Value */
	b = b / 10;
	while (c != 0)
	{
		_putchar((f / b) + '0');
		f = f % b;
		b = b / 10;
		c = c - 1;
	}
	if (h < 0)
		i++;
	return (i);
}
