#include "main.h"

/**
 * is_prime_number - this function returns prime numbers
 *
 * @n: input interger
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (0);
	}

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
