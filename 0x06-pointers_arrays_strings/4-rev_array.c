/**
 * reverse_array - function that reverses the content of an array of integers
 * @a:formal parameter that receives the pointer to the array
 * @n: number of elements of the array
 * Return: void (nothing)
 */

void reverse_array(int *a, int n)
{
	/* local variable declaration */
	int i = 0, aux;

	/* loop to interchange and reverse the value of the array */
	while (i < --n)
	{
		aux = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = aux;
		i++;
	}
}
