#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: formal parameter that receives the value of the argument
 * Return: void (Nothing)
 */

void print_diagonal(int n)
{
	/* local variable declaration */
	int a, i;

	for (a = 0; a < n; a++)
	{
		for (i = 0; i < a; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
