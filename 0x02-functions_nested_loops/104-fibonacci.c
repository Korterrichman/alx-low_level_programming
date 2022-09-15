#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	/* local variable declaration */
	unsigned long int a = 1, b = 2;
	int i;
	unsigned long int c;

	printf("%lu, %lu", a, b);
	for (i = 0; i < 96; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
