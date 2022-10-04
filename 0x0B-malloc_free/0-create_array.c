#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: size of array to be created
 * @c: character to be initialized to
 * Return: NULL if size = 0
 * pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
		/* local declaration of variables */
		unsigned int i = 0;
		char *p;

		p = malloc(sizeof(char) * size);
		if (p == NULL)
			return (NULL);
		while (i < size)
		{
			p[i] = c;
			i++;
		}
		return (p);
	}
	return (NULL);
}
