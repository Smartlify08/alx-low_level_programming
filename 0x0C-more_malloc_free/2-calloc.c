#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n = nmemb;
	unsigned int s = size;
	void *ptr;
	(void) n;
	(void) s;

	ptr = malloc(n * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
