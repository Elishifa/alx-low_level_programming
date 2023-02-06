#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from on number to another
 * @n: one int bits
 * @m: bits of int to be flipped int
 * Return: bits no.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count, num;

	count = n ^ m;
	num = 0;

	while (count > 0)
	{
		num += (count & 1);
		count >>= 1;
	}
	return (num);
}
