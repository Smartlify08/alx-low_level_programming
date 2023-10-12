#include <stdlib.h>
#include <stdio.h>
#include "main.h"


/**
 * array_range - creates a range of array pf integers
 * @min: minimum element of arrays
 * @max: maximum element in array
 * Return: NULL, ptr(success)
**/

int *array_range(int min, int max)
{
	int *ptr, i, j;

	i = 0;
	j = max + 1 - min;


	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(j * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
