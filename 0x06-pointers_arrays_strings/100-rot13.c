#include "main.h"

/**
 * rot13 - encodes string using rot13
 * @s: string to encode
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 56; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = n[j];
				break;
			}
		}
	}

	return (s);
}
