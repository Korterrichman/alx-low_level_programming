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
	long int a = 0;
	long int b = 1, i;
	long int c;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%ld, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
