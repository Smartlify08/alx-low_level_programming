#include "main.h"
#include <stdio.h>
void print_rev(char *s)
{

	int i;
	int length;

	for (i = 0; s[i]; i++)
	{
		length = i;
	}

	for (i = length;i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
