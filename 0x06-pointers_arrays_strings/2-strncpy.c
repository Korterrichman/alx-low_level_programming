/**
 * _strncpy - function that copies a string (at most n bytes)
 * @dest: formal parameter which is a pointer to the destination array
 * @src: formal parameter which is a pointer to the string to be copied
 * @n: maximum bytes of src to be copied
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* local variable declaration */
	int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
