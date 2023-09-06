#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: input value one to concat
 * @s2: input value two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	concatenated = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	return (concatenated ? strcat(strcpy(concatenated, s1), s2) : NULL);
}
