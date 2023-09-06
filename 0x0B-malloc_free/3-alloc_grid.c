#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input value
 * @height: height input value
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (!grid)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)calloc(width, sizeof(int));
		if (!grid[i])
		{
			while (i >= 0)
				free(grid[i--]);
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
