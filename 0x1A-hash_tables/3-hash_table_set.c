#include "hash_tables.h"

/**
 * add_node- adds new node at the beginning of a linked list
 * @head: The start of list
 * @key: key
 * @value: value
 * Return: head of a node
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
		free(new_node->key);
	new_node->value = strdup(value);
	if (new_node->value == NULL)
		free(new_node->value);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash node
 * @key: The key of a data
 * @value: value asociated to a key
 * Return: 0 if fails, 1 if not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;

	if (!key || !value || strlen(key) == 0 || strlen(value) == 0)
		return (0);
	if (!ht || !(ht->array) || ht->size == 0)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	if (ht->array[i] != 0)
	{
		if ((strcmp(ht->array[i]->key, key)) == 0)
		{
			free((ht->array[i])->value);
			(ht->array[i])->value = strdup(value);
			return (1);
		}
		else
			add_node(&(ht->array[i]), key, value);
	}
	else
		add_node(&(ht->array[i]), key, value);
	return (1);
}
