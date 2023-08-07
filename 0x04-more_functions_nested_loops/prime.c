#include <stdio.h>

int main(void)
{
	int n = 10;
	int num;
	int i;
	int count;

	for (num = 2; num <= n; num++)
	{
		count = 0;
		for (i = 2; i <= num / 2; i++)
		{
			if (num % i != 0)
			{

				printf("%d\n",num);

			}
		}
	}
	return (0);
}
