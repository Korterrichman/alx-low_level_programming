#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - function to find the length of a string
 * @str: string whose length is to be found
 * Return: length of the string
 */

unsigned int _strlen(char *str)
{
	if (*str != '\0')
		return (1 + _strlen(str + 1));
	return (0);
}

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be added from s2
 * Return: pointer that point to a newly allocated space in memory
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * If the function fails, it will return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, len1, j = 0;

	/* if array is empty */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	ptr = malloc(sizeof(*ptr) * (1 + len1 + n));
	if (ptr == NULL)
		return (NULL);

	/* copy contents of first string */
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	/* copy contents of second string */
	while (j < n)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}

