#include "main.h"

/**
 * print_line - Prints a staight line in the terminal
 * @n: Function Input
 */
void print_line(int n)
{
	if (n == 0)
		_putchar('\n');
	else
		for (int i = 0; i < n; i++)
		{
			_putchar('_');
		}
}
