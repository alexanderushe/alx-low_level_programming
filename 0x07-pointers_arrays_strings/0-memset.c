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
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
