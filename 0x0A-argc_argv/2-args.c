#include <stdio.h>

/**
 * main - printing all of the arguments
 * @argc: arg count
 * @argv: containing all command line args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	Return (0);
}
