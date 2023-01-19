#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searching for an integer
 * @array: array input
 * @cmp: pointer to func used to compare values
 * @size: no of elements in array
 * Return: 0 always
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (array && cmp)
	{
		for (  ; size > 0; j++)
			if (cmp(array[j]) != 0)
				return (j);
	}
	return (-1);
}
