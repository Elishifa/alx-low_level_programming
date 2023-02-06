#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks endiannes
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n;
	char *p;

	n = 1;
	p = (char *)&n;
	return (*p);
}
