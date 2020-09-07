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
	size_t i = 0;
	const dlistint_t *temp = NULL;

	if (!h)
		return ('\0');
	temp = h;
		while (temp)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
			i++;
		}
	return (i);
}
