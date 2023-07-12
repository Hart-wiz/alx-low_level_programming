#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - this function copies strings
 *
 * @src: source file address
 * @dest: destination file pointer/address
 * @n: n byte size of file
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
