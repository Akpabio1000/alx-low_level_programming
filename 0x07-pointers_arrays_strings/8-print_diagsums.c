#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: matrix
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{

	int diagonal_left = 0;
	int diagonal_right = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diagonal_left += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diagonal_right += a[i];
	}

	printf("%d, %d\n", diagonal_left, diagonal_right);

}
