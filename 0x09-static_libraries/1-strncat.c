#include "main.h"

/**
 * *strncat - concatenate n bytes of two string
 * @dest: pointer destination
 * @src: source of pointer
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0';)
		dest_len++;

	for (i = 0; i < n && src[i] != '\0';)
		i++;
	dest[dest_len + i] = src[i];

	/*should end with a end of string*/
	dest[dest_len + i] = '\0';

	return (dest);
}
