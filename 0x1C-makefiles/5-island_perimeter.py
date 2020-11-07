#!/usr/bin/python3
"""
Island Permieter
"""


def island_perimeter(grid):
        """Island Permieter"""

        n = 0
        for i in range(len(grid)):
                for j in range(len(grid[i])):
                        if grid[i][j] is 1:
                                if i > 0 and i < len(grid) - 1:
                                        if grid[i - 1][j] is 0:
                                                n += 1
                                        if grid[i + 1][j] is 0:
                                                n += 1
                                else:
                                        n += 2
                                if j > 0 and j < len(grid[i]) - 1:
                                        if grid[i][j - 1] is 0:
                                                n += 1
                                        if grid[i][j + 1] is 0:
                                                n += 1
                                else:
                                        n += 2

        return n
