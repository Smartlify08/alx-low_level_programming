#include <stdio.h>
int main(void)
{
	unsigned long int n = 4000000;

	unsigned long int i;

	unsigned long int firstTerm = 1;

	unsigned long int secondTerm = 2;

	unsigned long int nextTerm;

	unsigned long int sum = 0;

	for (i = 2; i < n; i++)
	{
		nextTerm = firstTerm + secondTerm;
		firstTerm = secondTerm;
		secondTerm = nextTerm;
		if (secondTerm % 2 == 0)
		{
			sum = sum + secondTerm;
		}
	}
	printf("%lu", sum);
	printf("\n");
	return (0);
}
