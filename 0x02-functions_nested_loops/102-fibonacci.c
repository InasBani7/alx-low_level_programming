# include <stdio.h>

/**
 * main - Entry point
 * Description: prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long f1 = 0, f2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f1 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
