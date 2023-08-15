#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @x: Function Input
 * Return: y the value of the last digit
 */
int print_last_digit(int x)
{
	int y;

	y = x % 10;
	putchar(y);
	return (y);
}
