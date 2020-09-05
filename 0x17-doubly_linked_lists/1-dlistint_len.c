#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * dlistint_len - prints doublelinked list length
 * @h: pointer to the head of the linked list
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
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

			temp = temp->next;
			i++;
		}
	return (i);
}
