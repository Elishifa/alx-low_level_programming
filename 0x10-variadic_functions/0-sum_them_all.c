#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - returns all the sum of the param
 * @n: no of args
 * Return: If n == 0, otherwise 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int k;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);
	for (k = 0; k < n; k++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
