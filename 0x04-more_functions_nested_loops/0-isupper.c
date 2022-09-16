#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: formal parameter that receives the value of the argument
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
