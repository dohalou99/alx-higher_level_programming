#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end -  adds a new node at the end of a
 * @head: the input list
 * @n: the input element in list
 * Return: new element/NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newest, *strt;

	strt = *head;
	newest = malloc(sizeof(dlistint_t));
	if (newest == NULL)
		return (NULL);
	if (*head == NULL)
	{
		newest->next = NULL;
		newest->n = n;
		newest->prev = NULL;
		*head = newest;
		return (newest);
	}
	while (strt->next)
	{
		strt = strt->next;
	}
	strt->next = newest;
	newest->prev = strt;
	newest->next = NULL;
	newest->n = n;
	return (newest);
}
