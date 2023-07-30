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

	unsigned long int nextTerm, firstTerm1, firstTerm2, secondTerm1, secondTerm2;

	printf("%lu, ", firstTerm);
	printf("%lu, ", secondTerm);
	for (i = 1; i < 91; i++)
	{
		secondTerm = secondTerm + firstTerm;
		firstTerm = secondTerm - firstTerm;

		printf(", %lu", secondTerm); 
	}

	firstTerm1 = firstTerm / 1000000000;
	firstTerm2 = firstTerm % 1000000000;
	secondTerm1 = secondTerm / 1000000000;
	secondTerm2 = secondTerm % 1000000000;

	for (i = 92; i <= n; i++)
	{
		                printf(", %lu",secondTerm1 +
						(secondTerm2 / 1000000000));

                printf("%lu", secondTerm2 % 1000000000);

                secondTerm1 = secondTerm1 + firstTerm1;
                firstTerm1 = secondTerm1 - firstTerm1;



                secondTerm2 = firstTerm2 + secondTerm2;
                firstTerm2 = secondTerm2 - firstTerm2;
	}
	printf("\n");
	return (0);
}
