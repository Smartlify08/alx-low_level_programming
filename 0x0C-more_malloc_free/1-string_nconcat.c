#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * getLen_s1 - calculates the length of the first string
 * @s1: first string
 * Return:0(unsucessful), len_1 if s1 is not NULL
 **/
int getLen_s1(char *s1)
{
	unsigned int len_1 = 0;
	unsigned int i;

	if (s1 == NULL)
	{
		return (0);
	}

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
	unsigned int len_2 = 0;
	unsigned int i;

	if (s2 == NULL)
	{
		return (0);
	}

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
 * @n: number of bytes to be printed
 * Return: len_sum
 **/

int getLenSum(char *s1, char *s2, unsigned int n)
{
	unsigned int len_1 = getLen_s1(s1);
	unsigned int len_2 = getLen_s2(s2);
	unsigned int len_sum;

	if (n >= len_2)
	{
		n = len_2;
	}

	len_sum = len_1 + n;
	return (len_sum);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: limit
 * Return: NULL if result is invalid, concatenated string if successful
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len_1 = 0, len_2 = 0, len_sum = 0, index = 0;

	char *concatenated_str;

	(void)len_1;
	(void)len_2;

	len_1 = (s1 != NULL) ? getLen_s1(s1) : 0;
	len_2 = (s2 != NULL) ? getLen_s2(s2) : 0;


	len_sum = getLenSum(s1, s2, n);
	concatenated_str = malloc(len_sum + 1);
	if (concatenated_str == NULL)
		return (NULL);

	for (i = 0; (s1 != NULL && s1[i]); i++)
	{
		concatenated_str[index++] = s1[i];
	}


	for (i = 0; s2 != NULL && s2[i] && n > 0; i++)
	{
		concatenated_str[index++] = s2[i];
		n--;
	}
	concatenated_str[len_sum] = '\0';
	return (concatenated_str);
}
