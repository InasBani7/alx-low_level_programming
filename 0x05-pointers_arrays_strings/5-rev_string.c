#include "main.h"

/**
 *
 */

void rev_string(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	while (len--)
	{
		_putchar(s[len]);
	}
}
