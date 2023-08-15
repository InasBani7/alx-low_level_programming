#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: input letter
 * Return: 1 success (input is lower case)
 *         0 Fail
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
