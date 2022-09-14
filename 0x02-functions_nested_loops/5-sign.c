#include "main.h"

/**
 * print_sign - displays the sign of a number
 * @n: number to check
 *
 * Return: 1, 0, -1 if n is postive, zero or negative respectively
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
