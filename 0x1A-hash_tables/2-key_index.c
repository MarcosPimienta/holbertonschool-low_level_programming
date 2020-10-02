#include "hash_tables.h"
/**
 * key_index - gets index of the searched key
 * @key: string  with value pair
 * @size: size of array
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((*hash_djb2)(key) % size);
}
