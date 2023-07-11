#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: pointer to integer pointer to 2 dimensional grid
 * @height: height of the 2 dimensional grid to be freed
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for(; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
