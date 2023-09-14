#include <stdio.h>
/**
 * main - Prints the  biggest prime factor of 612852475143
 * Return:return value should be 0.
 */
int main(void)
{
	long k;
	long num = 612852475143;

	for (k = 2; k < num; k++)
	{
		if (num % k == 0)
			num /= k;
	}
	printf("%li\n", num);
	return (0);
}
