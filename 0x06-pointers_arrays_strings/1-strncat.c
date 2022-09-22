#include "main.h"

/**
 * null_post - returns the index of '\0'
 * @s: the string whose null index is to be returned
 *
 * Return: the index of '\0'
 */

int null_post(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * byte - set boundary of number of characters to be used for concatenation
 * @n: number of characters
 * @s: the string to consider
 *
 * Return: The correct number of character to be appended
 */

int byte(int n, char *s)
{
	if (n > null_post(s))
		n = null_post(s);
	return (n);
}

/**
 * _strncat - concatenates two strings, using n bytes of character(s)
 * from the second string.
 * @src: the second string that will be copied to the first
 * @dest: destination string for concatenation
 * @n: Number of character(s) of src to concatenate
 *
 * Return: a pointer to the resulting string 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int num_byte = byte(n, src);
	int j = 0;
	int i = null_post(dest); /* Get index of '\0' in dest */

	while (j < num_byte)
	{
		dest[i] = *src;
		i++;
		src++;
		j++;
	}

	dest[i] = '\0'; /* append the null character to dest */

	return (dest);
}
