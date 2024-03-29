#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - duplicate string and return pointer to memory space
 * @str: string
 * Return: NULL , duplicateStr
**/

char *_strdup(char *str)
{
	int len, i;

	char *duplicateStr;

	len = 0;
	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len]; len++)
	{

	}

	duplicateStr = malloc(len + 1);

	if (duplicateStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		duplicateStr[i] = str[i];
	}

	duplicateStr[len] = '\0';

	return (duplicateStr);
}
