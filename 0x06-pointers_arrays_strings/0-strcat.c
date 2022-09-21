/**
 * _strcat - function that concatenates two strings
 * @dest: formal parameter that receives the pointer of the first string
 * @src: formal parameter that receives the pointer of the string to be added
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (*(dest + len) != '\0')
		len++;
	while (*(src + i) != '\0')
	{
		*(dest + len) = *(src + i);
		len++;
		i++;
	}
	return (dest);
}
