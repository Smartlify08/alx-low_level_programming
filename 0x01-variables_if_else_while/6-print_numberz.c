#include <stdio.h>
/**
 * main - Print values from 0 to 9
 *        in base 10
 *
 * Return: always 0
 */
int main(void)
{
	int number = 0;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
