#include "holberton.h"

#include <stdio.h>

#include <limits.h>



int main(void)
{
	char *str = "hello, world";
	char c = 'z';
	int alen, elen;

	/** NULL */
	printf(NULL);

	_printf(NULL);
	printf("START OF TEST\n");


	/** char */

	_printf("=====================\n");
	_printf("*****CHAR*****\n");
	_printf("=====================\n");

	_printf("1000: %d\n", 1000);

	printf("1.Expected   : %cAAA\n", 'a');
	_printf("1.Actual     : %cAAA\n", 'a');

	elen = printf("2.Expected   : %c\n", c);
	alen = _printf("2.Actual     : %c\n", c);

	printf("3.Expected   : %i\n", elen);
	_printf("3.Actual     : %i\n", alen);

	printf("N.Expected   : %i\n", 1234);
	_printf("N.Actual     : %i\n", 1234);

	elen = printf(NULL);
	alen = _printf(NULL);

	printf("4.Expected   : %i\n", elen);
	_printf("4.Actual     : %i\n", alen);

	printf("5.Expected   : %cc\n", 'a');
	_printf("5.Actual     : %cc\n", 'a');

	printf("6.Expected   : %yd\n");
	_printf("6.Actual     : %yd\n");

	printf("7.Expected   : %c\n", 53);
	_printf("7.Actual     : %c\n", 53);

	printf("8.Expected   : %c\n", '\0');
	_printf("8.Actual     : %c\n", '\0');

	printf("9.Expected   : %%%c\n", 'y');
	_printf("9.Actual     : %%%c\n", 'y');

	/** strings */
	printf("=====================\n");
	printf("*****STRINGS*****\n");
	printf("=====================\n");


	alen = elen = 0;

	printf("10.Expected   : %s\n", "holberton");
	_printf("10.Actual     : %s\n", "holberton");

	printf("11.Expected   : %s$\n", "");
	_printf("11.Actual     : %s$\n", "");

	elen = printf("12.Expected   : %s\n", str);
	alen = _printf("12.Actual     : %s\n", str);

	printf("13.Expected   : %s$\n", NULL);
	_printf("13.Actual     : %s$\n", NULL);

	printf("14.Expected   : %i\n", elen);
	_printf("14.Actual     : %i\n", alen);

	printf("15.Expected   : %sschool\n", "holberton");
	_printf("15.Actual     : %sschool\n", "holberton");



	/** %% */
	alen = elen = 0;

	printf("=====================\n");
	printf("*****PERCENT*****\n");
	printf("=====================\n");

	elen = printf("16.Expected   : %%\n");
	alen = _printf("16.Actual     : %%\n");

	printf("17.Expected   : %i\n", alen);
	_printf("17.Actual     : %i\n", elen);

	elen = printf("18.Expected   : %%%%\n");
	alen = _printf("18.Actual     : %%%%\n");

	printf("19.Expected   : %i\n", elen);
	_printf("19.Actual     : %i\n", alen);

	printf("20.Expected   :");
	printf("%");
	printf("\n");
	_printf("20.Actual     :");
	_printf("%");
	_printf("\n");


return (0);
}
