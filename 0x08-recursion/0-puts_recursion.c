#include "main.h"

/**
 * _puts_recursion - that prints a string, followed by a new line
 * @s: pointer to the string to be printed
 * Return: void (Nothing)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
