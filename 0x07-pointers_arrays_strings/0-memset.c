#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: string
 * @b: the constant byte
 * @n: number of bytes to fill
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int size = n;

	for (i = 0; i < size; i++)
		s[i] = b;
	return (s);
}
