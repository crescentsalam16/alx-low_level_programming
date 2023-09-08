#include <stdio.h>

/**
 * main - main fuction is to print digit using putchar
 *
 * Return: return value should be 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar(x + '0');
	putchar('\n');
	return (0);
}
