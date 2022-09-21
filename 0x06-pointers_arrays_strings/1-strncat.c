/**
 * _strncat - function that concatenates two strings
 * using at most n bytes from src
 * @dest: formal parameter that receives the pointer of the first string
 * @src: formal parameter that receives the pointer of the string to be added
 * @n: maximum bytes to be used from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (*(dest + len) != '\0')
		len++;
	while (*(src + i) != '\0' && i < n)
	{
		*(dest + len) = *(src + i);
		len++;
		i++;
	}
	return (dest);
}
