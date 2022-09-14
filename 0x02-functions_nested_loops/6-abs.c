#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n: formal parameter (variable) that receives the value of the argument
 *
 * Return: the absolute value of the integer
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (0 - n);
}
