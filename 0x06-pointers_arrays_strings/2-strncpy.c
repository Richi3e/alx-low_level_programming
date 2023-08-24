#include "main.h"

/**
 *_strncpy - copy a string
 *@dest: input value
 *@src: input value
 *@n: input value
 *Return: originalDest
 */

char *_strncpy(char *dest, char *src, int n)
{
char *originalDest = dest;
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

while (n > 0)
{
*dest = '\0';
dest++;
n--;
}

return (originalDest);
}
