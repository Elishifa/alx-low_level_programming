#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum arrays range inclued
 * @max: the maximum arrays included
 * Return: the pointer to newly appointed array
 * min > max, return NULL
 * malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *p, j, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	for (j = 0; min <= max; j++)
		p[j] = min++;
	return (p);
}
