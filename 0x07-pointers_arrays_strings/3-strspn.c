#include <stdio.h>
#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to be checked
 * @accept: accepted bytes in the initial segment of the string
 * Return:  number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	/* local variable declaration */
	unsigned int a, b, c, check;
	unsigned int i;

	for (a = 0; accept[a] != '\0'; a++)
		;
	i = 0;
	for (b = 0; s[b] != '\0'; b++)
	{
		check = 0;
		for (c = 0; c < a; c++)
		{
			if (s[b] == accept[c])
			{
				i++;
				check = 1;
			}
		}
		if (check = 0)
			return (i);
	}
	return (i);
}
