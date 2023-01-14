#include <stdiio.h>
#include <stdlib.h>

/**
 * main - prints the min no. of coins to make change
 * @argc: arg count
 * @argv: containing command line args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int total, count;
	unsigned int n;
	char *c;
	int coins[] = {25, 10, 5, 2};
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = strtol(argv[1], &p, 10);
	count = 0;
	if (!*c)
	{
		while (total > 1)
		{
			for (n = 0; n < sizeof(cents[n]); n++)
			{
				if (total >= cents[n])
				{
					count += total / coins[n];
					total = total % coins[n];
				}
			}																			}
		if (total == 1)
			count++;
	}
	else{printf("Error\n");
		return (1);
	}
	printf("%d\n", count);
	return (0);
}
