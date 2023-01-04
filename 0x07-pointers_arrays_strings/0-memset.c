#include "main.h"

/**
 * _memset - entry point
 * @s: pointed dest
 * @b: constant byte
 * @n: the bytes
 * Return:0
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
