#include "main.h"

/**
 * string_toupper - converts string to uppercase
 * @str: string
 * Return: original_str
*/

char *string_toupper(char *str)
{
	char *original_str = str;
	while (*str)
	{
		if(*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}

	return (original_str);
}
