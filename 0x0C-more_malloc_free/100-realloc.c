#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @new_size: in bytes allocated to new memory block
 * @old_size: size in bytes allocated to ptr
 * @ptr: pointer to the memory previously allocated with a
 * call to malloc: malloc(old_size)
 * Return: NULL If new_size is equal to zero, and ptr is not
 * NULL, then the call is equivalent to free(ptr).
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;
	unsigned int j, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		c = malloc(new_size);
		return (c);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	c = malloc(new_size);
	if (c == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (j = 0; j < n; j++)
		c[j] = oldp[j];
	free(ptr);
	return (c);
}
