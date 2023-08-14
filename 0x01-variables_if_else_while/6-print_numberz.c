#include <stdio.h>
/**
 * main - Entry Point
 * Description: print numbers from 0 to 9
 * Return: 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}
	putchar('\n');
	return (0);
}
