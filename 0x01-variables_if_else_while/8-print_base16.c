#include <stdio.h>
/**
 * main - main block
 * Description: hexadecimal
 * Return: 0
 */
int main(void)
{
	char w;

	for (w = '0'; w <= '9'; w++)
	{
		putchar(w);
	}
	for (w = 'a'; w <= 'f'; w++)
	{
		putchar(w);
	}
	putchar('\n');
	return (0);
}
