#include "holberton.h"

/**
 * get_pf - Get the functions to print according to format.
 *
 * @spec: Specifier to use.
 *
 *
 * Return: Number of spaces used in printing.
 */

int (*get_pf(char spec))(va_list)
{

	int j = 0;

	func p_functions[] = {

		{'c', p_char},
		{'s', p_string},
		{'%', p_porcentaje},
		{'d', p_int},
		{'i', p_int},
		{'\0', NULL}
	};

	while (j < 5)
	{
		if (spec == p_functions[j].format)
			return (p_functions[j].f);


		j++;
	}

	return (NULL);

}
