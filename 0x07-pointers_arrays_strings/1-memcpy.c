#include "main.h"

/** 
 * _memcpy - function that copies memory
 * @dest: stored memory
 * @src: copied memory
 * @n: number of bytes
 * Return: copied memory
 */

void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
	{
		destination[index] = source[index];
	}

	return (dest);
}
