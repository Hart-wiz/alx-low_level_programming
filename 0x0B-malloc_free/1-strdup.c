#include "main.h"
#include <stddef.h>
#include <stdlib.h>


/**
 * _strdup -ret a pointer to a newly allocated space in memory
 *
 * @str: is string to be copied
 *
 * Return: returns null or pointer to the neewly allocated memory
 */

char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index]; index++)
	{
		len++;
	}
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index]; index++)
	{
		duplicate[index] = str[index];
	}

	duplicate[len] = '\0';
	return (duplicate);
}
