#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Returns: Always 0 (Success)
 */

int main(void)
{
	/* local variable declaration */
	int a = 3;
	int b = 5;
	int c, d, e;

	/* highest multiple of 3 and 5 below 1024 */
	int la = 1023;
	int lb = 1020;

	/* numbers of multiples of 3 and 5 below 1024 (ha/a & hb/b) */
	int na = 341;
	int nb = 204;

	/* sum of all multiples of n where the last number is known is
	   S = [(n * (first_no + last_no))/2]
	   c = sum of multiples of 3, d = sum of multiples of 5,
	   e = sum of multiples of 3 or 5 */
	c = ((na * (a + la))/2);
	d = ((nb * (b + lb))/2);
	e = c + d;
	printf("%d\n", e);
	return (0);
}
