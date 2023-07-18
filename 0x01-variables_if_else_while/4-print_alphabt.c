#include <stdio.h>
/**
 * main - Print all alphabets except
 *        e and q
 *
 * Return: always 0(success)
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e')
		{
			continue;
		}
		else if (letter == 'q')
		{
			continue;
		}
		putchar(letter);

	}
	putchar ('\n');
	return (0);
}
