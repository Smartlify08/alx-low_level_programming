#include "main.h"

char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;


	for(; *dest; dest++)
	{

	}

	for (; *src; dest++, src++)
	{
		*dest = *src;
	}



	return(original_dest);
}
