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
	long int a = 0, b = 1;
	long int c = 0, d = 0;

	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if ((c % 2) == 0)
			d = d + c;
	}
	printf("%ld\n", d);
	return (0);
}
