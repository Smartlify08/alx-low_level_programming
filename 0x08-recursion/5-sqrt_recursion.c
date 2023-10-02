#include "main.h"

/**
 * do_sqrt - calculates the square root of the number
 * @i: iterates through n
 * @n: number
 * Return: i, -1, or do_sqrt(i+1,n)
**/

int do_sqrt(int i, int n)
{
	int result;

	if (i > n)
	{
		return (-1);
	}


	result = i * i;
	if (result == n)
	{
		return (i);
	}

	else if (result > n)
	{
		return (-1);
	}
	return (do_sqrt(i + 1, n));

}


/**
 * _sqrt_recursion - returns do_sqrt function
 * @n: number
 * Return: -1, n, do_sqrt
**/


int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0 || n == 1)
	{
		return (n);
	}

	return ((do_sqrt(1, n)));

}
