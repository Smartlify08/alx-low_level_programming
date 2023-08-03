#include "main.h"
/**
 * _isdigit - check if a character is a digit
 *
 * @c: represents character to be checked
 *
 * Return: 0 if false , 1 otherwise
 */

int _isdigit(int c)
{
	if ( c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
