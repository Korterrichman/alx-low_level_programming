#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to the allocated memory
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;
	char *tmp;

	/* if there are no elements or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	tmp = ptr;
	/* initialize each block of memory to zero */
	for (i = 0; i < (nmemb * size); i++)
		tmp[i] = 0;
	return (ptr);
}
