#include "main.h"

/**
 * _memcpy - this function copies the memory area
 *
 * @dest: is the destination pointer
 * @src: is the source pointer
 * @n: is nbyte/size of memory to be copied
 *
 * Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
