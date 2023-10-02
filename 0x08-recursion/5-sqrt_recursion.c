#include "main.h"

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
		return(i);
	}

	else if (result > n)
	{
		return (-1);
	}
	return (do_sqrt(i + 1, n));

}

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
