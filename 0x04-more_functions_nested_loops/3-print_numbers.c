#include "main.h"

/**
 * print_most_numbers -  prints the numbers, from 0 to 9.
 */

void print_numbers(void)
{
	int i = 0;

	while (i >= 0 && i <= 9)
	{
		_putchar(i + 48);

	}
	_putchar('\n');
}
