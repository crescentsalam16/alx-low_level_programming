#include "main.h"

/**
 * set_string - setting value of a pointer to a char
 * @s: pointer to pointer we need to set to
 * @to: string to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
