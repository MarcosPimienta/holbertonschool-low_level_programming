#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* free_list - function that
* frees a list_t list.
* @head: pointer to the head of the list
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
