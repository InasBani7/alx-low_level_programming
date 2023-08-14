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
		putchar(48 + i);
		putchar(48 + w);
		if (i < 8)
		{
			putchar(44);
			putchar(' ');
		}
		i++;
		w++;
	}
	putchar('\n');
	return (0);
}
