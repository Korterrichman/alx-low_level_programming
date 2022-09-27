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
	unsigned int a, b, c;
	unsigned int i;

	for (a = 0; accept[a] != '\0'; a++)
		;
	i = 0;
	for (b = 0; s[b] != '\0'; b++)
	{
		for (c = 0; c < b; c++)
		{
			if (s[b] == accept[c])
			{
				i++;
			}
		}
		if (b >= i)
			return (i);
	}
	return (i);
}
