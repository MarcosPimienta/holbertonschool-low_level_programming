#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - add node at the end
 * @n: the integer added
 * @head: the first string in list
 * Return: pointer to function
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tmp;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
	newNode->next = *head;
	*head = newNode;
	}
	else
	{
	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
		tmp->next = newNode;
	}
	return (newNode);
}
