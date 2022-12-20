#include "main.h"

/**
 * print_rev - prints string in revere
 * @s: pointer to string
 * Return: void
 */

void print_rev(char *s)
{
	int x = 0, i;

	while(s[i++])
	{
		x++;

		for (i = x - 1; i >= 0; i--)
		{
			_putchar(s[i]);
		}
	}
		_putchar('\n');
}
