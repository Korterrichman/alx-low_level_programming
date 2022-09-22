/**
 * _strcmp - function that compares two strings
 * @s1: formal parameter that receives the first string
 * @s2: formal patameter that receives the second string
 * Return: a positive int if s1 > s2, negative if s1 < s2
 * and 0 if s1 = s2
 */

int _strcmp(char *s1, char *s2)
{
	/* local variable declaration */
	int i = 0;

	while (*(s1 + i) == *(s2 + i))
	{
		if (*(s1 + i) == '\0')
			return (0);
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}
