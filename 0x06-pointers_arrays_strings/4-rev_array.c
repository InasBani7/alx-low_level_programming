#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: input
 * @n: array size
 */
void reverse_array(int *a, int n)
{
	int i, j, w;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		w = a[i];
		a[i] = a[j];
		a[j] = w;
	}
}
