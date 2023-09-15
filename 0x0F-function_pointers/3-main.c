#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - Prints the result of simple operations
 * @argc: Number of arguments supplied to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;
	
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	if (operator[0] == '+')
		result = num1 + num2;
	else if (operator[0] == '-')
		result = num1 - num2;
	else if (operator[0] == '*')
		result = num1 * num2;
	else if (operator[0] == '/')
		result = num1 / num2;
	else if (operator[0] == '%')
		result = num1 % num2;
	else
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", result);
	return (0);
}
