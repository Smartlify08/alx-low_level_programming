#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print times table of specified number
 *
 * @n: represents number to be printed to.
 *
 * Return: none void function
 */
void print_times_table(int n)
{
	int number;
	for (number = 0; number <= n; number++)
	{
		int count;

		if (n > 15 || n < 0)
		{
			break;
		}
		for (count = 0; count <= n; count++)
		{
			int result = (number * count);

			if (result >= 10 && !(result > 99))
			{
				printf(",  ");
			}
			if (result < 10 && count != 0)
			{
				printf(",   ");
			}
			if (result > 99 && count != 0)
			{
				printf(", ");
			}
			printf("%d", result);
		}
		printf("\n");
	}
}
