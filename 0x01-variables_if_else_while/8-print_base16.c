#include <stdio.h>
/**
 * main - Print all base 16 numbers 0-f
 *
 * Return: always 0(success)
 */
int main(void)
{
	int hexNumber, hexLetter;

	for (hexNumber = 48; hexNumber <= 57; hexNumber++)
	{
		putchar(hexNumber);
	}
	for (hexLetter = 97; hexLetter <= 102; hexLetter++)
	{
		putchar(hexLetter);
	}
	putchar('\n');
	return(0);
}
