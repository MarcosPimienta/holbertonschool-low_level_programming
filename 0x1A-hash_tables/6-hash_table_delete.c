#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht: hash node
 * Return: 0 if fails, 1 if not
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *aux =  NULL, *tmp = NULL;

	if (!ht)
		return;
	if (ht->size == 0 || !ht->array)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux)
		{
			tmp = aux;
			aux = aux->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
