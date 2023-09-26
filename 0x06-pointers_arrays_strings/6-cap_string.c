#include "main.h"

/**
 * cap_string - capitalizes the words in a string
 * @s: string
 * Return: original string
*/

char *cap_string(char *s)
{
	char *original_str = s;

	char seperators[] = {
		' ', '\n', '\t',
		',', ';', '.',
		'!', '?', '"',
		'(', ')', '{', '}'
	};

	int i;

	int j;

	/**for the first letter of the string**/
	if (*s >= 'a' && *s <= 'z')
	{
		*s -= 32;
	}

	for (i = 0; *s;)
	{
		for (j = 0; seperators[j]; j++)
		{
			if (*s == seperators[j])
			{
				/** check if char after space is a letter**/
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
