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
* add_node - adds node to list
* @head: double pointer to the head of the linked list
* @str: string to be duplicated.
* Return: number of elements.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (!newNode)
	return (NULL);

	newNode->len = _strlen(str);
	newNode->str = strdup(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
