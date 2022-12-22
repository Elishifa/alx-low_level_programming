#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer destination
 * @src: source
 * @n: bytes from src
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int p;

	for (m = 0; dest[m] != '\0'; m++)
	{
		continue;
	}
	for (p = 0; src[p] != '\0' && p < n; p++)
	{
		dest[m + p] = src[p];
	}
	dest[m + p] = '\0';
	return (dest);
}
