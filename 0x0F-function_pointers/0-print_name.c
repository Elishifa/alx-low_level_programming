#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints name
 * @name: name to be printed
 * @f: funct pointer
 * Return: always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
