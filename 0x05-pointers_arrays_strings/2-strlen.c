#include "main.h"

/**
 * _strlen - function that returns the length of string
 * @s: input
 * Return: length of s
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		return (index);
}
