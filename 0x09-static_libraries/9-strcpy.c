#include "main.h"
#include <stdio.h>


/**
 * _strcpy - copies the source string to it's destination
 *
 * @dest: represents the destination where the string
 * will be copied
 *
 * @src: represents the source string
 *
 * Return: dest (destination of the string is returned)
 *
 */


char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
