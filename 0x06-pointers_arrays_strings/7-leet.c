#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: encoded string
 * Return: string
 */

char *leet(char *str)
{
	int m, n;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (m = 0; *(str + m); m++)
	{
		for (n = 0; n <= 9; n++)
		{
			if (s1[n] == str[m])
				str[m] = s2[n];
		}
	}
	return (str);
}
