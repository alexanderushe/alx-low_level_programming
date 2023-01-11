#include "main.h"

/** 
 * _memcpy - function that copies memory
 * @dest: stored memory
 * @src: copied memory
 * @n: number of bytes
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		*(dest + i) = (src + j);
		i += 1;
		j += 1;
	}
	return (dest);
}
