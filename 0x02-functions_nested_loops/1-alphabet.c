#include "main.h"

/**
 * print_alphabet - this funtion prints the alphabets
 *
 * Return: returns 0
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}