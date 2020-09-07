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

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
	return (NULL);

	
	newNode->n = n;
	newNode->prev = NULL;
	if (*head)
		(*head)->prev = newNode;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
