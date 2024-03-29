#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Print a random number and
 * assign it to a variable n checking if it is positive or negative
 *
 * Return: always 0(success)
 */
int main(void)
{
	int  n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
