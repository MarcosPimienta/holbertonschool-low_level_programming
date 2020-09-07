#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * sum_dlistint - returns sum of n int data
 * @head: pointer to the head of the linked list
 * Return: number of elements.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;
	dlistint_t *nxt;

		while (temp)
		{
			nxt = temp->next;
			sum += temp->n;
			temp = nxt;
		}
	return (sum);
}
