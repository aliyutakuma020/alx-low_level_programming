#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function free 2d array.
 * @grid: 2d grid.
 * @height: height dimension of grid.
 * Description: frees memory of grid.
 * Return: return (0).
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
