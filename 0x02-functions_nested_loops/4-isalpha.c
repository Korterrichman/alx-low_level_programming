#include "main.h"

/**
 * _isalpha - entry point
 * Description: function that checks for alphabetic character
 * whether lowercase or uppercase
 *
 * @c: formal parameter that accepts the value of the argument
 *
 * Return: 1 if c is an alphabet and 0 otherwise
 */


int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') | (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
