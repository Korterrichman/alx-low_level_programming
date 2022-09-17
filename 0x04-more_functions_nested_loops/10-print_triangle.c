#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: formal parameter that receives the
 * value of the argument (size of the triangle)
 * Return: void (Nothing)
 */

void print_triangle(int size)
{
	/* local variable declaration */
	int a = 1, b = size - 1;
	int c, d;

	if (size <= 0)
		_putchar('\n');

	while (a + b == size && b >= 0 && a <= size)
	{
		for (c = b; c > 0; c--)
			_putchar(' ');
		for (d = a; d > 0; d--)
			_putchar('#');
		a++;
		b--;
		_putchar('\n');
	}
}
