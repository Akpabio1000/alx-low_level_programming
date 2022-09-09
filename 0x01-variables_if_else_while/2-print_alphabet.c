#include <stdio.h>

/**
 * main - A program that prints lower case alphabets
 * Return: returns 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
