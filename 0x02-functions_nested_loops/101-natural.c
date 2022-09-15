#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* local variable declaration */
	int a;
	int d = 0;

	for (a = 3; a < 1024; a++)
	{
		if (((a % 3) == 0) || ((a % 5) == 0))
			d = d + a;
	}
	printf("%d\n", d);
	return (0);
}
