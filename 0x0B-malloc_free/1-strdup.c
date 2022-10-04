#include <stdio.h>
#include <stdlib.h>

/**
 * length - function to find the length of a string
 * @str: pointer to the string
 * Return: length of the string
 */

int length(char *str)
{
	if (*str != '\0')
		return (1 + length(str + 1));
	return (0);
}

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: string to be copied
 * Return: pointer to the copied string in memory
 */

char *_strdup(char *str)
{
	int i = 0, size;
	char *p;

	if (str == NULL)
		return (NULL);
	size = length(str);
	p = malloc(sizeof(char) * (size + 1);
	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0'
	return (p);
}
