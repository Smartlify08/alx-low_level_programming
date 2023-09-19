#include "main.h"

/**
 * reverse_array - prints the reverse of an array
 *
 * @a: represents the array
 * @n: represents the number of the array
 *
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
