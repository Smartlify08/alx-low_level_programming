#include "main.h"
#include <stdio.h>
/**
 * main - print sum of multiples of 3 and 5
 *        between 0 and 1024
 *
 * Return: 0(success)
 */
int main(void)
{
	int n;	

	int sum = 0;
	
	for ( n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0 || n % 5 == 0) && n != 0)
		{
			sum = sum + n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
