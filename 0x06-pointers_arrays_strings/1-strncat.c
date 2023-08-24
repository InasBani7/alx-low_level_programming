#include "main.h"

/**
 * _strncat - concatenates input strings and use at most n bytes from src;
 * and src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: input string
 * @src: input string
 * @n: input integer
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s1, s2;

	s1 = 0;

	while (dest[s1])
		s1++;

	for (s2 = 0; s2 < n && src[s2] != '\0'; s2++)
		dest[s1 + s2] = src[s2];
	dest[s1 + s2] = '\0';

	return (dest);
}
