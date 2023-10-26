#!/usr/bin/python3
"""
A Module for the island perimeter function
"""


def island_perimeter(grid):
    """ A function that returns the perimeter of the island described in grid

    :arg grid:
        (list) A list of list of integers
    :return:
        int: The perimeter of the island
    """
    if not isinstance(grid, list):
        return

    length = 0
    breadth = 1
    for g_list in grid:
        if 1 in g_list:
            length += 1
        if g_list.count(1) > 1:
            breadth = g_list.count(1)
    return (length + breadth) * 2
