#include "main.h"

/**
 * swap_int - swaps values of two variables
 *
 * @a: represents value to be swapped
 * @b: represents value to be swapped
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
