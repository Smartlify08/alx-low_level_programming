#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 successful
**/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
