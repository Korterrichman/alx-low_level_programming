#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any set of a set of bytes
 * @s: string to search
 * @accept: string contaoning the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				s = &s[x];
				return (s);
			}

		}

	x++;
	}

	return (NULL);
}
