#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: input val,minimum range of values stored
 * @max: input val,maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = (int *)malloc((max - min + 1) * sizeof(int));

	if (arr)
	{
		for (i = 0; i <= max - min; i++)
			arr[i] = min + i;
	}
	return (arr);
}
