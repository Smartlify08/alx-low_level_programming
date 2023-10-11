#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size of memory
 * Return: alloc (success)
 **/

void *malloc_checked(unsigned int b)
{
	int *alloc = malloc(b);

	if (alloc == NULL)
	{
		exit(98);
	}

	return (alloc);
}
