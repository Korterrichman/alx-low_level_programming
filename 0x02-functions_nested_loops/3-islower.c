#include "main.h"

/**
 * _islower - entry point
 * Description: function that checks for lowercase character
 *
 * @c: formal parameter that accepts the value of the argument
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
