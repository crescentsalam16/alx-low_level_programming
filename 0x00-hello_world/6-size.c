#include <stdio.h>
/**
 * main - to print sizes of data types
 *
 * Return: if succesful, return 0
 */
int main(void)
{
	int A;
	float B;
	char C;
	long int D;
	long long int E;

	printf("Size of a char: %lu byte(s)\n", sizeof(C));
	printf("Size of an int: %lu byte(s)\n", sizeof(A));
	printf("Size of a long int: %lu byte(s)\n", sizeof(D));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(E));
	printf("Size of a float: %lu byte(s)\n", sizeof(B));
	return (0);

}
