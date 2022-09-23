#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers.
 * @a: an array of integers
 * @n: number of elements of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int swap;
	int start_index = 0;
	int end_index = n - 1;

	while (start_index < end_index)
	{
		swap = a[start_index];
		a[start_index] = a[end_index];
		a[end_index] = swap;
		start_index++;
		end_index--;
	}
}

