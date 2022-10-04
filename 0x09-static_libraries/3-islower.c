#include "main.h"

/**
 * _islower - checks if character is lowercase or not
 * @c: c is the character to check each time
 *
 * Return: returns 1 if lowercaser, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
