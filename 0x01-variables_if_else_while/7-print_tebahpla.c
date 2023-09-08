#include <stdio.h>

/**
 * main - main fuction  prints the lowercase alphabet in reverse
 *
 * Return: return should be 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
