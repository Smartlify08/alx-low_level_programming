#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	for (; *dest; dest++)
	{

	}

	for (; *src && n > 0; src++, dest++, n--)
	{
		*dest = *src;
	}

	*dest = '\0';

	return (original_dest);
}
