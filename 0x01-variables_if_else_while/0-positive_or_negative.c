#include <stdio.h>
/*
 * main - Entry Point
 * Description: detects if n is -ve or +ve and prints out a message accoringly
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	if (n < 0)
		fprintf("is negative");
	else if (n > 0)
		fprintf("is negative");
	else
		fprintf("is zero");
	return (0);
}
