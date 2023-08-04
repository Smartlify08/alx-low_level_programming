#include "main.h"
/**
 * print_line - print line based on input
 *
 * @n: represents how many times line should be
 * printed
 *
 * Return: no return void function
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
