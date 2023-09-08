#include <stdio.h>

/**
 * main - main function  prints all possible combinations of single-digit numb
 *
 * Return: should return 0
 */
int main(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
		putchar((k % 10) + '0');
		if (k == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
