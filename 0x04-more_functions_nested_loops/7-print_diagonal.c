#include "main.h"

/**
 * print_diagonal - diagonal lines on terminal
 * @n: number of times
 */

void print_diagonal(int n)
{
	int m, p;

	if (n <= 0)
		_putchar('\n');
	for (m = 0; m < n; m++)
	{
		for (p = 0; p < m; p++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
