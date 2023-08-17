#include "main.h"
/**
 * print_times_table - Prints the times tabel of the given input n
 * @n: Function input
 */
void print_times_table(int n)
{
	int x = 0; /* Row */
	int y = 0; /* Column */
	int z;

	while (x <= n)
	{
		while (y <= n)
		{
			z = x * y;

			if (z >= 100)
			{
				_putchar((z / 100) + 48);
				_putchar((z / 10) + 48);
			}
			else if ((z >= 10) && (z < 100))
				_putchar((z / 10) + 48);
			_putchar((z % 10) + 48);

			if (y < n)
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
