#include <stdio.h>
#include "main.h"

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}

