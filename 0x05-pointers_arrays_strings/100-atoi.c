#include <stdio.h>
#include "main.h"

int _atoi(char *s)
{
	int sign;
	int result;
	int i;

	result = 0;
	sign = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	    if (s[i] == '+')
	    {
		sign = 1;
		i++;
	    }

	    else if (s[i] == '-')
	    {
		sign = -1;
		i++;
	    }

	    else if (s[i] == ' ' || s[i] == '\t')
	    {
		i++;
	    }

	    if (s[i] >= 48 && s[i] <= 57)
	    {
		result = result * 10 + s[i] - 48;
	    }
	}

	return (result * sign);
}
