#include "main.h"

/**
 * print_number - prints an integer
 * @n: parameter
 * Return: void
 */
void print_number(int n)
{
	unsigned int q;

	q = n;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	q = n;

	if (q / 10)
		print_number(q / 10);

	_putchar(q % 10 + '0');
}
