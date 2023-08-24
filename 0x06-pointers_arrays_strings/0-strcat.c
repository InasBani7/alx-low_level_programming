#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 *  and then adds a terminating null byte.
 *
 *  @dest: input parameter 1
 *  @src: input parameter 2
 *
 *  Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int s1, s2;

	s1 = 0;
	while (dest[s1])
		s1++;

	for (s2 = 0; src[s2]; s2++)
		dest[s1++] = src[s2];
	return (dest);
}
