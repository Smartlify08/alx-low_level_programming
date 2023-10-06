#include <stdio.h>
#include <stdlib.h>

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

	for (i = 0; i < len; i++)
	{
		duplicateStr[i] = str[i];
	}

	if (duplicateStr == NULL)
	{
		return (NULL);
	}

	return (duplicateStr);
}
