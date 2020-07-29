#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees a list_t list.
 * @head: pointer to the head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *tmp_2;

	if (!head)
		return;

	tmp_2 = *head;
	while (tmp_2 != NULL)
	{
		tmp = tmp_2;
		tmp_2 = tmp_2->next;
		free(tmp);
	}
	*head = NULL;
}
