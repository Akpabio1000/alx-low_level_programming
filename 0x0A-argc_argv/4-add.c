#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if each character is a digit
 * @str: string to check
 * Return: 1 if all characters are digits, otherwise 0
 */

int is_digit(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
	}
	return (1);
}

/**
* main - adds numbers
* @argc: argument count
* @argv: argument vector
*
* Return: returns 0 if no number is given; Error if a non-digit is given,
* returning 1; otherwise, prints sum and return 0.
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	/* argc is 1 if only the program name is inputted */

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	/**
	 * loop through argv, passing each argument
	 * as s string to is_digit.
	 * is_digit checks each character present in the 
	 * string passed
	 */

	for (i = 1; i < argc; i++)
	{
		if (!(is_digit(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}

