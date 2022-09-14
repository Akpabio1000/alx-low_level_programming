#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * print_alphabet - Prints the alphabets in lowercase
 * Return: returns nothing
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - prints lowercase alphabets ten times
 * Return: returns nothing
 */
void print_alphabet_x10(void);

/**
 * _islower - checks for lowercaser character
 * @c: The character to check
 *
 * Return: returns 1 if c is lowercase
 * otherwise, returns 0
 */
int _islower(int c);

/**
 * _isalpha - checks if arg is an alphabetic character
 * @c: The character to check
 *
 * Return: returns 1 if c is a letter, lowercase and uppercase
 * otherwise, returns 0
 */
int _isalpha(int c);

/**
 * print_sign(int n) - examine the sign of a number
 * @n: n is the number to examine
 *
 * Return: '+', '0' or '-' if n is postive, zero or negative respectively
 */
int print_sign(int n);

/**
 * _abs(int) - computes the absolute value of an integer
 * Return: returns 0
 */
int _abs(int);


/**
 * print_last_digit(int) - prints the last digit of a number
 * Return: returns the value of the last digit
 */
int print_last_digit(int);

/**
 * jack_bauer - print every minute from 00:00 to 23:59
 * Return: returns 0
 */
void jack_bauer(void);





#endif
