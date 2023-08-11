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

	printf("size of a char: %lu byte(s)\n", sizeof(x));
	printf("size of an int: %lu byte(s)\n", sizeof(y));
	printf("size of a long int: %lu byte(s)\n", sizeof(z));
	printf("size of a long long int: %lu byte(s)\n", sizeof(w));
	printf("size of a float: %lu byte(s)\n", sizeof(u));
	return (0);
}
