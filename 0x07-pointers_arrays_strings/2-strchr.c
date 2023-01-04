#include <stdio.h>
#include "main.h"

/**
 * _strchr - entry point
 * @s: input to be searched
 * @c: input to be located
 * Return: pointer to the first occurence
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
