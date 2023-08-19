#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, or
 * multiples of three print Fizz,
 * for the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (!(num % 3 == 0) && num % 5 == 0)
			printf("Buzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
