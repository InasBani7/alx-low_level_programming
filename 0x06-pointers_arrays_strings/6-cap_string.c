#include <stdio.h>
#include "main.h"

/**
 * islower - hecks for lower cases.
 * @c: Input character.
 * return: 1 if input is lower, 0 if input is not.
 */
int IsLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isseperator - checks if a character is a seperator
 * @c: input
 * Return: 1 if tru, 0 if false
 */

int isseperator(char c)
{
	int i;
	char seperator[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == seperator[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 * Return: Capitalized words
 */
char *cap_string(char *s)
{
	char *p = s;
	int seperatorcheck = 1;

	while (*s)
	{
		if (isseperator(*s))
			seperatorcheck = 1;
		else if (IsLower(*s))
		{
			*s -= 32;
			seperatorcheck = 0;
		}

		else
			seperatorcheck = 0;
		s++;
	}

	return (p);
}





