#include "main.h"
#include <stddef.h>



/**
 * _strpbrk - searches a string for any set of bytes
 *
 * @s: is the pointer
 * @accept: is the string
 * Return: rs
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
