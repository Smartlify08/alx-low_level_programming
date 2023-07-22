#include "main.h"
/**
 * print_sign - checks whether a value is negative, positive
 *             or zero.
 * @n: character to be checked if negative, positive or zero
 *
 * Return: -1 if n is negative, 1 if n is positive
 *         or 0 if n is zero.
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0' + 0);
		return (0);
	}
}
