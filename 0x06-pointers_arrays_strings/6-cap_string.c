#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: capitalised string
 * Return: string address
 */

char *cap_string(char *str)
{
	int m = 0, p;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(str + m))
	{
		if (*(str + m) >= 'a' && *(str + m) <= 'z')
		{
			if (m == 0)
				*(str + m) -= 'a' - 'A';
			else
			{
				for (p = 0; p <= 12; p++)
				{
					if (a[p] == *(str + m - 1))
						*(str + m) -= 'a' - 'A';
				}
			}
		}
		m++;
	}
	return (str);
}
