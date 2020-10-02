#include "hash_tables.h"
/**
 * hash_table_create - creates has table
 *
 * @size: unsigned long int
 */
hash_table_t *hash_table_create(unsigned long int size)
{
        hash_table_t *ht = NULL;
        ht = malloc(sizeof (hash_table_t));
        ht->array = malloc(sizeof (hash_node_t*) * size);

        return (ht);
}
