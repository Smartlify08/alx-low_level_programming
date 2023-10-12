#include <stdlib.h>
#include <stdio.h>
#include "main.h"


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

	for (i = 0; i < j; i++)
	{
		ptr[i] = min + i;
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
