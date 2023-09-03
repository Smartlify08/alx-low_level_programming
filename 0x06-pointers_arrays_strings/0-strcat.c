#include "main.h"
#include <stdio.h>

char *_strcat(char *dest, char *src)
{
	char *storeDest = dest;

	/*
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
	*/

	int i;

	for (i = 0; *dest != '\0'; i++)
	{
		dest++;
	}

	for (i = 0; *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (storeDest);
}
