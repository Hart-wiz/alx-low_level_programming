#include "main.h"


/**
 * print_triangle - this function prints triangle
 *
 * @size: is the size of the triangle
 */

void print_triangle(int size)
{
	int col;
	int space;
	int hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (col = 0; col < size; col++)
	{
		for (space = size - col; space > 0; space--)
		{
			_putchar(' ');
		}
		for (hash = 0; hash < col ; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
