#include "main.h"

/**
 * _isdigit - checks for a digit number (0 through 9)
 * @c: c is the character to check
 *
 * Return: 1 if c is digit, otherwise 0
 */

int _isdigit(int c)
{
	int i;
	int value;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
		{
			value = 1;
			break;
		}
	}
	if (c != i)
	{
		value = 0;
	}

	return (value);
}
