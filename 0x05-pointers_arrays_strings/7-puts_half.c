#include "main.h"

void puts_half(char *str)
{

	int i;
	int length;
	length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length = i;
	}
	


	if (length % 2 != 0 && length != 0)

	{
		for (i = ((length - 1) / 2) + 1; i <= length; i++)
		{
			_putchar(str[i]);
		}

	}
	

	for (i = (length / 2) + 1; i <= length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');


}
