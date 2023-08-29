#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *@dest: memory is stored
 *@src: memory where is copied
 *@n: number of bytes
 *Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int b = 0;
	int i = n;

	for (; b < i; b++)
	{
		dest[b] = src[b];
		n--;
	}
	return (dest);
}
