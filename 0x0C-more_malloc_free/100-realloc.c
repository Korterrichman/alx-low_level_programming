#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the former array
 * @old_size: size of the former memory block
 * @new_size: size of the new memory block to be allocated
 * Return: pointer to the reallocated memory block on SUCCESS
 * NULL on FAILURE
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *tmp, *clone;
	void *realloc;

	if (ptr == NULL)
		return (malloc(new_size));
	clone = ptr;
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	tmp = malloc(new_size);
	if (tmp == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		tmp[i] = clone[i];
	realloc = tmp;
	free(ptr);

	return (realloc);
}
