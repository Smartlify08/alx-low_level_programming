#include "main.h"
/**
 * time_table - print the 9 times table
 *
 * Return: always 0 successful
 */
void times_table(void)
{
	int number, count;

	for (number = 0; number <= 9; number++)
	{
		for (count = 0; count <= 9; count++)
		{
			int res = (number * count);

			if (res < 10 && count != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (res >= 10 && count != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res / 10 + '0' != '0')
			{
				_putchar(res / 10 + '0');
			}
			_putchar(res % 10 + '0');
		}
		_putchar('\n');
	}
}

