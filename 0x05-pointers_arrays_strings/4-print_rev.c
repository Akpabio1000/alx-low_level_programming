#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: the string to be reversed
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	/* set pointer to the character just before the NULL character */
	s--;
	for (i = len ; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
