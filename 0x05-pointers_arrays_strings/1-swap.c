#include "main.h"

/**
 * swap_int - function swapping values of two integers
 * @a: first entry point
 * @b: second entry point
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}
