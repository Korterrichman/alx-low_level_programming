#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: first inout integer pointer
 * @b: second input integer pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
