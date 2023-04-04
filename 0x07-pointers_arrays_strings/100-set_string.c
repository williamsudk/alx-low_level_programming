#include "main.h"

/**
 * set_string - Function that sets the value of a pointer to a char
 * @s: pointer to pointer parameter
 * @to: pointer char parameter
 */

void set_string(char **s, char *to)
{
	*s = to;
}
