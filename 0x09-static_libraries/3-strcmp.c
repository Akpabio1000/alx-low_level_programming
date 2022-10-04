#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * The function works exactly like the strcmp in <string.h>
 *
 * Return: 0 if strings are the same; negative integer, if the first
 * different character in s1 has an ASCII value lower than that of s2,
 * otherwise, positive integer.
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int res;

	for (i = 0; *(s1 + i); i++)
	{
		if (*(s1 + i)  == *(s2 + i))
			res = 0;
		else
		{
			res = *(s1 + i) - *(s2 + i);
			break;
		}
	}
	return (res);
}

