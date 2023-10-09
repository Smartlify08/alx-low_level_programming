#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * getLen_s1 - calculates the length of the first string
 * @s1: first string
 * Return: len_1 if s1 is not NULL
 **/

int getLen_s1(char *s1)
{
	int len_1 = 0;
	int i;

	for (i = 0; s1[i]; i++)
	{
		len_1++;
	}
	return (len_1);
}

/**
 * getLen_s2 - calculates the length of the second string
 * @s2: second string
 * Return: len_2 if s2 is not NULL
**/

int getLen_s2(char *s2)
{
	int len_2 = 0;
	int i;

	for (i = 0; s2[i]; i++)
	{
		len_2++;
	}
	return (len_2);
}

/**
 * getLenSum - calculates the sum of the length of s1 and s2
 * @s1: first string
 * @s2: second string
 * Return: len_sum
**/

int getLenSum(char *s1, char *s2)
{
	int len_1 = getLen_s1(s1);
	int len_2 = getLen_s2(s2);
	int len_sum = len_1 + len_2;

	return (len_sum);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL if result is invalid, concatenated string if successful
**/

char *str_concat(char *s1, char *s2)
{
	int i, len_1 = 0, len_2 = 0, index = 0, len_sum = 0;

	char *concatenated_str;

	(void)len_1;
	(void)len_2;

	if (s1 != NULL)
	{
		len_1 = getLen_s1(s1);
	}
	if (s2 != NULL)
	{
		len_2 = getLen_s2(s2);
	}
	len_sum = getLenSum(s1, s2);
	concatenated_str = malloc(len_sum + 1);
	if (concatenated_str == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
		{
			concatenated_str[index++] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i]; i++)
		{
			concatenated_str[index++] = s2[i];
		}
	}
	concatenated_str[len_sum] = '\0';
	return (concatenated_str);
}
