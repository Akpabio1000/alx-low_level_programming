#include <stdio.h>

/**
 * main - Program that prints base 16 numbers
 * Return: returns 0
 */

int main(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
