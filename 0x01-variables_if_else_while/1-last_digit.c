#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that prints the last digit of n
 *
 * Description: The last digit printed will be
 * matched with several conditions
 * Return: returns 0
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (n > 0 && last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (n > 0 && last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
