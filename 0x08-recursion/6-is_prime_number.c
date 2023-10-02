#include "main.h"


/**
 * _prime_recursive - checks recursively if n is prime
 * @n: number
 * @i: iterator
 * Return: 1, 0 or _prime_recursive
**/


int _prime_recursive(int n, int i)
{
	if (i == n)
	{
		return (1);
	}

	else
	{
		if (n % i == 0)
		{
			return (0);
		}

		else
		{
			return (_prime_recursive(n, i + 1));
		}
	}
}


/**
 * is_prime_number - checks for invalid input and returns _prime_recursive
 * @n: number
 * Return: _prime_recursive
**/


int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}

	return (_prime_recursive(n, 2));
}
