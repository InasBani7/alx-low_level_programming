#include <stdio.h>
/**
 * main - Entry Point
 * Description: The below program prints the size of various data types
 * Return 0 (Success)
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int w;
	float u;

	printf("size of a char: %u\n", sizeof(x), "byte(s)");
	printf("size of an int: %u\n", sizeof(y), "byte(s)");
	printf("size of a long int: %u\n", sizeof(z), "byte(s)");
	printf("size of a long long int:: %u\n", sizeof(w), "byte(s)");
	printf("size of a float: %u\n", sizeof(u), "byte(s)");
	return (0);
}
