#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _isnumber - function that checks if a string is made of digits
 * @str: string to check
 * Return: 0 if the string is made entirely of digits, 1 if not
 */

int _isnumber(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
	}
	return (0);
}

/**
 * print_array - function to print the array of digits ignoring the useless 0's
 * @str: string to print
 * @length: length of the string
 * Return: nothing
 */

void print_array(char *str, int length)
{
	int i = 0;

	while (str[i] == '0' && (i + 1) < length)
		i++;
	for (; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}

/**
 * _calloc - function that allocates memory and initializes it to 0
 * @num: total numbers of member in the array
 * @typesize: the size of the variable to be stored in the array
 * Return: a pointer to the allocated memory, NULL if there is an error
 */

void *_calloc(unsigned int num,unsigned int typesize)
{
	unsigned int i;
	char *tmp;
	void *ptr;

	tmp = malloc(num * typesize);
	if (tmp == NULL)
		return (NULL);
	for (i = 0; i < (num * typesize); i++)
		tmp[i] = '0';
	ptr = tmp;
	return (ptr);
}

/**
 * mul_array - function that multiplies an array of integers by a digit n
 * and place the product in the array pro
 * @a1: array to multiply
 * @len1: length of the array a1
 * @n: digit to multiply the array
 * @pro: array in which the product is to be stored
 * @lenpro: length of the product array
 * Return: a pointer to the product array
 */

char *mul_array(char *a1, int len1, char n, char *pro, int lenpro)
{
	int mul = 0, i, k;

	i = len1 - 1;
	k = lenpro;
	for (; i >= 0; i--)
	{
		mul += ((a1[i] - '0') * (n - '0')) + (pro[k] - '0');
		pro[k] = (mul % 10) + '0';
		mul /= 10;
		k--;
	}
	while (mul != 0)
	{
		mul += (pro[k] - '0');
		pro[k] = (mul % 10) + '0';
		mul /= 10;
		k--;
	}
	return (pro);
}

/**
 * main - program to multiply two numbers
 * @argc: number of arguments passed into the program
 * @argv: array that stores the pointers to the arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int len1 = 0, len2 = 0, j = 0, i;
	unsigned int lenpro;
	char *ptr;

	if (argc != 3 || _isnumber(argv[1]) == 1 || _isnumber(argv[2]) == 1)
	{
		printf("Error\n");
		exit(98);
	}
	while (argv[1][len1] != '\0')
		len1++;
	while (argv[2][len2] != '\0')
		len2++;
	lenpro = len1 + len2;
	ptr = _calloc(lenpro, sizeof(*ptr));
	if (ptr == NULL)
	{
		free(ptr);
		printf("Error\n");
		exit(98);
	}
	for (i = len2 - 1; i >= 0; i--)
	{
		ptr = mul_array(argv[1], len1, argv[2][i], ptr, (lenpro - 1 - j));
		j++;
	}
	print_array(ptr, lenpro);
	free(ptr);
	return (0);
}
