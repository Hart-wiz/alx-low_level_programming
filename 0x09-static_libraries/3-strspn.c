#include "main.h"


/**
 * _strspn - this function gets the length of prefix substring
 *
 * @s: is the pointer
 * @accept: accepted
 *
 * Return: returns length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	for (; *s != '\0'; s++)
	{
		int found = 0;
		int i;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;

				break;
			}
		}
		if (found == 0)
		{
			break;
		}
		length++;
	}
	return (length);
}

