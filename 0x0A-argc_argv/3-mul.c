#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: argument count
* @argv: argument vector
*
* Return: returns the multiplication of two numbers of argv
* if two numbers are not given, it prints Error and returns 1, else 0
*/

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}

