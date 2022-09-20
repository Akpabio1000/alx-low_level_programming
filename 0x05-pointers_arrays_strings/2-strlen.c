#include "main.h"

/**
 * _strlen - function tht returns the length of a string
 * @s: the string whose length is to be returned
 *
 * Return: return (length)
 */

int _strlen(char *s)
{
	int size;

	size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}

	return (size);
}
