#include <stdio.h>
/**
 *  main -main function is to print all alpha without e and q
 *  Return: should return 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		if (x != 'e' && x != 'q')
			putchar(x);
	putchar('\n');
	return (0);
}
