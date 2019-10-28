#inlcude "holberton.h"

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
	int i = 0;
	int (*oper)(int, valist);

	char format_list[] = {"c", "s", "%", "d", "i"};

	va_list = arg_list;

	va_start(arg_list, format);

	while (format != NULL && *(format + i) != '\0')
	{
		if (*(format + i) == '%')
		{
			i++;
			j = 0;
			while (j < 5)
			{
				if (*(format + i) == format_list[j])
				{
					oper = get_pf(format_list[j]);
					i = oper(valist, i);
				}
				j++;
			}
		}
		if (*(format + i) != '\0')
			_putchar(*(format + i));
		else
			break;
		i++;
	}
	return (i - 1);
}
