#include "main.h"
/**
 * _isalpha - print all alphabets
 *
 * @c: represents character to be checked
 * 
 * Return: 1 if c is an alphabet 0 otherwise
 */
int _isalpha(int c)
{
	if ( c <= 122 && c != 91 && c != 92 && c != 93 && c != 94 && c != 95 && c != 96 && !(c > 122) && !(c < 65))
	{
		return (1);
	}
	else
	{
		return (0);
		_putchar(c);
	}
	return (0);
}
