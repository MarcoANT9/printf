#include "holberton.h"

/**
 * _printf - Prints a string to the standar output.
 *
 * @format: Text to print.
 *
 * Desccription -
 *
 *
 *
 *
 *
 * Return: Number of printed characters.
 */

int _printf(const char *format, ...)
{
	int i = 0, j, cont = 0, h = 0;
	int (*oper)(va_list);
	char *format_list = "cs%id";
	va_list arg_list;

	va_start(arg_list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			/*i++;*/
			j = 0;
			h = 0;
			while (j < 5)
			{
				if (format[i + 1] == format_list[j] && h == 0)
				{
					oper = get_pf(format_list[j]);
					cont = cont + oper(arg_list);
					h++;
					i = i + 1;
					break;
				}
				else
				{
					if (j + 1 == 5)
						_putchar(format[i]);
				}
				j++;
			}
		}
		else
			_putchar(format[i]);

		i++;
	}
	va_end(arg_list);
	cont = cont + i - 2;

	return (cont);
}
