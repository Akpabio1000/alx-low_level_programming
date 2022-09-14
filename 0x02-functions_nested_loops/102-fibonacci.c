#include <stdio.h>

/**
 * main - A program that prints first 50 Fibonacci numbers
 * Return: returns 0
 */

int main(void)
{
	int counter;
	int count_to = 50;
	long a = 1;
	long b = 2;

	for (counter = 1; counter <= (count_to / 2); counter++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}

	printf("\n");

	return (0);
}
