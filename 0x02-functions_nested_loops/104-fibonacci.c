#include <stdio.h>
/**
 * main - print first 98 fibonacci numbers
 *
 * Return: always 0 (successful)
 *
 */
int main(void)
{
	long unsigned int n = 98;

	long unsigned int i;

	long unsigned int firstTerm = 1;

	long unsigned int secondTerm = 2;

	long unsigned int nextTerm;

	printf("%lu, ", firstTerm);
	printf("%lu, ", secondTerm);
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
