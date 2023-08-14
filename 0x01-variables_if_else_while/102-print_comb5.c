#include <stdio.h>
/**
 * main - Entry Point
 * Description: prints all possible different combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;
	int w;

	while (x <= 99)
	{
		w = x;
		while (w <= 99)
		{
			if (w != x)
			{
				putchar(48 + (x / 10));
				putchar(48 + (x % 10));
				putchar(' ');
				putchar(48 + (w / 10));
				putchar(48 + (w % 10));

				if (x != 98 || w != 99)
				{
					putchar(' ');
					putchar(' ');
				}
			}
			w++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
