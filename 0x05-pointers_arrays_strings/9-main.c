#include <stdio.h>
#include "main.h"


int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. The write the code\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}
