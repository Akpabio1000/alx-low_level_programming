#include "main.h"

/**
 * _strncpy - copies n characters from a second string into a first string.
 * @dest: the string in which the character is to be copied into.
 * @src: the string whose character is to be copy
 * @n: number of characters to be copied.
 *
 * The characters from src are copied into dest from left to right.
 * if n is greater than the available characters in src that ought
 * to be copied, then the trailing spaces in dest are filled with
 * NULL characters ('\0')
 *
 * Return: dest string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; *(src + i) && i < n; i++) /* exit when src points to NULL */
		*(dest + i) = *(src + i);    /* or i = n */
	/* Append NULL characters to fill up trailing spaces in dest */
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}

