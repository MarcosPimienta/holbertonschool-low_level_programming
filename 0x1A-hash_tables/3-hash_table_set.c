#include "hash_tables.h"
/**
* add_node - adds node to list
* @head: double pointer to the head of the linked list
* @key: string to be duplicated.
* @value: string to be duplicated.
* Return: number of elements.
*/

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *newNode;

	newNode = malloc(sizeof(hash_node_t));

	if (!newNode)
	return (NULL);

	newNode->value = strdup(value);
	if (!(newNode->value))
		free(newNode);
	newNode->value = strdup(key);
	if (!(newNode->key))
		free(newNode);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
/**
 * hash_table_set - insert node at index
 * @ht: hash table pointer
 * @key: string  with value pair
 * @value: value of key
 * Return: 1 for node added.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_i = 0;

	if (!(ht->array) || ht->size == 0 || !ht)
		return (0);
	if (strlen(key) == 0 || strlen(value) == 0 || !(key) || !(value))
		return (0);

	k_i = key_index((const unsigned char *)key, ht->size);
	if (ht->array[k_i] != 0)
	{
		if (strcmp((ht->array[k_i]->key), key) == 0)
		{
			free(ht->array[k_i]->value);
			ht->array[k_i]->value = strdup(value);
			return (1);
		}
		else
			add_node(&(ht->array[k_i]), key, value);
	}
	else
		add_node(&(ht->array[k_i]), key, value);

	return (1);
}
