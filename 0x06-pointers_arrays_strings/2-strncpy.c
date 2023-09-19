#include "main.h"

/**
 * _strncpy - copies a string to another, with limit
 *
 * @dest: represents destination string
 * @src: represents source string
 * @n: represents limit
 *
 * Return: storeDest to return the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *storeDest = dest;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (storeDest);
}
