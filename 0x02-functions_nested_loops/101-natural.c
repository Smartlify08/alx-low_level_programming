#include "main.h"
#include <stdio.h>
/**
 * print_multiples - print sum of multiples of 3 and 5
 *
 * Return: void function no return
 */
void print_multiples(void)
{
	int sum = 0;
	int n;
	for(n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0 || n % 5 == 0) && n != 0)
		{
			sum = sum + n;
		}

	}	
	printf("%d\n", sum);
}
