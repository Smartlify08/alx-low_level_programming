#include "main.h"
/**
 * _abs - print absoulte value of numbers
 *
 * @x: number to be checked if negative or positive
 *
 * Return: x * -1 if x is negative,
 * 		x * 1 if x is positive,
 *	       	0 if x is zero.
 */
int _abs(int x)
{
	if (x < 0)
	{
		return (x * -1);
	}
	else if (x > 0)
	{
		return (x * 1);
	}
	else
	{
		return (0);
	}
	return (0);
}
