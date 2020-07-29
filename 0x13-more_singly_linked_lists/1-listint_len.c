#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * listint_len - prints linked list elements number
 * @h: pointer to the head of the linked list
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

		while (h != NULL)
		{
			h = h->next;
			i++;
		}
		return (i);
}
