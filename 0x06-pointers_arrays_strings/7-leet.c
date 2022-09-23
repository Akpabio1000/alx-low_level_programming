#include "main.h"

/**
 * leet - encode string into 1337
 * @s: string to encode
 *
 * Return: encoded string. e.g, leet is 1337.
 */

char *leet(char *s)
{
	char arr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replace[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (s[i] == arr[j])
				s[i] = replace[j / 2];
		}
	}
	return (s);
}


