#include "main.h"

/**
 * _puts - function that prints a string
 * @str: the string who characters is to be printed
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
