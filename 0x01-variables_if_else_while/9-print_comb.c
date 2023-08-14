#include <stdio.h>
/**
 * main - Entry Point
 * Description: print numbers from 0 to 9 seperated by ", "
 * Return: 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		if (i < 9)
		{
			putchar(44);
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
