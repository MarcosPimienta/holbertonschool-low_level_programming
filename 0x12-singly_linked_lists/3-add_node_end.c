#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* _strlen - length of string.
*Return: always i.
*@s: string characters.
*
*/

int _strlen(const char *s)
{
int i = 0;

while (s[i] != '\0')
i++;
return (i);
}

/**
* add_node_end - adds node to list at end
* @head: double pointer to the head of the linked list
* @str: string to be duplicated.
* Return: number of elements.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *tmp;

	newNode = malloc(sizeof(list_t));

	if (!newNode)
	return (NULL);

	newNode->len = _strlen(str);
	newNode->str = strdup(str);
	newNode->next = NULL;

	if (!*head)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newNode;
	}
	return (newNode);
}
