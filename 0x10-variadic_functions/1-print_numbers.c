#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>


/**
 * print_numbers - is the va funtion to print numbers
 *
 * @separator: is the pointer to string inbetween the nums printed
 * @n: count of nums to print
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numprints;

	va_start(numprints, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numprints, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(numprints);

	printf("\n");
}
