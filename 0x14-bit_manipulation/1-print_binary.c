#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation of a number
 * @n: no being represented
 * Return:the number
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);
	    printf("%lu", n % 2);
}
