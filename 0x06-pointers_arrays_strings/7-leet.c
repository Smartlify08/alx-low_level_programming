#include "main.h"

char *leet(char *str)
{
	char *original_str = str;
	int i;
	int j;

	char arr[3][5] = {
		{'A', 'E', 'O', 'T', 'L'},
		{'a', 'e', 'o', 't', 'l'},
		{'4', '3', '0', '7', '1'}
	};

	for (; *str; )
	{
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 5; j++)
			{
				if (*str == arr[i][j])
				{
					*str = arr[2][j];
				}
			}
		}
		str++;
	}
	return (original_str);
}
