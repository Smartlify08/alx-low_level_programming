#include <stdio.h>
/**
 * main - print two two digits combinations
 *
 * Return: always 0
 */
int main (void)
{
	int a, b, c, d;
	for (a = 48; a <= 57; a++)
	{
		for(b = 48; b <= 57; b++)
		{
			for ( c = 49; c <= 57; c++)
			{
				for ( d= 49; d <= 57; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');

					putchar(c);
					putchar(d);
					putchar(',');
					putchar(' ');
					
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
