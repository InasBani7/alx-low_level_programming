#include <stdio.h>
/**
 * main - Entry Point
 * Description: print lowercase alphabet from z to a
 * Return: 0 (success)
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
