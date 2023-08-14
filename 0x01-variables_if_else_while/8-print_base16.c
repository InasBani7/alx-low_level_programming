#include <stdio.h>
/**
 * main - Entry Point
 * Description: print Hexadecimals upto f in lowercase
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
	i = 97;
	while (i < 103)
	{
		putchar(48 + i);
		i++;
	}
	putchar('\n');
	return (0);
}
