#include "main.h"

/**
 * puts2 - prints every other character
 * @str: Input
 *
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str = str + 2;
	}
	_putchar('\n');
}
