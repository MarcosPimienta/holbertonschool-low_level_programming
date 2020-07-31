#ifndef BITWISE
#define BITWISE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Our print character function*/
int _putchar(char c);

/* function that converts a binary number to an unsigned int.*/
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
#endif
