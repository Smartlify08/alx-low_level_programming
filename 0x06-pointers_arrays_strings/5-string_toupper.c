#include "main.h"

/**
 * string_toupper - converts a string to upper case
 * @str: string
 * Return: original string
 */

char *string_toupper(char *str)
{
	char *original_str = str;

	for (; *str;)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}

	return (original_str);
}
