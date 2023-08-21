#include "main.h"

/**
 * swap_int - swaps the value of the two inputs a & b
 * @a: First input parameter
 * @b: Second Input Parameter
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
