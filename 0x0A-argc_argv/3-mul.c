#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			int argv_1 = atoi(argv[1]);

			int argv_2 = atoi(argv[2]);

			int result = argv_1 * argv_2;

			printf("%d\n", result);
			return (0);
		}
	}


	printf("Error\n");
	return (1);
	
}
