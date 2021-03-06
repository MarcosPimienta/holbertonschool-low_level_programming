#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* add_dnodeint - adds node to list
* @head: double pointer to the head of the linked list
* @n: integer constant.
* Return: number of elements.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!newNode)
	{
	free(newNode);
	return (NULL);
	}

	newNode->n = n;
	newNode->next = (*head);
	newNode->prev = NULL;
	if (*head)
		(*head)->prev = newNode;

	(*head) = newNode;

	return (newNode);
}
