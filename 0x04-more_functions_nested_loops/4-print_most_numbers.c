#include "main.h"

/**
 * print_most_numbers - function that prints the numbers
 * from 0 to 9 excluding 2 and 4, followed by a new line
 *
 * Return: void (Nothing)
 */

void print_most_numbers(void)
{
	/* local variable declaration */
	int n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
		n++;
	}
	_putchar('\n');
}
