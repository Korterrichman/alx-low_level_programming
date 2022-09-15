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
	long int a = 1, b = 2;
	int i;
	long int c;

	printf("%ld, %ld", a, b);
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
