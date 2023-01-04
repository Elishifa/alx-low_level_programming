#include "main.h"

/**
 * _strstr - locating a sub string
 * @needle: substring
 * @haystack: string
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int m = 0, n = 0;

	while (haystack[m])
	{
		while (needle[n] && (haystack[m] == needle[0]))
		{
			if (haystack[m + n] == needle[n])
				n++;
			else
				break;
		}
		if (needle[n])
		{
			m++;
			n = 0;
		}
		else
			return (haystack + m);
	}
	return (0);
}
