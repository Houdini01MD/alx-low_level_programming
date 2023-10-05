#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: Pointer to the 2-dimensional grid to be freed.
 * @height: Height of the grid.
 * Return: void
*/
void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
