#include "main.h"

/**
 * positive_or_negative: prints positive or negative numbers
 *@i: integer accepted into the function
 * Return: void
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positiive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
