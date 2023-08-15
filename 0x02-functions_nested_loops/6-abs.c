#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: Function Input
 * Return: n (The Absulote value of the input)
 */

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	return (n);
}
