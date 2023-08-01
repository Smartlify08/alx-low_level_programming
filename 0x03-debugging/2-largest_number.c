#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b && a > c) || 
			(c == b && a > c && a > b))
	{
		largest = a;
	}
	else if ((b > a && b > c) || 
			(a == c && b > c && b > a))
	{
		largest = b;
	}
	else if ((c > a && c > b) || 
			(b == a && c > a && c > b))
	{
		largest = c;
	}
	else if (a == c && a == b)
	{
		return (0);
	}
	else
	{
		return (0);
	}
	return (largest);
}
