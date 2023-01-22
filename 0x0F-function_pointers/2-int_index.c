#include "function_pointers.h"

/**
 * int_index - searches for an intenger
 * @array: array to search
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the fifirst
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	res = -1;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (res);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				res = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (res);
			}
		}
	}
	return (res);
}
