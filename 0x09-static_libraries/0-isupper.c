#include <stdio.h>
#include "main.h"

/**
 * _isupper - this function checks for uppercase
 *
 * @c: this is the character to check
 * Return: returns 0 or 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
