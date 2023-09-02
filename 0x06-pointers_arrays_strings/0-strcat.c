#include "main.h"
#include <stdio.h>

char *_strcat(char *dest, char *src)
{
	int i;
	char *storeDest = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
		storeDest++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		*storeDest = *src;
		storeDest++;
		src++;
	}

	*storeDest = '\0';
	return (storeDest);
}
