#include "main.h"

/**
 * print_alphabet_x10 - this function prints alphabets xten
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char x;

	for (i = 0; i <= 9; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
