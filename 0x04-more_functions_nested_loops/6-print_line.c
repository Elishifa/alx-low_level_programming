#include "main.h"
/**
 * print_line - draws straight line in terminal
 * @n: number of times
 * Return: always 0
 */

void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
