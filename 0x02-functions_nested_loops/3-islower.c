#include "main.h"
/**
 * _islower - prints lower case characters
 *
 * @c: parameter to be checked
 * Return: 1 if it is a lower case or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
