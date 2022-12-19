#include "main.h"

/**
 * print_rev - function printing a string, in reverse, followed by new line
 * @s: character
 * Return: 0
 */

void print_rev(char *s)
{
	int m, n;

	n = 0;

	while (s[n] != '\0')
		n++;

	for (m = n - 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
