#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates the first occurrence of the character c in *s
 *
 * @s: is the pointer to the string
 * @c: is the char c to be located
 * Return: returns s or NULL
 */

#include <stdio.h>

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
