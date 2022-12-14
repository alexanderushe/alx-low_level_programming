#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10times
 * Return:void
 */

void print_alphabet_x10(void)
{
	char c;
	int b = 0;

	while (b < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		b++;
	}
}
