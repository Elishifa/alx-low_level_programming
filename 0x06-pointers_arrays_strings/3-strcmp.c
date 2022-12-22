#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string value two
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int m;

	m = 0;
	while (s1[m] != '\0' && s2[m] != '\0')
	{
		if (s1[m] != s2[m])
		{
			return (s1[m] - s2[m]);
		}
		m++;
	}
	return (0);
}
