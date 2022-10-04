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
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to a new string, or NULL if it fails
 * NULL if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	/* local variable declaration */
	int size = 0, k = 0, i, j;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		size += length(av[i]);

	/* memory allocation for all the strings characters */
	p = malloc(sizeof(char) * (size + ac + 1));

	if (p == NULL)
		return (NULL);
	/* copy contents of arguments to the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}
