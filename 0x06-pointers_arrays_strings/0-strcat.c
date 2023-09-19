#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate two strings
 *
 * @dest: represents destination string
 * @src: represents source string
 *
 * Return: storeDest to return destination string
 */

char *_strcat(char *dest, char *src)
{
	char *storeDest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (storeDest);
}
