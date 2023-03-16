#include <stdio.h>

/**
 * main - all the sizes of all various types
 *
 * Return 0
 */

int main(void)
{
	printf("Size of a char: %lu bytes(s)", sizeof(char));
	printf("Size of an int: %lu bytes(s)", sizeof(int));
	printf("Size of a long int: %lu bytes(s)", sizeof(long int));
	printf("Size of a long long int: %lu bytes(s)", sizeof(long long int));
	printf("Size of a float: %lu bytes(s)", sizeof(float));
	return (0);
}
