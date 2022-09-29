#include "main.h"

/**
 * helper - function that helps to check if the value are divisible
 * @i: number to check if it is divisible
 * @n: the number to check whether it is prime or not
 * Return: 1 if prime and 0 otherwise
 */

int helper(int i, int n)
{
	if (i >= n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (helper(i + 1, n));
}

/**
 * is_prime_number - function that checks for a prime number
 * @n: number to check
 * Return: 1 if prime and 0 otherwise
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (helper(i, n));
}
