#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @x: Function Input
 * Return: y the value of the last digit
 */
int print_last_digit(int x)
{
	int y;

	if (n < 0)
		y = -( x % 10);
	else
		y = x & 10;

	putchar(y + '0');
	return (y);
}
