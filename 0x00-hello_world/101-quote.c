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
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fputs(quote, stdout);
	fputs("\n", stdout);
	return (1);
}
