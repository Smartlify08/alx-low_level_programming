#include "main.h"

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
			return(_prime_recursive(n, i + 1));
		}
	}
}

int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}

	return(_prime_recursive(n, 2));
}
