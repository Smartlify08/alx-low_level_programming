#include "main.h"
/**
 * print_most_numbers - print numbers from 0-9
 * apart from 2 and 4
 *
 * Return: void function no return
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
