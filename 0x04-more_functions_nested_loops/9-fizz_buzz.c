#include <stdio.h>

/**
 * main - print numbers from 1 till 100,
 * Print fizz for multiples of 3 and buzz for multiples of 5
 * prints fizzbuzz for numbers that are multiples of both
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
		}

		if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz ");
		}

		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}


		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
