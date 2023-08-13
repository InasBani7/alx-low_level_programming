#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - Entry Point
 * Description: detects if n is -ve or +ve and prints out a message accoringly
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		fprintf("%i is negative\n",n);
	else if (n > 0)
		fprintf("%i is negative\n",n);
	else
		fprintf("%i is zero\n",n);
	return (0);
}
