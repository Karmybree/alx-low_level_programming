#include <stdio.h>

/**
 * main - Prints the sie of various typesa based on
 * the computer it is compiled and run on..
 * Return: Always 0.
 */

int main(void)

{
	printf("sie of a char: %zu byte(s)\n", sizeof(char));

	print("Size of an int: %zu byte(s)\n", sizeof(int));
	print("Size of a long int: %zu byte(s)\n", sizeof(long int));
	print("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	print("Size of a float %zu byte(s)\n", sizeof(float));
	return (0);
}

