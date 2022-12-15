#include "main.h"
#include <stdio.h>

/**
 * main - main blovk
 * Desc: print even numbers < 4,000,000
 * Return:0
 */

int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%\n", sum);
	return (0);
}
