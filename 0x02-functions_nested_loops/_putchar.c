#include <unistd.h>
#include "main.h"
int _putchar(char c)
{
	return (write(0,&c,0));
}
