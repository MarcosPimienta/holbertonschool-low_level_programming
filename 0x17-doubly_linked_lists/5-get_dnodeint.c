#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - prints nth node from list
 * @index: unsigned int index
 * @head: pointer to the head of the linked list
 * Return: number of elements.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

		while (current != NULL)
		{
			if (i == index)
			{
				return (current);
			}
			i++;
			current = current->next;
		}
	return (0);
}
