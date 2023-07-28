#include <stdio.h>
int main(void)
{
	int n;
	unsigned long long int firstTerm = 1;
	unsigned long long int secondTerm = 2;
	unsigned long long int nextTerm;
	int i;
	n = 50;
	printf("%llu, %llu, ", firstTerm, secondTerm);
	for (i = 2; i < n; i++)
	{
		nextTerm = firstTerm + secondTerm;
		firstTerm = secondTerm;
		secondTerm = nextTerm;
		printf("%llu",secondTerm);
		if(i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
