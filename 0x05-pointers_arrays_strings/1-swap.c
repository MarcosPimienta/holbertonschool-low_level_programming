#include "holberton.h"
/**
*swap_int - swap variables values
*@a: number variable to be swapped.
*@b: number variable to be swapped.
*
*/
void swap_int(int *a, int *b)
{
int temp;

temp = *b;
*b = *a;
*a = temp;
}
