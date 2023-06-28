#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;
	int len = strlen(src);

	for (index = 0; index < len; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
