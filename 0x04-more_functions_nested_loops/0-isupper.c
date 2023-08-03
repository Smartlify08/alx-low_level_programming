#include "main.h"
int _isupper(int c)
{
	if (c >= 97 || c < 65 || (c > 90 && c < 97))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
