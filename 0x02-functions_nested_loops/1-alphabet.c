#include "main.h"
/**
 * print alphabet - Entry point
 * Description: function that prints alpahbetical letters
 * Return:0
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a < 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
