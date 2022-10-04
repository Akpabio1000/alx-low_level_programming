#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: character to initialize array with.
 * Return: NULL if size is 0, or a pointer to the array on success
 * or NULL if the returned pointer fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	if (array == NULL)
		return (NULL);
	return (array);
}



