#include "main.h"

/**
 * print_alphabet - print alphabets a-z
 *
 * Return: always 0
 */
int  print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
