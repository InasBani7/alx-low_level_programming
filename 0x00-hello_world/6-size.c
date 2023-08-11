#include <stdio.h>
/**
 * main - Entry Point The below program prints the size of various data types
 * Return: 0 (Success)
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int w;
	float u;

	printf("Size of a char: %u byte(s)\n", sizeof(x));
	printf("Size of an int: %u byte(s)\n", sizeof(y));
	printf("Size of a long int: %u byte(s)\n", sizeof(z));
	printf("Size of a long long int: %u byte(s)\n", sizeof(w));
	printf("Size of a float: %u byte(s)\n", sizeof(u));
	return (0);
}
