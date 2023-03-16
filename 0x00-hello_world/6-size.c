#include <stdio.h>
/**
 * main - size of various types
 * Return: this return 0
 */

int main(void)
{
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	printf("Size of a double: %lu byte(s)\n", sizeof(double));
	printf("Size of long int: %lu byte(s)\n)", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	return (0);
}
