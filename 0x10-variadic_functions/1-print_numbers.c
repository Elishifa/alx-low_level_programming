#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prins no.s \n
 * @separator: str to be printed
 * @n: no. of ints passed
 * Return: If separator is NULL, don’t print it
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int j = 0;

	va_start(list, n);

	for ( ; j < n; j++)
	{
		printf("%d", va_arg(list, int));
		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
