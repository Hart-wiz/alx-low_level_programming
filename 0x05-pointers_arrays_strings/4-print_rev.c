#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - this function prints strings in reverse
 *
 * @s: is the string pointer
 */


void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
