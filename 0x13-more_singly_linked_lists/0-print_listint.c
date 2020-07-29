#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - prints linked list
 * @h: pointer to the head of the linked list
 * Return: number of elements.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

		while (h != NULL)
		{
				printf("%d\n", h->n);
				h = h->next;
				i++;
		}
		return (i);
}
