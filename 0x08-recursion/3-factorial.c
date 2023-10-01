#include "main.h"

/**
 * factorial - calculates factorial of a number
 * @n: number
 * Return: - 1 for n < 0, 1 for n <= 1,
 * factorial(n-1) * n for n > 1
**/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n <= 1 && !(n < 0))
	{
		return (1);
	}

	else
	{
		return (factorial(n - 1) * n);
	}
}
