#include "main.h"
#include <stdlib.h>


/**
 * create_array - creates an array of char and
 *		initializes it with a specific char
 *
 * @size: size of array to be initiated.
 * @c: this is the specific char to initialize the array with
 * Return: NULL or pointer to the array
 */


char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}

