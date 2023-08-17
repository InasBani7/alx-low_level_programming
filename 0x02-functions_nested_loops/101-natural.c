#include <stdio.h>

/**
 * main - Entry Point
 * Description: prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 (Success)
 */

int main(void)
{
	int x; /*sum*/
	int i; /* iterations*/

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			x = x + i;
	}

	printf("%d\n", x);

	return (0);
}
