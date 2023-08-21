#include "main.h"

/**
 * puts2 - prints every other character
 * @str: Input
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		
		_putchar(str[i]);
	
	}
	_putchar('\n');
}
