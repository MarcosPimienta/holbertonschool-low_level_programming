#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - prints linked list
 * @h: pointer to the head of the linked list
 * Return: number of elements.
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *temp = h;

		while (temp)
		{
			if (!temp->str)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] %s\n", temp->len, temp->str);
			}
				temp = temp->next;
				i++;
			}
		return (i);
}
