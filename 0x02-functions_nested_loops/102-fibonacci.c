#include <stdio.h>
/**
 * main - print first 50 fibonacci numbers
 * 
 * Return: 0 (successful)
 *
 */
int main(void)
{
	int n;

	unsigned long int firstTerm = 1;

	unsigned long int secondTerm = 2;

	unsigned long int nextTerm;

	int i;

	n = 50;
	printf("%lu, %lu, ", firstTerm, secondTerm);
	for (i = 2; i < n; i++)
	{
		nextTerm = firstTerm + secondTerm;
		firstTerm = secondTerm;
		secondTerm = nextTerm;
		printf("%lu", secondTerm);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
