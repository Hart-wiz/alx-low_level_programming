#include "main.h"

/**
 * print_line - this function prints lines
 *
 * @n: is the number of lines it prints
 * Return: returns void
 */

void print_line(int n)
{
	int start;

	for (start = 0; start < n; start++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
