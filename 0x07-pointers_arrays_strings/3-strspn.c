#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: the string
 * @accept: the string whose character is to match s
 *
 * Return: number of characters in s which consist only of characters in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int matches = 0;
	while (*(s + i))
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				matches++;
				break;
			}
			if (*(accept + j + 1) == '\0' && *(s + i) != *(accept + j))
				return (matches);
		}
		i++;
	}
	return (matches);
}
