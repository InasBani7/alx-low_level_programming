#include <stdio.h>
 /**
  * main The below program prints the size of various data types
  * Return 0 (Success)
  */
int main(void)
{
	printf("size of a char: %ld\n", sizeof(char), "byte(s)");
	printf("size of an int: %ld\n", sizeof(int), "byte(s)");
	printf("size of a long int: %ld\n", sizeof(long int), "byte(s)");
	printf("size of a long long int:: %ld\n", sizeof(long long int), "byte(s)");
	printf("size of a float: %ld\n", sizeof(float), "byte(s)");
	return (0);
}
