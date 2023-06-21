#include "main.h"

/**
 * _isalpha - this function checks for alphabets
 *
 * @c: is the character to check
 * Return: returns 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 65) && (c <= 122))
	{
		return (1);
	}
	return (0);
}
