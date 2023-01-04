#include "main.h"

/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (aceept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
