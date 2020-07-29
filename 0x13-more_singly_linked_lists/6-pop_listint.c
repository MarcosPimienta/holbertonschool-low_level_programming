#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - function that
 * frees a node.
 * @head: pointer to the head of the list
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int retval = 0;

	if (*head == NULL)
	return (0);

	if (*head != NULL)
	{
		tmp = (*head)->next;
		retval = (*head)->n;
		free(*head);
		*head = tmp;
	}
	return (retval);
}
