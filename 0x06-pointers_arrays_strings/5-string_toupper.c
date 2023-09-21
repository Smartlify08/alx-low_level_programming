#include "main.h"

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
