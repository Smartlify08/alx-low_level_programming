#include "main.h"

/**
 * print_triangle - prints triangle based on input
 *
 * @size: represents size of triangle
 *
 */

void print_triangle(int size)
{
	int i;

	int j;

	int k;


	for (i = 0; i < size; i++)
	{
		for (k = size - 1; k > i; k--)
		{
			_putchar(' ');
		}
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}

	if (i <= 0)
	{
		_putchar('\n');
	}

}
