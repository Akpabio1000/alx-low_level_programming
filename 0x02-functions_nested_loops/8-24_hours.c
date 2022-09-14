#include "main.h"

/**
 * jack_bauer - prints every minute of a clock from 00:00 to 23:59
 *
 * Return: returns nothing
 */

void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			/* print tens and ones of hour */
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');

			_putchar(':');

			/* print tens and ones of minutes */
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
