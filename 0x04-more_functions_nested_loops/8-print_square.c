#include "main.h"
/**
 * print_square - prints squares based on input
 *
 * @size: represents size of square
 *
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
}

