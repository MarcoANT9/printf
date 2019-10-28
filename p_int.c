#include "holberton.h"

/**
 * p_int - Print an integer function
 *
 * @n: Bring the argument.
 * @i: Int type.
 *
 * Return: The lenght
 */
int p_int(va_list n, int i)
{
	int div;
	int len;
	unsigned int num;

	i = va_arg(n, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = i * -1;
	}
	else
		num = i;
	for (; num / div > 9; )
		div *= 10;
	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
