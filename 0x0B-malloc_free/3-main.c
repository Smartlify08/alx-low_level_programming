#include <stdlib.h>
#include "main.h"
#include <stdio.h>


void print_grid(int **grid, int width, int height)
{
    int h, w;
    h = 0;

    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }
}

int main(void)
{
    int **grid;

    grid = alloc_grid(4, 2);
    if (grid == NULL)
    {
        return (1);
    }

    print_grid(grid, 4, 2);
    printf("\n");
    grid[0][2] = 98;
    grid[1][2] = 402;

    print_grid(grid, 4, 2);
    return (0);
}
