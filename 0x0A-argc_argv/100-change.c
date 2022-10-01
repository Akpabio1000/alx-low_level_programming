#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: count
 * @argv: argument vector
 *
 * Return: returns 1 on error, hence 0.
 */

int main(int argc, char *argv[])
{
	int n;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* check for negative number */
	if (argv[1][0] == '-')
	{
		printf("%d\n", 0);
		return (0);
	}

	/* convert string to integers */
	n =  atoi(argv[1]);

	coins += n / 25;
	n = n % 25;
	coins += n / 10;
	n = n % 10;
	coins += n / 5;
	n = n % 5;
	coins += n / 2;
	n = n % 2;
	coins += n / 1;

	printf("%d\n", coins);
	return (0);
}

