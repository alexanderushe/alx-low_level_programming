#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base
 * @y: exponant
 * Return: pointer to the byte in 's' that matches one of the byets in 'accept'
 * or NULL if no such bytes
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 1)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
