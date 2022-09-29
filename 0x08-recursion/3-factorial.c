#include "main.h"

/**
 * factorial - returns the factorials of a given number
 * factorial of  0 is 1
 * @n: the number
 *
 * Return: returns -1 if n is negative.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
