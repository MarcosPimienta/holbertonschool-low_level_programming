#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - deletes node to list in the i position
* @head: double pointer to the*h of the linked list.
* @index: integer for the nth position.
* Return: number of elements.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (temp->next)
			temp->next->prev = NULL;
		(*head) = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);
	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
