#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: input value, string
 * Return: length
 */
int _strlen(char *s)
{
int a = 0;

while (*s != '\0')
{
a++;
s++;
}

return (a);
}
