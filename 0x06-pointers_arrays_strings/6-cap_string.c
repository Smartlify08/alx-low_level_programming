#include "main.h"

char *cap_string(char *s)
{
	char *original_str =s;

	char seperators[] = {' ', '\n', '\t', ',', ';', '.', '!', '?',     '"', '(', ')', '{', '}'};
	int i;
	int j;

	for (i = 0; *s;)
	{
		for (j = 0; seperators[j]; j++)
		{
			if (*s == seperators[j])
			{
				if (*(s + 1) >= 'a' && *(s + 1) <= 'z')
				{
					*(s + 1) -= 32;
				}
			}
		}

		i++;
		s++;
	}

	return (original_str);
}
