#include <stdio.h>
/**
 * main - print largest prime factor
 *
 * Return: 0(success)
 *
 */

int main(void)
{
	unsigned long int n;
	unsigned long int f;
	unsigned long int g;
	unsigned long int checkPrime;
	unsigned long int largestPrime;

	n = 612852475143;

	for (f = 2; f <= n; f++)
	{
		checkPrime = 1;
		if (n % f == 0)
		{
			for (g = 2; g <= f / 2; g++)
			{
				if (f % g == 0)
				{
					checkPrime = 0;
					break;
				}
			}
			if (checkPrime == 1)
			{
				largestPrime = f;
			}
		}
	}
	printf("%lu",largestPrime);
	printf("\n");
	return (0);
}
