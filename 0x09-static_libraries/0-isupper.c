#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: c is the character to check
 *
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	int i;
	int value;

	for (i = 'A'; i <= 'Z'; i++)
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
