#include "main.h"

/**
 * helper - checks if their is a root and returns if there is
 * @i: integer to guess
 * @n: integer to get root of
 * Return: value of root or -1 if none is found
 */

int helper(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i > n)
		return (-1);
	return (helper(i + 1, n));
}

/**
 * _sqrt_recursion -function that returns square root
 * @n: integer to find root of
 * Return: return int of squareroot or -1 if none is found
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	return (helper(i, n));
}
