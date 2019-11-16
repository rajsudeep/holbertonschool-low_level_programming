#!/usr/bin/python3
"""
Module that finds the perimeter of an island
"""


def island_perimeter(grid):
    """ Finds the perimeter of an island """
    count = 0
    for j, r in enumerate(grid):
        for i, c in enumerate(r):
            if c == 1:
                if j == 0 or grid[j - 1][i] == 0:
                    count += 1
                if i == 0 or grid[j][i - 1] == 0:
                    count += 1
                if j == len(grid) - 1 or grid[j + 1][i] == 0:
                    count += 1
                if i == len(r) - 1 or grid[j][i + 1] == 0:
                    count += 1
    return count
