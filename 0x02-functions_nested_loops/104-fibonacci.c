#include <stdio.h>
/**
 * main - print first 98 fibonacci numbers
 *
 * Return: always 0 (successful)
 *
 */
int main(void)
{
	unsigned long int n = 98;

	unsigned long int i;

	unsigned long int firstTerm = 1;

	unsigned long int secondTerm = 2;

	unsigned long int nextTerm;

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
