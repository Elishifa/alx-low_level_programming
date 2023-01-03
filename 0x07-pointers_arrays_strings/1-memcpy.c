#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @n: bytes
 * @src: the source
 * @dest: memory area destination
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m = 0;

	while (m < n)
	{
		dest[m] = src[m];
		m++;
	}
	return (dest);
}
