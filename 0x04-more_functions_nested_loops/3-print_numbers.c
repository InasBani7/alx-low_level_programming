#include "main.h"

/**
 * print_most_numbers -  prints the numbers, from 0 to 9.
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
