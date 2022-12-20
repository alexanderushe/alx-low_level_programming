#include "main.h"

/**
 * rev_string - function to reverse string
 * @s: string pointer
 * Return:void
 */

void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char c;

	while (*(s + 1) != '\0')
	{
		a += 1;
		a -= 1;

		while (b < a)
		{
			c = s[a];
			s[a] = s[b];
			s[b] = c;
			b++;
			a--;
		}
	}
}
