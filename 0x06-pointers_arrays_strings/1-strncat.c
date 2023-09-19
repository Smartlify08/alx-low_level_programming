#include "main.h"


/**
 * _strncat - concatenates two strings with limit
 *
 * @dest: represents destination string
 * @src: represents source string
 * @n: represents limit of copied string
 * also the max buffer size
 *
 * Return: storeDest to return the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *storeDest = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (storeDest);

}
