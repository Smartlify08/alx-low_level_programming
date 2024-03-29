#include "main.h"

/**
 * _pow_recursion - returns power of a number
 * @x: base number
 * @y: power
 * Return: 1, -1 or x * _pow_recursion(x, y - 1))
**/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
