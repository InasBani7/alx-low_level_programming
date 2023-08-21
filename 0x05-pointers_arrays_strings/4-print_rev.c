#include "main.h"

/**
 * print_rev - prints the given string reversly
 * @s: input parameter.
 */
void print_rev(char *s)
{
	int len;

	while (s[len])
		len++;

	while (len > 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
