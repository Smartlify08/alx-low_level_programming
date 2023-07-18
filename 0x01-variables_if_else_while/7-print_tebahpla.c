#include <stdio.h>
/**
 * main - Print alphabets in reversed form
 *
 * Return: always 0(success)
 */
int main(void)
{
	int alphaValue;

	for (alphaValue = 122; alphaValue > 96; alphaValue--)
	{
		putchar(alphaValue);
	}
	putchar('\n');
	return (0);
}
