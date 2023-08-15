#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: Function input
 * Return: 1 input is Alphabet character
 *         0 input is not alphabet character
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	return (0);
}
