#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - prints length list elements number
 * @n: integer  to be added
 * @head: pointer to head
 * Return: number of elements.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
	return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
