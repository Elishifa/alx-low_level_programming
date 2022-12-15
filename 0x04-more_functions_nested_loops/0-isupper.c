#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks uppercase character c
 * @c: character being looked for
 * Return: 1 if c is uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
