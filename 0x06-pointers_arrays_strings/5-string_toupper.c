/**
 * string_toupper - function that changes
 * all lowercase letters of a string to uppercase
 * @a: formal parameter that receives the string to be converted
 * Return: a pointer to the final string
 */

char *string_toupper(char *a)
{
	/* local variable declaration */
	int i = 0;

	/* loop to convert lowercase char in the string to uppercase */
	while (*(a + i) != '\0')
	{
		if (*(a + i) >= 'a' && *(a + i) <= 'z')
			*(a + i) = *(a + i) - 32;
		i++;
	}
	return (a);
}
