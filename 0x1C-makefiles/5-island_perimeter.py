#!/usr/bin/python3
"""
Island Permieter
"""


def island_perimeter(grid):
        """Island Permieter"""

        n = 0
        for i in range(len(grid)):
                for j in range(len(grid[i])):
                        if i > 0 and i < len(grid) - 1:
                                if grid[i - 1][j] is 1:
                                        n += 1
                                if grid[i + 1][j] is 1:
                                        n += 1
                        if j > 0 and j < len(grid[i]) - 1:
                                if grid[i][j - 1] is 1:
                                        n += 1
                                if grid[i][j + 1] is 1:
                                        n += 1

        return n - 1
