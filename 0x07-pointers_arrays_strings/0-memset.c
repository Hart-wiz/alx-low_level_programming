#include "main.h"



/**
 * _memset - this is function fills memory with a constant byte
 *
 * @s: is pointer of the mem to be filled
 * @b: constant byte that fills the mem pointed to by s
 * @n: size of mem nbyte
 * Return: return s
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
