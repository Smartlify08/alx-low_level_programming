#include <stdlib.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
	int *alloc = malloc(b);

	if (alloc == NULL)
	{
		exit(98);
	}

	return (alloc);
}
