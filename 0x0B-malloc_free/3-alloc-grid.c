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
	int i, int j;

	if(width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));

	if(grid == NULL)
		return (NULL);

	for(i = 0; i < height; i++)
