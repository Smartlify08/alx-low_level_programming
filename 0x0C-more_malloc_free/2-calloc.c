#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory based on members and size
 * @nmemb: Number of elements
 * @size: size of each element
 * Return: pointer to memory
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n = nmemb;
	unsigned int s = size;
	void *ptr;
	(void) n;
	(void) s;

	if (n == 0 || s == 0)
		return (NULL);

	ptr = malloc(n * s);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, n * size);

	return (ptr);
}
