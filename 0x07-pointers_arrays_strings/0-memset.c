/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: constant byte to be filled with
 * n: number of first bytes to be filled
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/* local variable declaration */
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
