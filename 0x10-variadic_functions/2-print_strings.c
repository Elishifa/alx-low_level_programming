#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - printing str followedd \n
 * @separator: string printed btn strings
 * @n: no of str passed to fxn
 * Return: If separator is NULL, don’t print it
 *
 * If one of the string is NULL, print (nil) instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int j = 0;
	char *str;

	va_start(list, n);
	for ( ; j < n; j++)
	{
		str = va_arg(list, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (j < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
