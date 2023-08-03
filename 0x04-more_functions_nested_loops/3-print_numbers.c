#include "main.h"
/**
 * print_numbers- print numbers from 0 till 9
 *
 * Return: void function no return
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
