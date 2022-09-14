#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: formal parameter (variable) that receives the value of the argument
 *
 * Return: last digit of the number
 */

int print_last_digit(int n)
{
	int d;

	if (n >= 0)
	{
		d = n % 10;
		_putchar(d + '0');
		return (d);
	}
	else
	{
		n = -1 - n;
		d = n % 10;
		d = d + 1;
		_putchar(d + '0');
		return (d);
	}
}
