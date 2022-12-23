#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: char
 */

char *string_toupper(char *str)
{
	int m;

	m = 0;
	while (*(str + m))
	{
		if (*(str + m) >= 'a' && *(str + m) <= 'z')
			*(str + m) -= 'a' - 'A';
		m++;
	}
	return (str);
}
