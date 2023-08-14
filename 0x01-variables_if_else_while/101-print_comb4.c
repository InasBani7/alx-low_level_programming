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

	while (i < 8)
	{
		w = i + 1;
		while (w < 9)
		{
			z = w + 1;
			while (z < 10)
			{
				putchar(48 + i);
				putchar(48 + w);
				putchar(48 + z);
				z++;
				if (i + w + z != 24)
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
