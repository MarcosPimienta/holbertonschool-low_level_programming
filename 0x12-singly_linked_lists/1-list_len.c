#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
* list_len - prints length of list
* @h: pointer to the head of the linked list
* Return: number of elements.
*/
size_t list_len(const list_t *h)
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

			}
				temp = temp->next;
				i++;
			}
		return (i);
}
