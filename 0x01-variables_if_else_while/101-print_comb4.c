#include <stdio.h>
/**
 * main - Entry Point
 * Description: print all 2 digit combinations excluding duplicates
 * Return: 0 (success)
 */
int main(void)
{
	int i = 0;
	int w, z;

	while (i < 7)
	{
		w = i + 1;
		while (w < 8)
		{
			z = w + 1;
			while (z < 9)
			{
				putchar(48 + i);
				putchar(48 + w);
				z++;
				if (i < 8)
				{
					putchar(44);
					putchar(' ');
				}
			}
			w++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
