#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * Returns 1 and prints '+' if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints '-' if n is less than zero
 *
 * @n: formal parameter (variable) that accepts the value of the argument
 *
 * Return: 1 for positive number, 0 for zero
 * and -1 for a negative number
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
