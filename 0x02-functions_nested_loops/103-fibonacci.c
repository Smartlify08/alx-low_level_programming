#include <stdio.h>
int main(void)
{
	int n = 4000000;

	int i;

	unsigned int firstTerm = 0;

	unsigned int secondTerm = 1;

	unsigned int nextTerm;

	unsigned int sum = 0;

	for (i = 2; i < n; i++)
	{
		nextTerm = firstTerm + secondTerm;
		firstTerm = secondTerm;
		secondTerm = nextTerm;
		if (secondTerm % 2 == 0)
		{
			printf("%d",i);
			sum = sum + secondTerm;

		}
	}
	printf("%u",sum);
	printf("\n");
	return (0);
}
