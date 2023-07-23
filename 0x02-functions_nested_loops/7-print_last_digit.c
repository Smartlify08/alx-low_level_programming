#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * @c: number to be printed and checked if it is negative
 *
 * Return: 1 if true -1 otherwise
 */
int print_last_digit(int c)
{
	int res;

	res = c % 10;
	if (c < 0)
	{
		res = res * -1;
	}
	else if (c > 0)
	{
		res = res * 1;
	}
	_putchar(res + '0');
	return (res);
}
