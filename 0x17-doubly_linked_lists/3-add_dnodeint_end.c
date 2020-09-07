#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* add_dnodeint_end - adds node to list at end
* @head: double pointer to the head of the linked list
* @n: const integer.
* Return: number of elements.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *lastNode;

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	lastNode = *head;
	while (lastNode->next != NULL)
		lastNode = lastNode->next;

	lastNode->next = newNode;
	newNode->prev = lastNode;
	newNode->next = NULL;

	return (newNode);
}
