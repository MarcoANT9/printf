#include "holberton.h"

/**
 * p_int - Print an integer function
 *
 * @n: Bring the argument.
 *
 * Return: The lenght
 */
int p_int(va_list n)
{
	int h;
	unsigned int cont = 0, g, base = 1;
	int i = 0;

	h = va_arg(n, int);

	if (h < 0)
	{
		_putchar('-');
		h = h * -1;
	}
	g = h;
	while (g != 0)
	{
		g = g / 10;
		cont++;
		base = base * 10;
	}
	g = h;
	base = base / 10;
	while (g != 0)
	{
		_putchar((g / base) + '0');
		g = g % base;
		base = base / 10;
		i++;
		if (base == 1)
		{
			_putchar((g % 10) + '0');
			break;
		}
	}
	return (i);

}
