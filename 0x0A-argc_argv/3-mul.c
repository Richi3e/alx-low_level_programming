#include <stdio.h>
#include "main.h"

/**
 * _atom - converts a string to an integer
 * @s: string to be converted
 *
 * Return: converted int
 */
int _atom(char *s)
{
int a, d, n, b, f, digit;

a = 0;
d = 0;
n = 0;
b = 0;
f = 0;
digit = 0;

while (s[b] != '\0')
b++;

while (a < b && f == 0)
{
if (s[a] == '-')
	++d;

if (s[a] >= '0' && s[a] <= '9')
{
digit = s[a] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
f = 0;
}
a++;
}

if (f == 0)
return (0);

return (n);
}

/**
 * main - multiplies two numbers
 * @argc: input value(number of arguments)
 * @argv: input value(array of arguments)
 *
 * Return: 0, 1
 */
int main(int argc, char *argv[])
{
int result, num1, num2;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}

num1 = _atom(argv[1]);
num2 = _atom(argv[2]);
result = num1 *num2;

printf("%d\n", result);

return (0);
}
