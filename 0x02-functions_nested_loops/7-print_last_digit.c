#include "main.h"

/**
 * print_last_digit - this function prints last digit
 *
 * @n: this is the number
 * Return: returns last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		return ((n % 10) * -1);
	}
	else if (n > 0)
	{
		return (n % 10);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}
