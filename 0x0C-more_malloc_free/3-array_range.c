#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: first integer in the array
 * @max: last integer in the array
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * (1 + max - min));
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
