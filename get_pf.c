#include "holberton.h"

/**
 * get_pf - Get the functions to print according to format.
 *
 * @spec: Specifier to use.
 *
 *
 * Return: Number of spaces used in printing.
 */

int (*get_pf(char *spec))(valist, int)
{
	func p_functions {

		{"c", p_char},
		{"s", p_string},
		{"%", p_porcentaje},
		{"d", p_int},
		{"i", p_int},
		{NULL, NULL}
	};

	int j = 0;

	while (j < 5)
	{
		if (strcmp(spec, p_functions[j].format) == 0)
			return (p_functions[j].f);


		j++;
	}

	return (NULL);

}
