#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid- returns a pointer to a two dimensional array
 * @width: rows
 * @height: columns
 *
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if(width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));

	if(grid == NULL)
		return (NULL);

	for(i = 0; i < height; i++)
		{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL) /* validate memory */
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++) /* set array values to 0 */
			grid[i][j] = 0;
	}

	return (grid);
}
