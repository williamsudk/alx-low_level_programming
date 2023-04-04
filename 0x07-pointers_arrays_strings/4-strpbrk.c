#include "main.h"
/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: Input parameter s
 * @accept: Input parameter accept
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
