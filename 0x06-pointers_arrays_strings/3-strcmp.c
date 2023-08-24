#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: First input
 * @s2: Second input
 * Return: intiger
 */
int _strcmp(char *s1, char *s2)
{
	int cmp;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			cmp = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}

	return (cmp);
}
