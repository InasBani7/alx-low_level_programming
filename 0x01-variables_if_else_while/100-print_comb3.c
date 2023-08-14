#include <stdio.h>
/**
 * main - Entry Point
 * Description: print all 2 digit combinations excluding duplicates
 * Return: 0 (success)
 */
int main(void)
{
	int i = 0;
	int w = 1;

	while (i < 9)
	{
		while (w < 10)
		{
			putchar(48 + i);
			putchar(48 + w);
			w++;
			if (i < 8)
                	{
				putchar(44);
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
