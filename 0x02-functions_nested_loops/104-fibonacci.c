#include <stdio.h>
/**
 * main - print first 98 fibonacci numbers
 *
 * Return: always 0 (successful)
 *
 */

int main(void)
{
	long unsigned int a = 1;
	long unsigned int b = 2;
	long unsigned int c;
	long unsigned int i;
	long unsigned int n = 98;
	printf("%lu, %lu", a, b);
	for(i = 2; i < n; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if(1 < n - 1)
		{
			printf(", ");
		}
		printf("%lu",b);
	}
	printf("\n");
	return (0);
}
