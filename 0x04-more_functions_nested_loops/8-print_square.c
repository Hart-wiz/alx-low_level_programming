#include "main.h"


/**
 * print_square - this function prints squares using #
 *
 * @size: is the sixe of the square the function prints
 */

void print_square(int size)
{
	int col;
	int row;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (col = 0; col < size; col++)
	{
		for (row = 0; row < size; row++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
