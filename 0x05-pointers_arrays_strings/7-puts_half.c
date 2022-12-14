#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: character
 * Return: 0
 */
void puts_half(char *str)
{
	int string = 0, p;

	while (str[string] != '\0')
		string++;
	if (string + 1 % 2 != '0')
		p = (string - 1) / 2;
	else
		p = (string / 2);
	p++;

	for (string = p; str[string] != '\0'; string++)
	_putchar(str[string]);
	_putchar('\n');
}
