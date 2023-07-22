#include "main.h"
int _abs (int x)
{
	if (x < 0)
	{
		return x * -1;
	}
	else if (x > 0)
	{
		return x * 1;
	}
	else
	{
		return 0;
	}
	return 0;
}
