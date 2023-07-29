#include <stdio.h>
/**
 * main - print sum of fibonacci numbers less than
 *        4,000,000
 *
 * Return: 0(successful)
 */
int main(void)
{
	unsigned int n = 4000000;

	unsigned int firstTerm = 0;

	unsigned int secondTerm = 1;

	unsigned int nextTerm;

	unsigned int sum = 0;

	while (secondTerm <= n)
	{
		nextTerm = firstTerm + secondTerm;
		firstTerm = secondTerm;
		secondTerm = nextTerm;
		if (secondTerm % 2 == 0)
		{
			sum = sum + secondTerm;
		}
	}
	printf("%u",sum);
	printf("\n");
	return (0);
}
