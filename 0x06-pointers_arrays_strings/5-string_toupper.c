#include "main.h"

/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 *@n: input value
 *Return: originalStr
 */
char *string_toupper(char *n)
{
char *originalStr = n;
while (*n != '\0')
{
if (*n >= 'a' && *n <= 'z')
{
*n = *n - 'a' + 'A';
}
n++;
}
return (originalStr);
}
