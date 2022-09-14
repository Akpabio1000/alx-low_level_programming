#include <stdio.h>

/**
 * main - A program that prints first 50 Fibonacci numbers
 * Return: returns 0
 */

int main(void)
{
	int i, j, k;
	int counter;

	i = 1;
	j = 1;
	k = 0;

	for (counter = 0; counter < 52; counter++)
	{
		if (counter == 51)
			printf("%i\n", i);

		else
		{
			printf("%i, ", i);
			k = i + j;
			j = i;
			i = k;
		}
	}
	return (0);
}
