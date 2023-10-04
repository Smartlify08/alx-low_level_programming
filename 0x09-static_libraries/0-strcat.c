#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: original destination string
*/

char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	for (; *dest; dest++)
	{

	}

	for (; *src; dest++, src++)
	{
		*dest = *src;
	}

	return (original_dest);
}
