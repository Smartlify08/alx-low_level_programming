#include "main.h"
/**
 * print_diagonal - print forward slashes based on
 * input
 *
 * @n: represents number of times slash is printed
 *
 * Return: no return void function
 *
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}


	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		
		_putchar('\\');
		_putchar('\n');
	}
}
