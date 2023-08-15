#include "main.h"

/**
 * main - Entry point
 * Description: Prints "_putchare" using the user defined function putchar
 * Return: 0 (Success)
 */

int main(void)
{
	char put[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(put[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
