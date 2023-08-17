#include "main.h"
/**
 * print_times_table - Prints the times tabel of the given input n
 * @n: Function input
 */
void print_times_table(int n)
{
	int x = 0; /* Row */
	int y = 0; /* Column */
	int z = x * y;

	while (x <= n)
	{
		while (y <= n)
		{

			_putchar(z);
			if (y != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
