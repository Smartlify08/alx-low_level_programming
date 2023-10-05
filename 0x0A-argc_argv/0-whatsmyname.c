#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints name of program
 * @argc: argument count
 * @argv: pointer to array of strings
 * Return: 0 successful
**/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
