#include <stdio.h>
/**
 * main - Entry Point
 * Description: print lowercase and upercase alphabet
 * Return: 0 (success)
 */
int main(void)
{
        char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char ALPHABET[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i = 0;

        while (i < 26)
        {
                putchar(alphabet[i]);
                i++;
        }
	i = 0;
	while (i < 26)
        {
                putchar(ALPHABET[i]);
                i++;
        }
        putchar('\n');
        return (0);
}