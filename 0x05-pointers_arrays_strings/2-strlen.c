#include "main.h"

/**
 * _strlen - gets the lecngth of the given string
 * @s: Input parameter
 * Return: the length of the given string
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
		length++;

	return (length);
}
