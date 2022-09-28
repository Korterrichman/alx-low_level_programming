#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string whose length is to be calculated
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (s[1] == '\0')
		return (1);
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
