#!/usr/bin/python3
"""this function defines an island perimeter."""


def num_water_neighbors(grid, m, p):
    """Returns the perimeter of the island described in grid."""

    num = 0

    if m <= 0 or not grid[m - 1][p]:
        num += 1
    if p <= 0 or not grid[m][p - 1]:
        num += 1
    if p >= len(grid[m]) - 1 or not grid[m][p + 1]:
        num += 1
    if m >= len(grid) - 1 or not grid[m + 1][p]:
        num += 1

    return num


def island_perimeter(grid):
    """Returns perimeter of island defined in grid."""

    perim = 0
    for m in range(len(grid)):
        for p in range(len(grid[m])):
            if grid[m][p]:
                perim += num_water_neighbors(grid, m, p)

    return perim
