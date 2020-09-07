#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* free_dlistint - function that
* frees a dlistint_t list.
* @head: pointer to the head of the list
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
