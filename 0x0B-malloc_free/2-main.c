#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char *s;

	s = str_concat(NULL, "Holberton");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}

	printf("%s\n", s);
	free(s);
	return (0);
}
