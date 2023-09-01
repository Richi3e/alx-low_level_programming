#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: inpurt value(memory address)
 * @b: input value(desired value)
 * @n: number of bytes to be changed
 *
 * Return: changed array, new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
