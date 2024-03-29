#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: reverse limit
 */

void reverse_array(int *a, int n)
{
	int start;

	int end;

	int *length = &n;

	start = 0;
	end = *length - 1;

	for (; start < end;)
	{
		int storeStart = a[start];

		a[start] = a[end];
		a[end] = storeStart;

		start++;
		end--;
	}
}
