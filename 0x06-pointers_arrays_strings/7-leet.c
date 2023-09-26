#include "main.h"

char *leet(char *str)
{
	char *original_str = str;
	int i;

	char arr[3][5] = {
		{'A', 'E', 'O', 'T', 'L'},
		{'a', 'e', 'o', 't', 'l'},
		{'4', '3', '0', '7', '1'}
	};

	for (; *str; )
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == arr[0][i] || *str == arr[1][i])
			{
				*str = arr[2][i];
				break;
			}		
		}

		if (i == 5)
		{
			str++;
		}
	}
	return (original_str);
}
