#!/usr/bin/python3
"""Calculate the perimiter for an island."""


def island_perimeter(grid):
    """Get the perimeter of the grid."""
    perimeter = 0
    for row in range(len(grid)):
        for cell in range(len(grid[row])):
            if grid[row][cell] == 0:
                continue
            try:
                perimeter += 4 - (
                    grid[row - 1][cell] +
                    grid[row + 1][cell] +
                    grid[row][cell - 1] +
                    grid[row][cell + 1]
                )
            except IndexError:
                return ''
    return perimeter
