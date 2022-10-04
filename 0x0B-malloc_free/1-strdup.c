#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: The string that will be duplicated
 *
 * Return: On success, a pointer to a new string which a
 * duplicate of the string str.
 * Returns NULL if str=NULL or if insufficient memory is available
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str = str - len; /* points back to base address */
	
	len++; /* allow for null character */

	duplicate = malloc(sizeof(char) * len);

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
