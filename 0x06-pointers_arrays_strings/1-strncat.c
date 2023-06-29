#include "main.h"
#include <string.h>
#include <stdio.h>


/**
 * _strncat - this function appends src to dest
 *
 * @src: source file
 * @dest: destination file
 * @n: n byte size
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);

}

