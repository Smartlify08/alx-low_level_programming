#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add infinite arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 unsuccessful, 0 successful
**/

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isalpha(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
