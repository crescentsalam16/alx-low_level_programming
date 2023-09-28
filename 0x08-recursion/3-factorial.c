#include "main.h"

/**
 * factorial - finds and returns the factorial of a given number
 * @n: number to find its factorial value
 *
 * Return: factorial value of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
