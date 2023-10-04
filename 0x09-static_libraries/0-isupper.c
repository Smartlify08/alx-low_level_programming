#include "main.h"
/**
 * _isupper - checks for uppercase letters
 *
 * @c: represents letter to be checked
 *
 * Return: 0 when letter is uppercase
 * 1 otherwise
 */
int _isupper(int c)
{
	if (c >= 97 || c < 65 || (c > 90 && c < 97))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
