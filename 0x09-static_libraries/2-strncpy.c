#include "main.h"

/**
 * _strncpy - copy content of a string to another
 * @dest: destination string
 * @src: source string
 * @n: limit
 * Return: original destination string
 */


char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	for (; *src && n > 0;)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	for (; n > 0;)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (original_dest);
}
