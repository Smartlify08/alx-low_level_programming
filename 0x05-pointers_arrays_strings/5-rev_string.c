#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 *
 * @s: represents character to be  reveresed
 *
 */
void rev_string(char *s)
{
	int length;
	int i;
	int start;
	int end;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length = i;
	}

	start = 0;
	end = length;

	if (length != 0)
	{
		while (start < end)
		{
			s[start] = s[start] ^ s[end];
			s[end] = s[start] ^ s[end];
			s[start] = s[start] ^ s[end];

			start++;
			end--;
		}

	}
}
