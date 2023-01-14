#include <stdio.h>

/**
 * main - printing program name followed by new line
 * @argc: argument count
 * @argv: containing command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
