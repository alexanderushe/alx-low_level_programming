#include <stdio.h>
#include "main.h"

/**
 * main - fizzbuzz
 * Desc: print numbers 1-100 w/
 * fizz for multiples of 3, buzz for multiples of 5
 * Return:0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)

		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
