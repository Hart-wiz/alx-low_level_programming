#include "main.h"
#include <stddef.h>

/**
 * _strstr - this function locates a substring
 *
 * @needle: is substring
 * @haystack: isthe string
 * Return: returns haystack or null
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

	while (*n != '\0' && *h == *n)
	{
		h++;
		n++;
	}
	if (*n == '\0')
	{
		return (haystack);
	}

	haystack++;
	}
	return (NULL);
}
