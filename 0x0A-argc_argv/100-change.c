#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int c, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);

	while (c > 0)
	{
		coins++;
		if ((c - 25) >= 0)
		{
			c -= 25;
			continue;
		}
		if ((c - 10) >= 0)
		{
			c -= 10;
			continue;
		}
		if ((c - 5) >= 0)
		{
			c-= 5;
			continue;
		}
		if ((c - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		c--;
	}
	printf("%d\n", coins);
	return (0);
}
