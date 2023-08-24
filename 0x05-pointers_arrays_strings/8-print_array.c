#include "main.h"
#include <stdio.h>


/**
 * print_array - print specific amount of array elements
 *
 * @a: represents the array
 * @n: represents the amount of elements
 *
 */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i == n)
		{
			break;
		}

		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}


	}
	printf("\n");
}
