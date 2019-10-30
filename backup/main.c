#include "holberton.h"

#include <stdio.h>

#include <limits.h>



int main(void)
{
	printf("1. Max int %d\n", 2147483647);
	_printf("1. Max int %d\n", 2147483647);

	printf("2. Min int %d\n", -2147483648);
	_printf("2. Min int %d\n", -2147483648);

	printf("3. One digit %d\n", 7);
	_printf("3. One digit %d\n", 7);

	printf("4. Negative %d\n", -447);
	_printf("4. Negative %d\n", -447);

	printf("5. Zero %d\n", 0);
	_printf("5. Zero %d\n", 0);

	printf("6. Positive %d\n", 647);
	_printf("6. Positive %d\n",647);


return (0);
}
