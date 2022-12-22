#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: append from src
 * @src: input value
 * Return: character
 */

char *_strcat(char *dest, char *src)
{
	char *m = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (m);
}
