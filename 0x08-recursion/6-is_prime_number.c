#include "main.h"

/**
 * increment_factor - increases the divisor by 1 each recursive call
 * @n: number to check for primality
 * @trial_factor: factor to try
 *
 * Return: 0 if not prime, 1 if prime, else recursive function call
 */

int increment_factor(int n, int trial_factor)
{
	if (n == trial_factor)
		return (1);
	if (n % trial_factor == 0)  /* found a factor of n */
		return (0);
	return (increment_factor(n, trial_factor + 1));
}

/**
 * is_prime_number - checks if a number is prime or not
 * @n: number to check
 *
 * Return: 1 if n is prime, otherwise 0
 */

int is_prime_number(int n)
{
	int trial_factor = 3;

	if (n == 2) /* 2 is prime */
		return (1);
	if (n < 2 || n % 2 == 0)
		return (0);

	return (increment_factor(n, trial_factor));
}



