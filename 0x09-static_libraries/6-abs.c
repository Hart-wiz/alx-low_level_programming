#include "main.h"

/**
 * _abs - this function gives the absolute value of  number
 *
 * @n: this is the number to be absolute
 * Return: returns n or 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
	_putchar('\n');
}
