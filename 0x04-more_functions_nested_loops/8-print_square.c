#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: formal parameter that receives the value of the argument
 * Return: void (Nothing)
 */

void print_square(int size)
{
	/* local variable declaration */
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
			_putchar('#');
		_putchar('\n');
	}
}
