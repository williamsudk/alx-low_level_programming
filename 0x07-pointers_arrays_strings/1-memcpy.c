#include "main.h"
/**
 *_memcpy - This is a function that copies memory area
 *@dest: The memory area where its stored
 *@src: The memory area where its copied
 *@n: The number of bytes
 *
 *Return: The copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
