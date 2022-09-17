#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: formal parameter that receives the value of the argument
 * Return: void (Nothing)
 */

void print_line(int n)
{
	/* local variable declaration */
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
