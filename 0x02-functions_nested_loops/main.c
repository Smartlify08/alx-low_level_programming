#include<stdio.h>
#include "main.h"
int main (void)
{

	/*print_alphabet();

	print_alphabet_x10();

	int r;
	r = _islower('H');
	_putchar(r + '0');

	  int r;

    	r = _isalpha('H');
    	_putchar(r + '0');
    	r = _isalpha('o');
    	_putchar(r + '0');
    	r = _isalpha(108);
    	_putchar(r + '0');
    	r = _isalpha(';');
    	_putchar(r + '0'); */
	int r;
	 r = print_sign(98);
        _putchar(',');
        _putchar(' ');
        _putchar(r + '0');
        _putchar('\n');

        r = print_sign(0);
        _putchar(',');
        _putchar(' ');
        _putchar(r + '0');
        _putchar('\n');

         r = print_sign(0xff);
        _putchar(',');
        _putchar(' ');
        _putchar(r + '0');
        _putchar('\n');

        r = print_sign(-1);
        _putchar(',');
        _putchar(' ');
        _putchar(r + '0');
	_putchar('\n');
	return (0);
}
