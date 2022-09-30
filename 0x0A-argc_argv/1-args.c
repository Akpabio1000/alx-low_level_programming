#include <stdio.h>

/**
 * main - a programs that prints the number of argument
 * the program name is not counted
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
