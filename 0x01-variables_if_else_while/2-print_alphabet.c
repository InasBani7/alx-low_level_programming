#include <stdio.h>
/**
 * main - Entry Point
 * Description: print lowercase alphabet
 * Return: 0 (success)
 */
int main(void)
{
	char alphabet[] = "abcdefghigklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
