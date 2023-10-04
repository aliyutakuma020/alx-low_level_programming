#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of intege.
 *@width: input 1.
 *@height: input 2.
 *Return: pointer to 2 dim. array.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
	if (grid[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
			free(grid[j]);
		}
		free(grid);
		return (0);
	}
	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
	}
	return (grid);
}
