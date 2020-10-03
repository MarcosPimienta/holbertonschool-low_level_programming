#include "hash_tables.h"
/**
 * hash_table_print - prints all elements of array
 * @ht: hash node
 * Return: 0 if fails, 1 if not
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int x = 0;
	hash_node_t *aux;

	if (!ht)
		return;
	putchar('{');
	while (i < ht->size)
	{
		aux = ht->array[i];
		while (aux)
		{
			if (x == 1)
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
			x = 1;
			aux = aux->next;
		}
		i++;
	}
	printf("}\n");
}
