#include "main.h"

/**
 * more_numbers - function that prints the numbers
 * from 0 to 14, followed by a new line (ten times)
 *
 * Return: void (Nothing)
 */

void more_numbers(void)
{
	/* local variable declaration */
	int n, i;

	for (i = 0; i < 10; i++)
	{
		n = 0;

		while (n <= 14)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			n++;
		}
		_putchar('\n');
	}
}
