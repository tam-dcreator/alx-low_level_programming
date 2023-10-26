#!/usr/bin/python3
"""
A Module for the island perimeter function
"""


def island_perimeter(grid):
    """ A function that returns the perimeter of the island described in grid

    :arg grid:
        (list) A nested list of integers
    :return:
        int: The perimeter of the island
    """
    if not isinstance(grid, list):
        return

    perimeter = 0
    # Iterate through the length
    for i in range(len(grid)):
        # Iterate through the breadth
        for j in range(len(grid[i])):
            # If you encounter 1, perimeter of that space becomes 4
            if grid[i][j] == 1:
                perimeter += 4
                # Check if the space is bothered by other valid spaces
                # Reduce perimeter if it is.
                if i != 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i != len(grid) - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j != 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j != len(grid[i]) - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter
