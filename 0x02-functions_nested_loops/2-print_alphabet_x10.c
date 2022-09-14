#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 * in lowercase, followed by a new line (entry point)
 *
 * both parameter and return values are void
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
