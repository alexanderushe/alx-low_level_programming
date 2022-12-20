#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints elements of an array of integers
 * @a: first pointer
 * @b: second pointer
 * Return: void
 */

void print_array(int *a, int b)
{
	int i = 0;

	for (i = 0; i < b; i++)
	{
		printf("%d", a[i]);
		if (i < (b - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
