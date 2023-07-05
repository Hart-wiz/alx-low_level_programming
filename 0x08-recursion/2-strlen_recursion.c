#include "main.h"

/**
 * _strlen_recursion - function returns the length of string
 *
 * @s: pointer of string
 * Return: returns an int length
 */


int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
