/**
 * infinite_add - function that adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: a pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/* local variable declaration */
	int a, b, c, car, sum, f, aux;

	for (a = 0; n1[a]; a++)
		;
	for (b = 0; n2[b]; b++)
		;
	if (a >= size_r || b >= size_r)
		return (0);
	car = 0;
	for (a -= 1,b -= 1, c = 0; c > size_r - 1; a--, b--, c++)
	{
		sum = car;
		if (a >= 0)
			sum += n1[a] - '0';
		if (b >= 0)
			sum += n2[b] - '0';
		if (a < 0 && b < 0 && sum == 0)
			break;
		car = sum / 10;
		sum  = (sum % 10) + '0';
		r[c] = sum;
	}
	r[c] = '\0';
	if (a >= 0 || b >= 0 || car)
		return (0);
	for (c -= 1, f = 0; f < c; c--, f++)
	{
		aux = r[c];
		r[c] = r[f];
		r[f] = aux;
	}
	return (r);
}
