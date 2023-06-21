#include "main.h"

/**
 * print_last_digit - this function prints last digit
 *
 * @n: this is the number
 * Return: returns last digit
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n *= -1;
	}
	last = n % 10;
	_putchar('0' + last);
	return (last);
}
