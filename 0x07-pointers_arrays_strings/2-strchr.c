#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string
 * @c: the character to locate
 *
 * Return: a pointer to the first occurence of the character c,
 * in the string s, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s && *s != c)
	{
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
