#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @str: string
 * Return: the address
 */
char *rot13(char *str)
{
	int p, q;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (p = 0; *(str + p); p++)
	{
		for (q = 0; q < 52; q++)
		{
			if (s1[q] == *(str + p))
			{
				*(str + p) = s2[q];
				break;
			}
		}
	}
	return (str);
}
