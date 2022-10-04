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
 * str_concat - function that concatenates two strings
 * @s1: first string to be copied
 * @s2: second string to add to the first
 * Return: pointer to the concatenated string in memory, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size1, size2;
	char *p;

	/* if the string is empty */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = length(s1);
	size2 = length(s2);

	/* memory allocation */
	p = malloc(sizeof(char) * (size1 + size2 + 1));
	if (p == NULL)
		return (NULL);

	/* concatenation */
	while (i < size1)
	{
		p[i] = s1[i];
		i++;
	}
	while (i <= size1 + size2)
	{
		p[i] = s2[j];
		j++;
		i++;
	}
	return (p);
}
