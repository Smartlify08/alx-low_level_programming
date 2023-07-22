#include "main.h"
/**
 * _islower - check if value is lowercase 
 *            and return 1 otherwise return
 *            0
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
