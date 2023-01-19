#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function executing a func
 * @array: execution point
 * @size: array size
 * @action: func pointer
 * Return: 0 always
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array && action)
	{
		j = 0;
		while (size > j)
		{
			action(array[j]);
			j++;
		}
	}
}
