#include <stdio.h>
/**
 * main - Print letters of the alphabet
 *
 * Return: always 0(success)
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
