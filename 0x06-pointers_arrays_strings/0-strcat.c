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
 * _strcat - concatenates two strings
 * @src: the string that will be copied
 * @dest: destination string for concatenation
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = null_post(dest); /* Get index of '\0' in dest */

	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0'; /* append the null character to dest */

	return (dest);
}
