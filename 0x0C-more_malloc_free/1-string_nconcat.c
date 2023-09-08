#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	size_t s1_len, s2_len;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	result = (char *)malloc(s1_len + n + 1);

	if (result)
	{
		strcpy(result, s1);
		strncat(result, s2, n);
	}
	return (result);
}
