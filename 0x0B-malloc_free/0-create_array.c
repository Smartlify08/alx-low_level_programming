#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of array
 * @c: character to initialize with
 * Return: NULL , s
**/

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *s;

	s = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		if (s == NULL)
		{
			return (NULL);
		}

		s[i] = c;
	}

	return (s);
}
