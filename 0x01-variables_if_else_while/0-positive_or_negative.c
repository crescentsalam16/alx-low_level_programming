#include <stdlib.h>
#include <time.h>
/* my project header here */
#include <stdio.h>
/* betty style */
/**
 * main - main function of my progrom
 *
 * Return: the return value is 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my conditional statements */
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	printf("\n");
	return (0);
}
