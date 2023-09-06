#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - deturns a pointer to a new string
 * which is a duplicate of the string
 * @str: input value(char)
 * Return: 0
 */

char *_strdup(char *str)
{
	char *duplicate;

	if (!str)
		return (NULL);
	duplicate = (char *)malloc(strlen(str) + 1);
	return (duplicate ? strcpy(duplicate, str) : NULL);
}
