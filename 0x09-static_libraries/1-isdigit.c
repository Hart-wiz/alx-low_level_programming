#include "main.h"

/**
 * _isdigit - this function checks for digits 0 to 9
 *
 * @c: is the character to be checked
 * Return: returns 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
