#include "main.h"

/**
 * _strspn - length of a prefix
 * @accept: which consist only of bytes from
 * @s: initial segment
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int m = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					m++;
			}
		}
		else
			return (m);
	}
	return (m);
}
