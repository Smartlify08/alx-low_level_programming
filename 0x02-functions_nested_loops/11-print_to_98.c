#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from a specific number to 98
 *
 * @n: represents number to be printed from
 *
 * Return - none(void function)
 */
void print_to_98(int n)
{
	int placeholder, increment;

	increment = (n < 98) ? 1 : -1;
	for (placeholder = n;
			placeholder <= 98
			||
			placeholder > 98;
			placeholder += increment)
	{
	if (placeholder != 98)
		{
			printf("%d, ", placeholder);
		}
		if (placeholder == 98)
		{
			printf("%d\n", placeholder);
			break;
		}
	}
}

