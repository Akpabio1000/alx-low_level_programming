#include <stdio.h>

/**
 * main - Different combinations with two digits, no repetition of digits
 * Description: digit is ij
 *
 * Return: return 0
 */

int main(void)
{
	int i;
	int j;

	i = '0';

	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			putchar(i);
			putchar(j);

			if (i != '8' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
