#include "main.h"

/**
 * _isdigit - checks digits from 0 to 9
 * @c: Function Input
 * Return: 1 (If c i a digit), 0 (Otherwise)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
