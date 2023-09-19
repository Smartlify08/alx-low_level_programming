#include "main.h"

/**
 * _strcmp - compares two strings and returns integer
 *
 * @s1: represents first string
 * @s2: represents second string
 *
 * Return: s1 - s2 if strings are unequal,
 * return 0 if the are equal.
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;


	}

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}

	else if (*s1 == '\0')
	{
		return (-1);
	}

	else
	{
		return (1);
	}
}
