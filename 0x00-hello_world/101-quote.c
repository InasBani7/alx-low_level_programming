#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry Point
 * Description: This program prints the below quote using fput function.
 *
 * Return: 1 (Success)
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}