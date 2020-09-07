#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* add_dnodeint - adds node to list
* *h: double pointer to the*h of the linked list
* @n: integer constant.
* Return: number of elements.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *temp = (*h);
	unsigned int i = 0;

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
	return NULL;
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
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
		return NULL;
	newNode->prev = temp;
	newNode->next = temp->next;
	temp->next = newNode;
	if(temp->next)
		newNode->next->prev = newNode;
	return (newNode);
}
