#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s of
 * any of the bytes in the string accept
 * @s: to be returned to
 * @accept: matching bytes
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
				return (s);
		}
		s++;
	}
	return (NULL);
}
