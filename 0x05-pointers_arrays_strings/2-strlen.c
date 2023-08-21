#include "main.h"
#include <stdio.h>

/**
 * _strlen - print the length of a string
 *
 * @s: represents string
 *
 * Return: i length of string
 */

int _strlen(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}
	return (i);
}
