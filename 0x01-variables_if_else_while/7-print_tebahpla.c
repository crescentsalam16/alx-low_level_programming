#include <stdio.h>

/**
 * main - main fuction is to print base16 char in lowercase
 *
 * Return: return should be 0
 */

int main(void)
{
	int N;
	char alpha;

	for (N = 0; N < 10; N++)
		putchar((N % 10) + '0');

	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
