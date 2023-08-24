#include "main.h"

void puts_half(char *str)
{
	int n;
	int length;
	int i;
	length = 0;

	for (i = 0; str [i] != '\0'; i++)
	{
		length = i;
		_putchar(str[i]);
	}


}
