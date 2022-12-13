#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Return:0
 */
int main(void)
{
	int c = 0;
	int a_b;
	int b_b;

	int c2;
	int a_b2;
	int b_b2;

	while (c <= 98)
	{
		a_b = (c / 10 + '0');
		b_b = (c % 10 + '0');
		c2 = 0;
		while (c2 <= 99)
		{
			a_b2 = (c2 / 10 + '0');
			b_b2 = (c2 % 10 + '0');

			if (c < c2)
			{
				putchar(a_b);
				putchar(b_b);
				putchar(' ');
				putchar(a_b2);
				putchar(b_b2;
				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
