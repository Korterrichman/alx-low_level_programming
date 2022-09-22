/**
 * leet - function that encodes a string into 1337
 * @a: formal parameter that receives the pointer to the string
 * Return: pointer to the encoded string
 */

char *leet(char *a)
{
	/* local variable declaration */
	int i, j;

	char *k = "aAeEoOtTlL";
	char *l = "4433007711";

	for (i = 0; a[i] != 0; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == k[j])
				a[i] = l[j];
		}
	}
	return (a);
}
