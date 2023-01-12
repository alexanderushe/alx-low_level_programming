#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: pointer to string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0, j;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		s[j] = str[j];
	return (s);
}
