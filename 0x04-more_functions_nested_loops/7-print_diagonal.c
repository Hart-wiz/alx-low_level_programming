#include "main.h"

/**
 * print_diagonal - this function prints diagonal
 *
 * @n: is the number of spaces to the diagonal stroke
 *
 */

void print_diagonal(int n)
{
	int space;
	int line;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (line = 1; line <= n; line++)
	{
		for (space = 0; space < line; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
