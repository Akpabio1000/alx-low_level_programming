#include "main.h"

/**
 * _memcpy - Copies the memory area
 * @dest: destination area
 * @src: source area
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;
	int i;

	for (i = 0; i < size; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
