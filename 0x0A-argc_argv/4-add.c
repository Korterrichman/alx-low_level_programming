#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success and 1 for error
 */

int main(int argc, char *argv[])
{
	/* local variable declaration */
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}

	printf("%d\n", 0);
	return (0);
}
