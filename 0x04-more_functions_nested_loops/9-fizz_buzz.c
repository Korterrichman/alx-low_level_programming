#include <stdio.h>

/**
 * main - program that prints the numbers from 1 to 100, followed by a new line
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 * Return: always 0 (On Success)
 */

int main(void)
{
	/* local variable declaration */
	int n;

	printf("%d", 1);
	for (n = 2; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf(" FizzBuzz");
		else if (n % 3 == 0)
			printf(" Fizz");
		else if (n % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", n);
	}
	printf("\n");
	return (0);
}
