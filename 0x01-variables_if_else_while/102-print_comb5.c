#include <stdio.h>
/**
 * main - print two two digits combinations
 *
 * Return: always 0
 */
int main (void)
{
	int i, j;
	for (i = 0; i < 99; i++)
	{
		for(j = 0; j < 100; j++)
		{
			putchar((i/10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if( j != 99 || i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
