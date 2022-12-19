#include "main.h"

/**
 * rev_string - reverses a string
 * @s: character
 * Return: 0
 */
void rev_string(char *s)
{
	int m = 0, n, p;
	char a;

	while (s[m] != '\0')
	{
		m++;
	}
	p = m - 1;
	for (n = 0; p >= 0 && n < p; p--, n++)
	{
		a = s[n];
		s[n] = s[p];
		s[p] = a;
	}
}
