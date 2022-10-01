#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main: program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success and 1 for error
 */

int main(int argc, char *argv[])
{
	/* condition for multiplication */
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
