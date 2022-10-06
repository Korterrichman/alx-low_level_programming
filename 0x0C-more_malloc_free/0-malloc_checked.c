#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: number of bytes to be allocated
 * Return: a pointer to the allocated memory
 * if malloc fails, the malloc_checked function
 * would cause normal process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
