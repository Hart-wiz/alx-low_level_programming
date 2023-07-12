#include <stdlib.h>
#include "main.h"
#include "stdio.h"


/**
 * _atoi - this function converts a string to integer
 *
 * @s: is the string to be converted
 * Return: returns 0 if there is no number
 */

int _atoi(char *s)
{
	if (*s <= '9')
	{
		return (atoi(s));
	}
	else if (*s == '-')
	{
		return (atoi(s) * -1);
	}
	else if (*s == '+')
	{
		return (atoi(s) * 1);
	}
	else
	{
		return (0);
	}
}
