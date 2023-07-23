#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - main fuction of the variadic function
 *
 * @n: count of the bumbers to sum
 *
 * Return: returns 0 and result
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;
	va_list mynumbers;

	va_start(mynumbers, n);
	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		result = result + va_arg(mynumbers, int);
	}

	va_end(mynumbers);

	return (result);
}
