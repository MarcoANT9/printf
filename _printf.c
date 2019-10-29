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
	int i = 0, j, cont = 0, h;
	int (*oper)(va_list);

	char *format_list = "csid";

	va_list arg_list;

	va_start(arg_list, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			h = 0;
			while (j < 5)
			{
				if (format[i] == format_list[j])
				{
					oper = get_pf(format_list[j]);
					cont = cont + oper(arg_list);
					i++;
					h++;
				}
				j++;
			}
			if (h == 0 || format[i - 1] == '%')
				_putchar('%');
		}
		if (format[i] != '\0')
			_putchar(format[i]);
		else
			break;
		i++;
	}
	cont = cont + (i - 1);
	return (cont);
}
