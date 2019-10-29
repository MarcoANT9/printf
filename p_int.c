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
	int h, i = 0;
	unsigned int cont = 0, g, f, base = 1;

	h = va_arg(n, int);
	if (h < 0)
	{
		_putchar('-');
		g = h * -1;
	}
	else
		g = h;
	if (g < 10)
	{
		_putchar(g + '0');
		i++;
	}
	else
	{
		f = g;
		while (f != 0)
		{
			f = f / 10;
			cont++;
			base = base * 10;
		}
/**		base = base / 10; */
		while (g != 0)
		{
			_putchar((g / base) + '0');
			g = g % base;
			base = base / 10;
			if (base == 1)
			{
				_putchar(g + '0');
				break;
			}
		}
		i = cont;
	}
	return (i);
}
