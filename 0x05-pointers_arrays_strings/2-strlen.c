#include "main.h"

/**
 * _strlen - function that returns the length of string
 * @s: input
 * Return: length of s
 */

int _strlen(char *s)
{
	int i, x = 0;

	while (s[i])
		i++;

	return (i);
}
