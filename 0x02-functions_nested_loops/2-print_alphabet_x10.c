#include "main.h"

void print_alphabet_x10 (void)
{

     char c;
     char h;

     for ( h = 0; h <= 9; h++ )
     {

	for ( c = 'a'; c <= 'z'; c++ )
	{
		_putchar (c);
	}
		_putchar ('\n');
     }
}

