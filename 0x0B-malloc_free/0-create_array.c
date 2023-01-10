#include "main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 * @size: in bytes
 * @c: value
 * Return: NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int m;

	if (size == 0)
		return (Null);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (m = 0; m < size; m++)
		array[m] = c;
	return (array);
}
