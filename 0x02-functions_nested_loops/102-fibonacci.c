#include <stdio.h>
int main(void)
{
	int n;
	n = 50;
	int firstTerm = 1;
	int secondTerm = 2;
	int nextTerm;
	int i;
	printf("%d, %d, ", firstTerm, secondTerm);
	for (i = 2; i < n; i++)
	{
		nextTerm = firstTerm + secondTerm;
		firstTerm = secondTerm;
		secondTerm = nextTerm;
		printf("%d",secondTerm);
		if(i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
