#include <stdio.h>

/**
 * main - A program that prints first 50 Fibonacci numbers
 * Return: returns 0
 */

int main(void)
{
	long int i, j, k;
	int counter;

	i = 1;
	j = 1;
	k = 0;

	for (counter = 0; counter < 50; counter++)
	{
		if (counter == 51)
			printf("%li\n", i);

		else
		{
			if (counter != 49)
				printf("%li, ", i);
			else
				printf("%li", i);
			k = i + j;
			j = i;
			i = k;
		}
	}
	return (0);
}
