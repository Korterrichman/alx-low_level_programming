#include <stdio.h>
#include "main.h"

/**
 * _strchr - locate 1sr occurence of char in string and returns pointer there
 * @s: string to search
 * @c: target character
 * Return: pointer to that character in string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
