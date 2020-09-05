#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * print_dlistint - prints doublelinked list
 * @h: pointer to the head of the linked list
 * Return: number of elements.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *temp = h;

		while (temp)
		{
			if (!temp->next && !temp->prev)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("%d\n", temp->n);
			}
			temp = temp->next;
			i++;
		}
		return (i);
}
