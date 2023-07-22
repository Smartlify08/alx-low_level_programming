#include "main.h"
/**
 * _islower - check if value is lowercase 
 * 
 * @c: the character that represents the ascii
 *     value to be checked
 * Return: 0 if true, 0 otherwise.
 */
int _islower(int c)
{
	if (c <= 90)
	{
		return (0);
		_putchar(c);
	}
	else
	{
		return (1);
	}
	_putchar('\n');
	return (0);
}
