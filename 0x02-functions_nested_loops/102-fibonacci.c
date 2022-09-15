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
	int a = 0;
	int b = 1;
	int c, i;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
