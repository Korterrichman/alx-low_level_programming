/**
 * cap_string - function that capitalizes all words of a string
 * @a: formal parameter(pointer) that receives the string (address)
 * Return: a pointer to the modified string
 */

char *cap_string(char *a)
{
	/* local variable declaration */
	int i = 0, j;

	char spe[13] = {' ', '\t', '\n', ',', ';',
		'.', '!', '?', '"', '(', ')', '{', '}'};

	while (*(a + i) != '\0')
	{
		if (i == 0 && *(a + i) >= 'a' && *(a + i) <= 'z')
			*(a + i) -= 32;
		j = 0;
		while (j < 13)
		{
			if (*(a + i) == spe[j])
			{
				if (*(a + i + 1) >= 'a' && *(a + i + 1) <= 'z')
				{
					*(a + i + 1) -= 32;
					break;
				}
			}
			j++;
		}
		i++;
	}
	return (a);
}
