#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: Number of paramters passed to the function.
 * @...: Variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0, return 0
 */


int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	sum = 0;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
