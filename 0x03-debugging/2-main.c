#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
	int a, b, c;
	int largest;

	a = 19;
	b = 19;
	c = 17;

	largest = largest_number(a, b, c);
	if (largest != 0)
	{
		printf("%d is the largest number\n", largest);
	}

	return (0);
}
