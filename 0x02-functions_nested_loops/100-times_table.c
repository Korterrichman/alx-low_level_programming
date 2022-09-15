#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: formal parameter that receives the value of the argument
 * Return: void (nothing is returned into the function)
 */

void print_times_table(int n)
{
	if ((n >= 0) && (n <= 15))
	{
		int a, b, c;

		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				c = a * b;
				_putchar(',');
				_putchar(' ');
				if (c <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else if ((c < 100) && (c > 9))
				{
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				else
				{
					_putchar((c / 100) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
