#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a bin no to an unsigned int
 * @b: points to a string of no. 0 and 1
 * Return: the converted number, or 0 if
 *
 * there is one or more chars in the string b that is not 0 or 1
 *
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int p = 0;
	unsigned int j = 0;

	if (!b)
		return (0);

	for ( ; b[p]; p++)
	{
		if (b[p] < '0' || b[p] > '1')
			return (0);
		j = 2 * j + (b[p] - '0');
	}
	return (j);
}
