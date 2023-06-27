#include "main.h"


/**
 * swap_int - this function swaps numbers
 *
 * @a: is one of the numbers
 * @b: is the other number
 *
 */

void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;
	*b = p;
}
