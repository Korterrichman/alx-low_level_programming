#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers
 * from n to 98, followed by a new line
 *
 * @n: formal parameter that receives the value of the argument
 *
 * Return: void (Nothing is returned to the function)
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	printf("\n");
}
