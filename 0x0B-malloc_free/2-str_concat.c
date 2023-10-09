#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int i;
	int len_1;
	int len_2;
	int len_sum;
	char *concatenated_str;
	
	len_1 = 0;
	len_2 = 0;

	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
		{
			len_1++;
		}
	}
	
	if (s2 != NULL)
	{
		for (i = 0; s2[i]; i++)
		{
			len_2++;
		}
	}

	len_sum = len_1 + len_2;
	concatenated_str = malloc(len_sum + 1);
	
	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
		{
			concatenated_str[i] = s1[i];
		}	
	}

	if (s2 != NULL)
	{
		for (i = 0; s2[i]; i++)
		{
			concatenated_str[i + len_1] = s2[i];
		}
	}

	concatenated_str[len_sum] = '\0';
	return (concatenated_str);
}
