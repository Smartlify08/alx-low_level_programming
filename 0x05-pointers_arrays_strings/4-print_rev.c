#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints the reverse of a string
 *
 * @s: represents the string
 *
 */
void print_rev(char *s)
{

	int i;

	int length;

	length = 0;

	for (i = 0; s[i]; i++)
	{
		length = i;
	}

	if (length != 0)
	{

		for (i = length; i >= 0; i--)
		{
			_putchar(s[i]);
		}

	}

	_putchar('\n');

}
