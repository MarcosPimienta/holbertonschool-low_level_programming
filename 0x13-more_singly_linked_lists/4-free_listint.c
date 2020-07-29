#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - frees memory of listint
 * @head: pointer to the head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head;
		head = head->next;

		free(tmp);
	}
	free(head);
}
