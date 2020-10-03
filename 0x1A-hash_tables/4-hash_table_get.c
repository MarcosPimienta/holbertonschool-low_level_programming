#include "hash_tables.h"
/**
 * hash_table_get - gets an element from the hash table
 * @ht: hash node
 * @key: The key of a data
 * Return: 0 if fails, 1 if not
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *aux = NULL;

	if (!key || strlen(key) == 0 || !ht || !(ht->array) || ht->size == 0)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[i];
	while (aux)
	{
		if (strcmp(key, aux->key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
