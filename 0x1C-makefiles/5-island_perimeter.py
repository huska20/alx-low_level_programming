#!/usr/bin/python3
"""Characterizes an island edge estimating function."""

def island_perimeter(grid):
    """Return the perimiter of an island.

    The framework addresses water by 0 and land by 1.

    Args:
        framework (list): A rundown of rundown of numbers addressing an island.
    Returns:
        The edge of the island characterized in network.
     """
     width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2

