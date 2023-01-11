#include "main.h"

/**
 * _strcpy - function that copies the string
 * @d: destination pointer
 * @src: source of pointer
 * Return: char
 */

char *_strcpy(char *d, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(d + 1) = *(src + 1);
	}
	*(d + 1) = '\0';
	return (d);
}
