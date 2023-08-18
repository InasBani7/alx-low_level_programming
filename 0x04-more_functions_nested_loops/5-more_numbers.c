#include "main.h"

/**
 *
 */
void more_numbers(void)
{
	int i, j, x;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			x = j;

			if (j >= 10)
			{
				_putchar(1 + 48);
				x = j % 10;
			}
			_putchar(x + 48);
		}
		_putchar('\n');
	}
}
