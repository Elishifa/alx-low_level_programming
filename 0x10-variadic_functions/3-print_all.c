#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - printing anything
 * @format: types of arg passed to function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int m = 0, q, p = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(list, format);
	while (format && format[m])
	{
		q = 0;
		while (t_arg[q])
		{
			if (format[m] == t_arg[q] && p)
			{
				printf(", ");
				break;
			} q++;
		}
		switch (format[m])
		{
			case 'c':
				printf("%c", va_arg(list, int)), p = 1;
				break;
			case 'i':
				printf("%d", va_arg(list, int)), p = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double)), p = 1;
				break;
			case 's':
				str = va_arg(list, char *), p = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} q++;
	}
	printf("\n"), va_end(list);
}
