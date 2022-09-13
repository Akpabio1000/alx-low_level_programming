#include "main.h"

/**
 * _isalpha - checks if arg is an alphabetic character
 * @c: character to check
 *
 * Return: returns 1 if lower or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	_putchar('\n');
}
