#include <stdio.h>

/**
 * main - main fuction is to print alphabelt in lower and uper cases
 *
 * Return: return should be 0 value
 */

int main(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
		putchar(j);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
