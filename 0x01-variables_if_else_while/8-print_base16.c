#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: returns 0
 */

int main(void)
{
	int x;
	char a;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
