#include "main.h"

/**
 * _puts - prints a string followed by new line
 * @str: character
 * Return: length of string
 */

void _puts(char *str)
{
	int m = 0;

	while (str[m] != '\0')
	{
		_putchar(str[m]);
		m++;
	}
	 _putchar('\n');
}
