#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @n: bytes
 * @src: the source
 * @dest: memory area destination
 * Returns: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
