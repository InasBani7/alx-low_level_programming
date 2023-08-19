#include <stdio.h>

/**
 * _squareroot - finds out the square root of the given number
 * @y: Function Input
 * return: The squareroot of the given number
 */

double _squareroot(double y)
{
	float sqrt, z;

	sqrt = y / 2;
	z = 0;

	while (sqrt != z)
	{
		z = sqrt;
		sqrt = (y / z + z) / 2;
	}

	return (sqrt);
}


/**
 * largest_prime_factor - finds out the largest prime factor of x
 * @x: Function input
 */

void largest_prime_factor(long int x)
{
	int prime, largest;

	/* divide the smallest prime number by 2 */
	while (x % 2 == 0)
		x = x / 2;
	for (prime = 3; prime <= _squareroot(x); prime += 2)
	{
		while (x % prime == 0)
		{
			x = x / prime;
			largest = prime;
		}
	}
	if (x > 2)
		largest = x;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
