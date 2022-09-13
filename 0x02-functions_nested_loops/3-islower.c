#include "main.h"

/**
 * _islower - checks if character is lowercase or not
 * @c: c is the character to check each time
 *
 * Return: returns 1 if lowercaser, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);
	else
		return (1);
	_putchar('\n');
}
