#include "main.h"

/**
 * _memset - entry point
 * @s: pointed dest
 * @b: constant byte
 * @n: the bytes
 * Return:0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i += 1;
	}
	return (s);
}
