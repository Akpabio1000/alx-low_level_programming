#include "main.h"

/**
 * string_toupper - converts lowercase letters to uppercase letters
 * @s: string whose characters is to be converted
 *
 * ASCII VALUE CONCEPT - a lowercase letter and its corresponding uppercase
 * letter differ by 32. 32 in ASCII is [space], which is represented by ' '
 *
 * Return: string of uppercased letters
 */

char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - ' '; /* ASCII VALUE CONCEPT */
	}
	return (s);
}

