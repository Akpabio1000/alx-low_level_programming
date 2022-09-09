#include <stdio.h>

/**
 * main - A program that prints lower and uppercase alphabets
 * Return: returns 0
 */

int main(void)
{
	char letter;
	char LETTER;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (LETTER = 'A'; LETTER <= 'Z'; LETTER++)
		putchar(LETTER);
	putchar('\n');
	return (0);
}
