#include <stdio.h>
int main(void)
{
	int n = 98;

	int i;

	int firstTerm = 1;

	int secondTerm = 2;

	int nextTerm;

	for (i = 0; i < n; i++)
	{
		nextTerm = firstTerm + secondTerm;
		firstTerm = secondTerm;
		secondTerm = nextTerm;
		printf("%u", secondTerm);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
