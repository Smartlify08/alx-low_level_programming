#include <stdio.h>
int main(void)
{
	int n;
	unsigned int firstTerm = 1;
	unsigned int secondTerm = 2;
	int nextTerm;
	int i;
	n = 50;
	printf("%u, %u, ", firstTerm, secondTerm);
	for (i = 2; i < n; i++)
	{
		nextTerm = firstTerm + secondTerm;
		firstTerm = secondTerm;
		secondTerm = nextTerm;
		printf("%u",secondTerm);
		if(i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
