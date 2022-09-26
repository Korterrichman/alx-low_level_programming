#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to the memory area to be copied into
 * @src: memory area to copy from
 * @n: number of first bytes to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char src, unsigned int n)
{
	int s = n;

	if (s > 0)
	{
		while (s)
		{
			dest[s - 1] = src[s - 1];
			s--;
		}
	}
	return (dest);
}
