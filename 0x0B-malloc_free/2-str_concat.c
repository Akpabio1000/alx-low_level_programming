#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: base string
 * @s2: incoming string
 * If NULL is passed, treats it as an empty string
 *
 * Return: a pointer to a newly allocated space in memory
 * which contains the contents of s1, followed by the
 * contents of s2, and null terminated.
 * Returns NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *s1_s2;
	int i;
	int j;
	int len_s1 = 0;
	int len_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i); i++)
		len_s1++;
	for (i =  0; *(s2 + i); i++)
		len_s2++;

	len_s2++; /* allow for null terminator */

	s1_s2 = malloc(sizeof(char) * (len_s1 + len_s2)); /* mem allocation */

	if (s1_s2 == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		*(s1_s2 + i) = *(s1 + i);

	for (j = 0; j < len_s2; (j++, i++))
		*(s1_s2 + i) = *(s2 + j);

	return (s1_s2);
}

