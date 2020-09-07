#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - adds node to list in the nth position
* @h: double pointer to the*h of the linked list
* @n: integer constant.
* @idx: integer for the nth position.
* Return: number of elements.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp;
	unsigned int i;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = (*h);

		if (*h)
			(*h)->prev = newNode;
		(*h) = newNode;
		newNode->prev = NULL;
		return (newNode);
	}
	temp = (*h);
	i = 0;
	while (temp && i < idx - 1)
	{
		i++;
		temp = temp->next;
	}
	if (!temp)
		return (NULL);
	newNode->next = temp->next;
	newNode->prev = temp;
	if (temp->next)
		newNode->next->prev = newNode;
	temp->next = newNode;

	return (newNode);
}
