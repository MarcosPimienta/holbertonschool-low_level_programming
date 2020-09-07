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

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *temp = h;
	int i = 1;
	int len = dlistint_len(h);

	newNode = malloc(sizeof(dlistint_t));

	if (idx > len)
	{
	return NULL;
	}
	else if (idx == 1)
	{
	add_dnodeint(&h, 0);
	}
	else
	{
		while (i < idx - 1)
		{
			temp = temp->next;
			i++;
		}
		newNode->prev = temp;
		newNode->next = temp->next;
		temp->next = newNode;
		newNode->next->prev = newNode;
	}
	return (newNode);
}
