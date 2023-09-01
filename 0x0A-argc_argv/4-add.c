#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check string
 * @str: array str
 *
 * Return: 0
 */
int check_num(char *str)
{
unsigned int a;

a = 0;
while (a < strlen(str))
{
if (!isdigit(str[a]))
{
return (0);
}

a++;
}
return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])

{
int a;
int g;
int b = 0;

a = 1;
while (a < argc)
{
if (check_num(argv[a]))

{
g = atol(argv[a]);
b += g;
}
else
{
printf("Error\n");
return (1);
}

a++;
}

printf("%d\n", b);

return (0);
}
