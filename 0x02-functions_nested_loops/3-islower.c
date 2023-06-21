#include "main.h"





/**
 * _islower - this function checks for lowercase
 *
 * @c: this is the character to check
 * Return: returns 0 and 1
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	return (0);
}
