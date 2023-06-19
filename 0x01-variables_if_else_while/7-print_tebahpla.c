#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: returns 0
 */

int main(void)
{
	char y;

	for (y = 'z'; y >= 'a'; y--)
		putchar(y);
	putchar('\n');
	return (0);
}
